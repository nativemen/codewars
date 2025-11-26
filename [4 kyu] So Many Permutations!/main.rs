use std::collections::HashSet;

pub fn permutations(s: &str) -> Vec<String> {
    fn permute(prefix: String, remain: String, set: &mut HashSet<String>) {
        if remain.is_empty() {
            set.insert(prefix);
            return;
        }

        let len = remain.len();

        for i in 0..len {
            let mut remain = remain.clone();
            let mut str = prefix.clone();
            let c = remain.remove(i);
            str.push(c);
            permute(str, remain, set);
        }
    }

    let mut sets = HashSet::new();

    permute(String::new(), s.to_string(), &mut sets);

    Vec::from_iter(sets.into_iter())
}

use itertools::Itertools;

pub fn permutations(s: &str) -> Vec<String> {
    s.chars()
        .permutations(s.len())
        .unique()
        .map(|v| v.iter().collect())
        .collect()
}

pub fn permutations(s: &str) -> Vec<String> {
    fn backtrace(array: &mut Vec<char>, str: &mut Vec<char>, len: usize, v: &mut Vec<String>) {
        if str.len() == len {
            let s = str.iter().collect();
            if !v.contains(&s) {
                v.push(s);
            }

            return;
        }

        for i in 0..len {
            if array[i] == '\0' {
                continue;
            }

            let old = array[i];
            str.push(array[i]);
            array[i] = '\0';
            backtrace(array, str, len, v);
            array[i] = old;
            str.pop();
        }
    }

    let mut array = s.chars().collect();
    let mut str = Vec::new();
    let mut v = Vec::new();

    backtrace(&mut array, &mut str, s.len(), &mut v);

    v
}
