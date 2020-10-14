^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rosconsole
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.13.18 (2020-10-14)
--------------------
* support NO_COLOR environment variable (`#46 <https://github.com/ros/rosconsole/issues/46>`_)

1.13.17 (2020-08-06)
--------------------
* check MSVC predefined macro (`#45 <https://github.com/ros/rosconsole/issues/45>`_)

1.13.16 (2020-07-20)
--------------------
* fix message in filter parameters (`#43 <https://github.com/ros/rosconsole/issues/43>`_)

1.13.15 (2020-02-12)
--------------------
* export boost-regex-dev for now (`#38 <https://github.com/ros/rosconsole/issues/38>`_)

1.13.14 (2020-02-12)
--------------------
* add missing run dep for boost regex (`#37 <https://github.com/ros/rosconsole/issues/37>`_)

1.13.13 (2020-02-11)
--------------------
* bump minimum CMake version to avoid CMP0048 warning (`#36 <https://github.com/ros/rosconsole/issues/36>`_)

1.13.12 (2020-02-11)
--------------------
* declare specific boost dependencies (`#35 <https://github.com/ros/rosconsole/issues/35>`_)
* fix console printer to also print unknown levels (`#34 <https://github.com/ros/rosconsole/issues/34>`_)
* fix level comparison for compatibility with upstream log4cxx (`#33 <https://github.com/ros/rosconsole/issues/33>`_)

1.13.11 (2019-10-03)
--------------------
* direct WARN level messages to stderr (`#29 <https://github.com/ros/rosconsole/issues/29>`_)

1.13.10 (2019-03-04)
--------------------
* add missing declaration of deregister_appender in impl namespace (`#28 <https://github.com/ros/rosconsole/issues/28>`_)
* add deregistry declaration and base impl (`#23 <https://github.com/ros/rosconsole/issues/23>`_)
* dll import/export visibility macro update (`#26 <https://github.com/ros/rosconsole/issues/26>`_)
* fix long message causing program exit at exception (`#25 <https://github.com/ros/rosconsole/issues/25>`_)

1.13.9 (2018-11-12)
-------------------
* don't overlay variables in logging macro (`#21 <https://github.com/ros/rosconsole/issues/21>`_)

1.13.8 (2018-11-09)
-------------------
* fix double index increment in rosconsole_glog (`#15 <https://github.com/ros/rosconsole/issues/15>`_)
* trigger LOG_THROTTLE when time goes backwards (`#12 <https://github.com/ros/rosconsole/issues/12>`_)
* add deregistry function for LogAppender. (`#17 <https://github.com/ros/rosconsole/issues/17>`_)
* replaced zero for NULL for null pointer constants (`#14 <https://github.com/ros/rosconsole/issues/14>`_)
* fix rosconsole build issue when built on Windows (`#13 <https://github.com/ros/rosconsole/issues/13>`_)

1.13.7 (2018-05-21)
-------------------
* moved rosconsole into a separate repository (see `rosdistro#17919 <https://github.com/ros/rosdistro/issues/17919>`_)

1.13.6 (2018-02-05)
-------------------
* rename log macro argument from rate to period (`#1318 <https://github.com/ros/ros_comm/issues/1318>`_)

1.13.5 (2017-11-09)
-------------------

1.13.4 (2017-11-02)
-------------------

1.13.3 (2017-10-25)
-------------------
* replace 'while(0)' with 'while(false)' to avoid warnings (`#1179 <https://github.com/ros/ros_comm/issues/1179>`_)

1.13.2 (2017-08-15)
-------------------

1.13.1 (2017-07-27)
-------------------
* remove extra semicolon in definition of macro ROSCONSOLE_PRINTF_ATTRIBUTE(a, b) (`#1056 <https://github.com/ros/ros_comm/pull/1056>`_)
* add ROSCONSOLE_STDOUT_LINE_BUFFERED env var to force flushing stdout in Formatter::print (`#1012 <https://github.com/ros/ros_comm/issues/1012>`_)

1.13.0 (2017-02-22)
-------------------

1.12.7 (2017-02-17)
-------------------

