pub fn square_of_sum(n: u32) -> u32 {
    let mut out = 0;
    for i in 0..=n {
        out += i;
    }
    out *= out;
    out
}

pub fn sum_of_squares(n: u32) -> u32 {
    let mut out = 0;
    for i in 0..=n {
        out += i * i;
    }
    out
}

pub fn difference(n: u32) -> u32 {
    square_of_sum(n) - sum_of_squares(n)
}
