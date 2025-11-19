fn two_sum(numbers: &[i32], target: i32) -> (usize, usize) {
    for i in 0..numbers.len() - 1 {
        for j in i + 1..numbers.len() {
            if numbers[i] + numbers[j] == target {
                return (i, j);
            }
        }
    }

    (0, 0)
}

fn two_sum(numbers: &[i32], target: i32) -> (usize, usize) {
    let mut nums = Vec::new();

    for (i, num) in numbers.iter().enumerate() {
        nums.push((num, i));
    }

    nums.sort();

    let mut left = 0;
    let mut right = nums.len() - 1;

    while left < right {
        let sum = nums[left].0 + nums[right].0;

        if sum == target {
            return (nums[left].1, nums[right].1);
        } else if sum < target {
            left += 1;
        } else {
            right -= 1;
        }
    }

    (0, 0)
}

use std::collections::HashMap;

fn two_sum(numbers: &[i32], target: i32) -> (usize, usize) {
    let mut maps = HashMap::new();

    for (i, num) in numbers.iter().enumerate() {
        maps.entry(num).or_insert(i);
    }

    for (i, num) in numbers.iter().enumerate() {
        if let Some(&index) = maps.get(&(target - num)) {
            if i != index {
                return (index, i);
            }
        }
    }

    (0, 0)
}

use std::collections::HashMap;

fn two_sum(numbers: &[i32], target: i32) -> (usize, usize) {
    let mut maps = HashMap::new();

    for (i, num) in numbers.iter().enumerate() {
        if let Some(&index) = maps.get(&(target - num)) {
            return (index, i);
        }

        maps.entry(num).or_insert(i);
    }

    (0, 0)
}
