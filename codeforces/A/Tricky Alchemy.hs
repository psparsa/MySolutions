-- Problem: A. Tricky Alchemy
-- Contest: Codeforces - Codeforces Round 456 (Div. 2)
-- URL: https://codeforces.com/contest/912/problem/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

getValues :: IO [Integer]
getValues = map read . words <$> getLine

main :: IO ()
main = do
  [a, b] <- getValues
  [x, y, z] <- getValues

  let yellow = (x * 2) + y
  let blue = y + (z * 3)
  let ans = max (yellow - a) 0 + max (blue - b) 0

  print ans
