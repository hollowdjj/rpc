//
// Created by hollow on 4/16/22.
//

#include "test.pb.h"
#include <iostream>
#include <string>

using namespace protobuf_test;

int main() {
    LoginRequest req;
    req.set_name("dai jun jie");
    req.set_pwd("djj19980622");
    std::string send_req;
    if(req.SerializeToString(&send_req)) {
        std::cout<<send_req<<std::endl;
    }
    LoginRequest reqB ;
    if(reqB.ParseFromString(send_req)) {
        std::cout<<reqB.name()<<std::endl;
        std::cout<<reqB.pwd()<<std::endl;
    }

    LoginResponse resp;
    ResultCode* rc = resp.mutable_errcode();
    rc->set_errcode(200);
    rc->set_errmsg("ok");

    GetFriendListsResponse resp1;
    auto user1 = resp1.add_friend_list();
    user1->set_name("djj");
}