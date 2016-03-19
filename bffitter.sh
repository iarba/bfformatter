if [ $# -eq 0 ] ; then
    echo "Please specity the source"
    exit 0
fi
if [ $# -eq 1 ] ; then
    echo "Please specity the pattern"
    exit 0
fi
if [ ! -f $1 ] ; then
    echo "Source does not exist"
    exit 0
fi
if [ ! -f $2 ] ; then
    echo "Pattern does not exist"
    exit 0
fi
if [ -f ${3:-fitted.bf} ] ; then
    rm ${3:-fitted.bf}
fi
./cleaner $1 superclean.b
./fitter superclean.b $2 ${3:-fitted.bf}
rm superclean.b
if [ -f ${3:-fitted.bf} ] ; then
    exit 0
fi
echo "Fitting failed."
