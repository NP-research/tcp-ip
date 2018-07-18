#ifndef BSD_TCP_MBUF_H
#define BSD_TCP_MBUF_H

/*--- 128字节start --- */
struct mbuf {
    /*--- 20字节start --- */
    //4个4字节长度的字段和2个2字节的字段
    void m_next;
    void m_nextpkt;
    void m_len;
    void m_data;
    void m_type;
    void m_flags;
    /*--- 20字节end --- */

    /*--- 16字节的目标IP地址和端口号的sockaddr_in start ---*/
    void sockaddr_in{};
    /*--- 16字节的目标IP地址和端口号的sockaddr_in end ---*/

};
/*--- 128字节end ---*/

#endif //BSD_TCP_MBUF_H
