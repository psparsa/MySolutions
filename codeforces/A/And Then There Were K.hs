-- Problem: A. And Then There Were K
-- Contest: Codeforces - Codeforces Round 721 (Div. 2)
-- URL: https://codeforces.com/contest/1527/problem/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Control.Monad (replicateM_)
import           Data.Bits     (Bits (shiftL, testBit))

main :: IO ()
main = do
  t <- readLn
  replicateM_ t $ do
    n <- readLn :: IO Int
    let last = foldl (\acc i -> if testBit n i then i else acc) 0 [0 .. 30]
    print (shiftL (1 :: Int) last - 1)

