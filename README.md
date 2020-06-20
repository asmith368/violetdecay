To create a folder that only TAs and the Professor can read and execute files from, use the command:  chmod 050 
which will set the owner to have no permissions, the group to have read and execute permissions, and the others to have no permissions.
Then, use: chgrp eg-aff-faculty@gsuad.gsu.edu submissions
or: chown :eg-aff-faculty@gsuad.gsu.edu submissions
which will change the group of the submissions folder to the gsu faculty group, so they will have read and execute permissions. 

To change the name of Haymitch in the Hunger Games to Alexander, I used the following command in the vi editor: :%s/Haymitch/Alexander/g
which replaced all 232 instances of his name with my own. 
