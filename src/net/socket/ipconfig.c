/**
 * @file
 * @details Automatic Configuration of IP -- use DHCP, BOOTP,
 * or user-supplied information to configure own IP address.
 *
 * @date 15.07.09
 * @author Nikolay Korotky
 */

#include <net/inetdevice.h>
#include <errno.h>
#include <assert.h>
#include <kernel/printk.h>

int ifdev_up(const char *if_name) {
	struct net_device *dev;

	assert(if_name != NULL);

	dev = netdev_get_by_name(if_name);
	if (dev == NULL) {
		printk("ifdev_up: error: can't find net_device with name %s\n", if_name);
		return -ENOENT;
	}

	return inet_dev_add_dev(dev);
}

int ifdev_down(const char *if_name) {
	struct in_device *in_dev;

	assert(if_name != NULL);

	in_dev = inet_dev_find_by_name(if_name);
	if (in_dev == NULL) {
		printk("ifdev_up: error: can't find net_device with name %s\n", if_name);
		return -ENOENT;
	}

	return inet_dev_remove_dev(in_dev);
}
