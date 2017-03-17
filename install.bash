#!/usr/bin/env bash
set -e 
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" # get the absolute path to the script file


main()
{
    cd $SCRIPT_DIR
    python setup.py build 
    sudo python setup.py install
}



main
