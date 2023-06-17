-- Problem: A. Arpa’s hard exam and Mehrdad’s naive cheat
-- Contest: Codeforces - Codeforces Round 383 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/742/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

solve :: Int -> Int
solve n
    | n == 0 = 1
    | x == 0 = 6
    | x == 1 = 8
    | x == 2 = 4
    | otherwise = 2
    where x = n `mod` 4

readInt :: String -> Int
readInt = read

main :: IO ()
main = do
    x <- getLine
    print . solve . readInt $ x
