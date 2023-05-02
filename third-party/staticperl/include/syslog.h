/**
 * @file
 *
 * @date Feb 27, 2023
 * @author: Yuriy Paramonov
 */

#ifndef SYSLOG_H_
#define SYSLOG_H_

#define LOG_CRIT    2 /* critical conditions */
#define LOG_ERR     3 /* error conditions */
#define LOG_WARNING 4 /* warning conditions */
#define LOG_NOTICE  5 /* normal but significant condition */
#define LOG_INFO    6 /* informational */
#define LOG_DEBUG   7 /* debug-level messages */

#define LOG_KERN   (0 << 3) //Reserved for message generated by the system.
#define LOG_USER   (1 << 3) //Message generated by a process.
#define LOG_MAIL   (2 << 3) //Reserved for message generated by mail system.
#define LOG_DAEMON (3 << 3) //Reserved for message generated by system daemon.
#define LOG_AUTH \
	(4 << 3) //Reserved for message generated by authorisation daemon.
#define LOG_SYSLOG   (5 << 3) //Messages generated internally by syslogd.
#define LOG_LPR      (6 << 3) //Reserved for message generated by printer system.
#define LOG_NEWS     (7 << 3) //Reserved for message generated by news system.
#define LOG_UUCP     (8 << 3) //Reserved for message generated by UUCP system.
#define LOG_CRON     (9 << 3) //Reserved for message generated by the clock daemon.
#define LOG_AUTHPRIV (10 << 3) //Security/authorization messages (private).
#define LOG_FTP      (11 << 3) //Message generated by ftp daemon.
#define LOG_LOCAL0   (16 << 3) //Reserved for local use.
#define LOG_LOCAL1   (17 << 3) //Reserved for local use.
#define LOG_LOCAL2   (18 << 3) //Reserved for local use.
#define LOG_LOCAL3   (19 << 3) //Reserved for local use.
#define LOG_LOCAL4   (20 << 3) //Reserved for local use.
#define LOG_LOCAL5   (21 << 3) //Reserved for local use.
#define LOG_LOCAL6   (22 << 3) //Reserved for local use.
#define LOG_LOCAL7   (23 << 3) //Reserved for local use.

#define LOG_PID    0x01
#define LOG_CONS   0x02
#define LOG_ODELAY 0x04
#define LOG_NDELAY 0x08
#define LOG_NOWAIT 0x10
#define LOG_PERROR 0x20

#endif /* SYSLOG_H_ */
