use num::{BigUint, One};

fn s(m: u8, n: BigUint) -> BigUint {
    if m == 0 {
        return BigUint::one();
    }

    let mut result = BigUint::one();

    for i in 1..m + 1 {
        result = result * (&n + i - 1u8) / i;
    }

    result
}

use num::{integer::binomial, BigUint};

fn s(m: u8, n: BigUint) -> BigUint {
    binomial(n + m - 1u8, m.into())
}