1.12.6 (2016-10-26)
-------------------
* add missing walltime to roscpp logging (`#879 <https://github.com/ros/ros_comm/pull/879>`_)
* fix building on GCC-6 (`#911 <https://github.com/ros/ros_comm/pull/911>`_)

1.12.5 (2016-09-30)
-------------------

1.12.4 (2016-09-19)
-------------------

1.12.3 (2016-09-17)
-------------------

1.12.2 (2016-06-03)
-------------------

1.12.1 (2016-04-18)
-------------------
* use directory specific compiler flags (`#785 <https://github.com/ros/ros_comm/pull/785>`_)

1.12.0 (2016-03-18)
-------------------
* make LogAppender and Token destructor virtual (`#729 <https://github.com/ros/ros_comm/issues/729>`_)

1.11.18 (2016-03-17)
--------------------
* fix compiler warnings

1.11.17 (2016-03-11)
--------------------
* use boost::make_shared instead of new for constructing boost::shared_ptr (`#740 <https://github.com/ros/ros_comm/issues/740>`_)

1.11.16 (2015-11-09)
--------------------

1.11.15 (2015-10-13)
--------------------

1.11.14 (2015-09-19)
--------------------
* avoid redefining ROS_ASSERT_ENABLED (`#628 <https://github.com/ros/ros_comm/pull/628>`_)

1.11.13 (2015-04-28)
--------------------

1.11.12 (2015-04-27)
--------------------

1.11.11 (2015-04-16)
--------------------
* add DELAYED_THROTTLE versions of log macros (`#571 <https://github.com/ros/ros_comm/issues/571>`_)

1.11.10 (2014-12-22)
--------------------
* fix various defects reported by coverity

1.11.9 (2014-08-18)
-------------------

1.11.8 (2014-08-04)
-------------------

1.11.7 (2014-07-18)
-------------------

1.11.6 (2014-07-10)
-------------------

1.11.5 (2014-06-24)
-------------------
* rename variables within rosconsole macros (`#442 <https://github.com/ros/ros_comm/issues/442>`_)

1.11.4 (2014-06-16)
-------------------

1.11.3 (2014-05-21)
-------------------

1.11.2 (2014-05-08)
-------------------

1.11.1 (2014-05-07)
-------------------

1.11.0 (2014-03-04)
-------------------

1.10.0 (2014-02-11)
-------------------

1.9.54 (2014-01-27)
-------------------
* fix rosconsole segfault when using ROSCONSOLE_FORMAT with  (`#342 <https://github.com/ros/ros_comm/issues/342>`_)
* add missing run/test dependencies on rosbuild to get ROS_ROOT environment variable

1.9.53 (2014-01-14)
-------------------
* readd g_level_lockup symbol for backward compatibility when log4cxx is being used

1.9.52 (2014-01-08)
-------------------
* fix missing export of rosconsole backend interface library

1.9.51 (2014-01-07)
-------------------
* refactor rosconsole to not expose log4cxx, implement empty and log4cxx backends

1.9.50 (2013-10-04)
-------------------

1.9.49 (2013-09-16)
-------------------

1.9.48 (2013-08-21)
-------------------
* wrap condition in ROS_ASSERT_CMD in parenthesis (`#271 <https://github.com/ros/ros_comm/issues/271>`_)

1.9.47 (2013-07-03)
-------------------
* force CMake policy before setting preprocessor definition to ensure correct escaping (`#245 <https://github.com/ros/ros_comm/issues/245>`_)
* check for CATKIN_ENABLE_TESTING to enable configure without tests

1.9.46 (2013-06-18)
-------------------

1.9.45 (2013-06-06)
-------------------

1.9.44 (2013-03-21)
-------------------
* fix install destination for dll's under Windows

1.9.43 (2013-03-13)
-------------------

1.9.42 (2013-03-08)
-------------------
* fix handling spaces in folder names (`ros/catkin#375 <https://github.com/ros/catkin/issues/375>`_)

1.9.41 (2013-01-24)
-------------------

1.9.40 (2013-01-13)
-------------------
* fix dependent packages by pass LOG4CXX include dirs and libraries along
* fix usage of variable arguments in vFormatToBuffer() function

1.9.39 (2012-12-29)
-------------------
* first public release for Groovy
