use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|x| x.unwrap());

    let t: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..t {
        let n: usize = lines.next().unwrap().parse().unwrap();
        let s: String = lines.next().unwrap();

        let ones_count = s.chars().filter(|&c| c == '1').count();

        if ones_count % 2 == 1 {
            println!("NO");
        } else {
            if ones_count == 2 {
                if let Some(first_one) = s.find('1') {
                    if s.chars().nth(first_one + 1).unwrap() == '1' {
                        println!("NO");
                        continue;
                    }
                }
            }
            println!("YES");
        }
    }
}
