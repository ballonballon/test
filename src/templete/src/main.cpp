/*
 * @Description: 
 * @Author: liukai
 * @Date: 2022-09-23 18:01:16
 * @LastEditTime: 2022-10-08 14:17:17
 * @LastEditors: liukai
 */
/*
    控制台输出 HelloVSCode !!!
*/
#include "ros/ros.h"

double test=1.00;

int main(int argc, char *argv[])
{
    // setlocale(LC_CTYPE, "zh_CN.utf8");
    // setlocale(LC_ALL,"");
    //执行节点初始化
    ros::init(argc,argv,"HelloVSCode");
    ros::NodeHandle nh;
    printf("%f\n",test);

    

    nh.getParam("templete/pitch",test);


    printf("%f\n",test);

    test/=180*M_PI;//* 优先级大于/=

    printf("%f\n",test);

    //输出日志
    // ROS_INFO("Hello VSCode!!!哈哈哈哈哈哈哈哈哈哈");
    return 0;
}
