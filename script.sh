find test_files/ -iname "*" -print0 | sort -zn | xargs -0 -I '{}' sh -c 'echo "-----------"; (ls -a '{}' | tail -c 8); ./fillit '{}''