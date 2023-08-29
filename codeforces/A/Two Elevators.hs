import           Control.Monad (replicateM_)

getValues :: IO [Integer]
getValues = map read . words <$> getLine

getAnswer :: Ord a => a -> a -> String
getAnswer a b
    | a < b = "1"
    | a > b = "2"
    | otherwise = "3"

main :: IO ()
main = do
  t <- readLn :: IO Int
  replicateM_ t $ do
    [a,b,c] <- getValues
    let tmp = (+) (abs (b-c)) (abs (c-1))
    let diff =  if a - 1 >= 0 then a - 1 else -(a - 1)
    putStrLn (getAnswer diff tmp)
