-- Problem: B. Triple
-- Contest: Codeforces - Codeforces Round 784 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1669/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Control.Monad (replicateM_)
import           Data.List     (find, group, sort)

getList :: IO [Integer]
getList = map read . words <$> getLine

getAnswer :: IO [Integer] -> IO String
getAnswer list' = do
  list <- list'
  let x = group . sort $ list
  case find (\g -> length g >= 3) x of
    Just g  -> return (show (head g))
    Nothing -> return "-1"

main :: IO()
main = do
    t <- readLn :: IO Int
    replicateM_ t $ do
        n <- readLn :: IO Int
        let list = getList
        ans <- getAnswer list
        putStrLn ans
