#!/usr/bin/python3
import logging

log_format = "%(levelname)s %(asctime)s: %(message)s"
logging.basicConfig(filename = "First.log", level = logging.DEBUG, format = log_format)
log = logging.getLogger()

log.debug("My first log")
log.info("My first log:- info")
log.error("My first log:- error")
log.warning("My first log:-warning")
log.critical("My first critical log")
print(log.level)
