#!/bin/bash
sed -i -e "s/theo1/Wile E. Coyote/g" -i -e "s/steven1/Daffy Duck/g" -i -e "s/arnaud1/Porky Pig/g" -i -e "s/pierre-jean/Marvin the Martian/g" passwd | grep -e "Wile E. Coyote" -e "Daffy Duck" -e "Porky Pig" -e "Marvin the Martian" passwd
