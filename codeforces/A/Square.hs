-- Problem: A. Square
-- Contest: Codeforces - Codeforces Round 920 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1921/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM, replicateM_)

type Pos = (Int, Int)

getCornerCoordinate :: IO Pos
getCornerCoordinate = fmap ((\[a, b] -> (a, b)) . map read . words) getLine

main :: IO ()
main = do
  t <- getLine
  replicateM_ (read t :: Int) $
    do
      cornerCoordinates <- replicateM 4 getCornerCoordinate
      let (firstPoint : rest) = cornerCoordinates
      let sideLength =
            abs
              ( snd firstPoint
                  - snd
                    (head (filter (\i -> fst i == fst firstPoint) rest))
              )
      print (sideLength * sideLength)
