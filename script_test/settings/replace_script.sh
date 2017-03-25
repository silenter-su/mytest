#!/bin/bash
#此脚本功能是替换旧版snort的rule文件中的关键字threshold.
find ./ -name '*.rules'|xargs sed -i 's/threshold: type limit,/detection_filter:/g'
   
find ./ -name '*.rules'|xargs sed -i 's/threshold:type limit,/detection_filter:/g'

find ./ -name '*.rules'|xargs sed -i 's/threshold: type both,/detection_filter:/g'
  
find ./ -name '*.rules'|xargs sed -i 's/threshold:type both,/detection_filter:/g'

find ./ -name '*.conf'|xargs sed -i 's/threshold: type limit,/event_filter:/g'
   
find ./ -name '*.conf'|xargs sed -i 's/threshold:type limit,/event_filter:/g'

find ./ -name '*.conf'|xargs sed -i 's/threshold: type both,/event_filter:/g'
 
find ./ -name '*.conf'|xargs sed -i 's/threshold:type both,/event_filter:/g'

find ./ -name '*.conf'|xargs sed -i 's/threshold/event_filter/g'
echo 'complat!'
