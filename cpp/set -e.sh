set -e
for((i=1;;i++)); do
    echo $1
    ./gen 4 9 $1 > int
    diff <(./kd_ac < int) <()