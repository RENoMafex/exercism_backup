pub fn is_leap_year(year: u64) -> bool {
if year.is_multiple_of(100) && !year.is_multiple_of(400) {return false;}
if !year.is_multiple_of(4) {return false;}
true
}
