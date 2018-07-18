#ifndef BSD_TCP_PCB_H
#define BSD_TCP_PCB_H


//filedesc -> fd_ofiles -> file{} -> f_data -> socket -> so_pcb
proc {};
struct filedesc {
    char *fd_ofileflags[];
    file *fd_ofiles[];
};

file {
    f_ops;
    f_data;
    f_type;
};

// f_ops -> fileops
struct fileops {
    fo_read; fo_write; fo_ioctl;fo_ioctl; fo_select; fo_close;
};
//f_data -> socket
socket {
    so_type; so_pcb;
};

struct inpcb {
    inp_next; inp_prev; inp_faddr; inp_fport; inp_laddr; inp_lport; inp_socket;
};


#endif //BSD_TCP_PCB_H
