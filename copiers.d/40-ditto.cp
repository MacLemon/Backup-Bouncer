ditto=/usr/bin/ditto

flags='--rsrc'

can-copy () {
    test -e $ditto
}

version () {
    # Argh.  ditto doesn't support --version!
    ls -l $ditto
}

backup () {
    sudo $ditto $flags $1 $2
}