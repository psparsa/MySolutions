-- Problem: A. Almost Prime
-- Contest: Codeforces - Codeforces Beta Round 26 (Codeforces format)
-- URL: https://codeforces.com/problemset/problem/26/A
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import           Data.List (nub)

isPrime :: Int -> Bool
isPrime n | n < 2 = False
          | otherwise = all (\x -> n `mod` x /= 0) [2 .. floor . sqrt $ fromIntegral n]

isAlmostPrime :: Int -> Bool
isAlmostPrime n = (length . nub $ filter (\x -> n `mod` x == 0 && isPrime x) [2 .. n]) == 2


main :: IO ()
main = do
    n <- readLn :: IO Int
    let ans = foldl (\acc i -> if isAlmostPrime i then acc + 1 else acc) 0 [1..n]
    print ans
