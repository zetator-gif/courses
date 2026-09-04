set -e
for((i=1;;i++)); do
    echo $1
    ./gen 5 10 $1 > int
//  diff <(./kd_ac < int) <(./kd_wa < int)
    diff <(./kd_ac < int) <(./kd_tle < int
done
