-- Problem: B. Two Buttons
-- Contest: Codeforces - Codeforces Round 295 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/520/B
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms


getValues :: IO [Int]
getValues = map read . words <$> getLine

getAns :: Int -> Int -> Int -> Int
getAns n m x
    | n > m = getAns n (m+1) (x+1)
    | n == m = x
    | mod m 2 == 0 = getAns n (div m 2) (x+1)
    | otherwise = getAns n (m+1) (x+1)

main :: IO ()
main = do
    [n,m] <- getValues
    print (if n > m then n - m else getAns n m 0)
