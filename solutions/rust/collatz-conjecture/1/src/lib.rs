pub fn collatz(n: u64) -> Option<u64> {
    let mut result = n;
    let mut i = 0;
    if result == 0 {return None;}
    while result != 1 {
        i += 1;
        if result.is_multiple_of(2) {
            result /= 2;
        } else {
            result = result * 3 + 1;
        }
    }
    Some(i)
}
