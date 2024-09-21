-- Problem: A. New Year Transportation
-- Contest: Codeforces - Good Bye 2014
-- URL: https://codeforces.com/problemset/problem/500/A
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import Data.Array.IO (
    IOUArray,
    MArray (newArray),
    newListArray,
    readArray,
 )

parseIntArr :: String -> [Int]
parseIntArr = map read . words

simulate :: IOUArray Int Int -> Int -> Int -> IO String
simulate cells pos dest
    | pos == dest = return "YES"
    | otherwise = do
        nextPos <- (+ pos) <$> readArray cells pos
        if nextPos <= dest then simulate cells nextPos dest else return "NO"

main :: IO ()
main = do
    [_, dest] <- parseIntArr <$> getLine
    cellsList <- parseIntArr <$> getLine
    cellsWithIndex <- newListArray (1, length cellsList) cellsList
    ans <- simulate cellsWithIndex 1 dest
    putStrLn ans
