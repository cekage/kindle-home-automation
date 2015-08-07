#!/usr/bin/env python2
"""
This is a simple demo for an http server listening on my macbookpro (mbp)
on port 8080.
Each time a request is made to /?toggle=CUISINE it write "1" on TTYFILE
Each time a request is made to /?toggle=BUREAU it write "0" on TTYFILE

Read energia source code to understant what "1" and "0" do.
"""

from __future__ import print_function

import BaseHTTPServer

HOST_NAME = 'mbp'        #!!!REMEMBER TO CHANGE THIS!!!
PORT_NUMBER = 8080       #!!!REMEMBER TO CHANGE THIS!!!
TTYFILE = "/dev/msp430"  #!!!REMEMBER TO CHANGE THIS!!!

class MyHandler(BaseHTTPServer.BaseHTTPRequestHandler):
    """ basic http handler """
    def do_GET(self):
        """Respond to a GET request."""
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        if self.path == "/?toggle=CUISINE":
            msp430tty = open(TTYFILE, 'w')
            print("1", file=msp430tty)
            msp430tty.close()
        elif self.path == "/?toggle=BUREAU":
            msp430tty = open(TTYFILE, 'w')
            print("0", file=msp430tty)
            msp430tty.close()
        self.wfile.write("<!-- done %s -->\n" % self.path)

if __name__ == '__main__':
    HTTPD = BaseHTTPServer.HTTPServer((HOST_NAME, PORT_NUMBER), MyHandler)
    print("Server Starts - %s:%s" % (HOST_NAME, PORT_NUMBER))
    try:
        HTTPD.serve_forever()
    except KeyboardInterrupt:
        pass
    HTTPD.server_close()
    print("Server Stops - %s:%s" % (HOST_NAME, PORT_NUMBER))
