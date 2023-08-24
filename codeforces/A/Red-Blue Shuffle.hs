-- Problem: A. Red-Blue Shuffle
-- Contest: Codeforces - Codeforces Round 691 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/1459/A
-- Memory Limit: 512 MB
-- Time Limit: 2000 ms

import           Control.Monad (replicateM_)
import           Data.Char     (digitToInt)

countColors :: String -> String -> (Int, Int)
countColors [] [] = (0, 0)
countColors (x:xs) (y:ys) = (reds + red, blues + blue)
  where
    (reds, blues) = countColors xs ys
    red = if digitToInt x > digitToInt y then 1 else 0
    blue = if digitToInt x < digitToInt y then 1 else 0

getAnswer :: Int -> Int -> String
getAnswer red blue
  | red > blue = "RED"
  | red < blue = "BLUE"
  | otherwise = "EQUAL"


main :: IO ()
main = do
  t <- readLn
  replicateM_ t $ do
    n <- readLn :: IO Int
    r <- getLine
    b <- getLine

    let (numberOfReds, numberOfBlues) = countColors r b
    putStrLn (getAnswer numberOfReds numberOfBlues)
