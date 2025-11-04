# return a string with words separated by commas (see "Sample Tests")
#!/bin/bash
inArray() {
    local OLD_IFS="$IFS"
    local array1 array result word
    local input_str="$1"
    local target_str="$2"

    IFS=" " read -ra array1 <<< "$input_str"
    IFS="$OLD_IFS"

    declare -A seen
    local result_array=()

    for word in "${array1[@]}"; do
        if [[ -n $word && $target_str == *"$word"*     ]]; then
            if [[ -z ${seen[$word]}   ]]; then
                result_array+=("$word")
                seen["$word"]=1
            fi
        fi
    done

    if [[ ${#result_array[@]} -eq 0 ]]; then
        echo ""
        IFS="$OLD_IFS"
        return
    fi

    IFS=$'\n' sorted_array=($(sort <<< "${result_array[*]}"))
    IFS="$OLD_IFS"

    IFS=","
    echo "${sorted_array[*]}"
    IFS="$OLD_IFS"
}

inArray "$1" "$2"

# return a string with words separated by commas (see "Sample Tests")
#!/bin/bash
inArray() {
    for s in $1; do
        [[ $2 == *${s}* ]] && echo ${s}
    done | sort -u | paste -sd,
}

inArray "$1" "$2"
