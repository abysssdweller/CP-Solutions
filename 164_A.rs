use std::io::{self, BufRead};
     
fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|l| l.unwrap());
    
    let t: i32 = lines.next().unwrap().parse().unwrap();
 
    for _ in 0..t {
        let inputs: Vec<i32> = lines.next().unwrap().split_whitespace().map(|s| s.parse().unwrap()).collect();
        let n = inputs[0];
        let m = inputs[1];
        let k = inputs[2];
 
        let alice_can_paint = n - (n / m + (n % m != 0) as i32) > k;
 
        if alice_can_paint {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}