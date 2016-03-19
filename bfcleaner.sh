if [ $# -eq 0 ] ; then
    echo "Please specity the source"
    exit 0
fi
if [ ! -f $1 ] ; then
    echo "Source does not exist"
    exit 0
fi
./cleaner $1 ${2:-cleaned.bf}

