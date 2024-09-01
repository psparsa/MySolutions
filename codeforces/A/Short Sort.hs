-- Problem: A. Short Sort
-- Contest: Codeforces - Codeforces Round 898 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1873/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (elemIndex)
import Data.Maybe (fromMaybe)

getDiff :: Char -> String -> Int
getDiff char str = do
    let maybeResult = elemIndex char str
    let result = fromMaybe 0 maybeResult
    let boolResult = case char of
            'a' -> result /= 0
            'b' -> result /= 1
            'c' -> result /= 2
    fromEnum boolResult


answer = do
  input <- getLine
  let result = sum (map (`getDiff` input) input)
  putStrLn (if result == 3 then "No" else "Yes")


main = do
  input_n <- getLine
  let n = (read input_n :: Int)
  replicateM_ n answer