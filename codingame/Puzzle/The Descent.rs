// Problem: The Descent
// Mode: Puzzle
// URL: https://www.codingame.com/training/easy/the-descent

use std::io;

macro_rules! parse_input {
    ($x:expr, $t:ident) => ($x.trim().parse::<$t>().unwrap())
}

fn main() {

    // game loop
    loop {

        let mut a = 0;
        let mut b = 0;

        for i in 0..8 as usize {
            let mut input_line = String::new();
            io::stdin().read_line(&mut input_line).unwrap();
            let mountain_h = parse_input!(input_line, i32); // represents the height of one mountain.
            if mountain_h > a {
                a = mountain_h;
                b = i;
            }
        }

        // Write an action using println!("message...");
        // To debug: eprintln!("Debug message...");

        println!("{}", b); // The index of the mountain to fire on.
    }
}
