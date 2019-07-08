declare -i lineCount=0 fileNum=0

lineCount=$1
fileNum=$2

function usage {
    echo "Usage: $0 [line count] [file id]"
    echo Line Count: "${lineCount}"
    echo File ID: "${fileNum}"
    exit
}

if [ -z "${lineCount}" ]; then
   usage
fi
if [ "${fileNum}" -eq 0 ]; then
   fileNum=`ls -al pinball_* | wc -l`
   let "fileNum++"
fi
if [ -f "pinball_${fileNum}.c" ]; then
   echo File already exists!
   usage
fi

echo Size of Pinball.c: `cat pinball.c | wc -l`

head -n ${lineCount} pinball.c > pinball_${fileNum}.c
tail -n +${lineCount} pinball.c > pinball.0
mv pinball.0 pinball.c

echo Done!
echo New size of Pinball.c: `cat pinball.c | wc -l`