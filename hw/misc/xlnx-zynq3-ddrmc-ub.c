/*
 * QEMU model of the DDRMC_UB Microblaze ODS endpoint
 *
 * Copyright (c) 2018 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2018-09-03.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#include "hw/fdt_generic_util.h"

#ifndef XILINX_DDRMC_UB_ERR_DEBUG
#define XILINX_DDRMC_UB_ERR_DEBUG 0
#endif

#define TYPE_XILINX_DDRMC_UB "xlnx.zynq3-ddrmc-ub"

#define XILINX_DDRMC_UB(obj) \
     OBJECT_CHECK(DDRMC_UB, (obj), TYPE_XILINX_DDRMC_UB)

REG32(DDRMC_PCSR_MASK, 0x0)
    FIELD(DDRMC_PCSR_MASK, BISR_TRIGGER, 25, 1)
    FIELD(DDRMC_PCSR_MASK, UB_INITSTATE, 24, 1)
    FIELD(DDRMC_PCSR_MASK, TEST_SAFE, 20, 1)
    FIELD(DDRMC_PCSR_MASK, SLVERREN, 19, 1)
    FIELD(DDRMC_PCSR_MASK, MEM_CLEAR_TRIGGER, 18, 1)
    FIELD(DDRMC_PCSR_MASK, SYS_RST_MASK, 15, 3)
    FIELD(DDRMC_PCSR_MASK, SLEEP, 10, 1)
    FIELD(DDRMC_PCSR_MASK, FABRICEN, 9, 1)
    FIELD(DDRMC_PCSR_MASK, HOLDSTATE, 7, 1)
    FIELD(DDRMC_PCSR_MASK, INITSTATE, 6, 1)
    FIELD(DDRMC_PCSR_MASK, ODISABLE, 2, 4)
    FIELD(DDRMC_PCSR_MASK, GATEREG, 1, 1)
    FIELD(DDRMC_PCSR_MASK, PCOMPLETE, 0, 1)
REG32(DDRMC_PCSR_CONTROL, 0x4)
    FIELD(DDRMC_PCSR_CONTROL, BISR_TRIGGER, 25, 1)
    FIELD(DDRMC_PCSR_CONTROL, UB_INITSTATE, 24, 1)
    FIELD(DDRMC_PCSR_CONTROL, TEST_SAFE, 20, 1)
    FIELD(DDRMC_PCSR_CONTROL, SLVERREN, 19, 1)
    FIELD(DDRMC_PCSR_CONTROL, MEM_CLEAR_TRIGGER, 18, 1)
    FIELD(DDRMC_PCSR_CONTROL, SYS_RST_MASK, 15, 3)
    FIELD(DDRMC_PCSR_CONTROL, SLEEP, 10, 1)
    FIELD(DDRMC_PCSR_CONTROL, FABRICEN, 9, 1)
    FIELD(DDRMC_PCSR_CONTROL, HOLDSTATE, 7, 1)
    FIELD(DDRMC_PCSR_CONTROL, INITSTATE, 6, 1)
    FIELD(DDRMC_PCSR_CONTROL, ODISABLE, 2, 4)
    FIELD(DDRMC_PCSR_CONTROL, GATEREG, 1, 1)
    FIELD(DDRMC_PCSR_CONTROL, PCOMPLETE, 0, 1)
REG32(DDRMC_PCSR_STATUS, 0x8)
    FIELD(DDRMC_PCSR_STATUS, HARD_FAIL_OR, 11, 3)
    FIELD(DDRMC_PCSR_STATUS, HARD_FAIL_AND, 8, 3)
    FIELD(DDRMC_PCSR_STATUS, MEM_CLEAR_PASS, 7, 1)
    FIELD(DDRMC_PCSR_STATUS, MEM_CLEAR_DONE, 6, 1)
    FIELD(DDRMC_PCSR_STATUS, CALERROR, 5, 1)
    FIELD(DDRMC_PCSR_STATUS, CALDONE, 4, 1)
    FIELD(DDRMC_PCSR_STATUS, INCAL, 3, 1)
    FIELD(DDRMC_PCSR_STATUS, SCAN_CLEAR_PASS, 2, 1)
    FIELD(DDRMC_PCSR_STATUS, SCAN_CLEAR_DONE, 1, 1)
    FIELD(DDRMC_PCSR_STATUS, PCSRLOCK, 0, 1)
REG32(DDRMC_PCSR_LOCK, 0xc)
    FIELD(DDRMC_PCSR_LOCK, STATE, 0, 1)
REG32(DDRMC_UB_ISR, 0x100)
    FIELD(DDRMC_UB_ISR, WATCHDOG_ERR, 7, 1)
    FIELD(DDRMC_UB_ISR, VT_TRACK_ERR, 6, 1)
    FIELD(DDRMC_UB_ISR, CALERROR, 5, 1)
    FIELD(DDRMC_UB_ISR, UB_MSG, 4, 1)
    FIELD(DDRMC_UB_ISR, DATA_UE, 3, 1)
    FIELD(DDRMC_UB_ISR, INSTR_UE, 2, 1)
    FIELD(DDRMC_UB_ISR, DATA_CE, 1, 1)
    FIELD(DDRMC_UB_ISR, INSTR_CE, 0, 1)
REG32(DDRMC_UB_ITR, 0x104)
    FIELD(DDRMC_UB_ITR, WATCHDOG_ERR, 7, 1)
    FIELD(DDRMC_UB_ITR, VT_TRACK_ERR, 6, 1)
    FIELD(DDRMC_UB_ITR, CALERROR, 5, 1)
    FIELD(DDRMC_UB_ITR, UB_MSG, 4, 1)
    FIELD(DDRMC_UB_ITR, DATA_UE, 3, 1)
    FIELD(DDRMC_UB_ITR, INSTR_UE, 2, 1)
    FIELD(DDRMC_UB_ITR, DATA_CE, 1, 1)
    FIELD(DDRMC_UB_ITR, INSTR_CE, 0, 1)
REG32(DDRMC_UB_IMR0, 0x108)
    FIELD(DDRMC_UB_IMR0, CALERROR, 3, 1)
    FIELD(DDRMC_UB_IMR0, UB_MSG, 2, 1)
    FIELD(DDRMC_UB_IMR0, DATA_CE, 1, 1)
    FIELD(DDRMC_UB_IMR0, INSTR_CE, 0, 1)
REG32(DDRMC_UB_IER0, 0x10c)
    FIELD(DDRMC_UB_IER0, CALERROR, 3, 1)
    FIELD(DDRMC_UB_IER0, UB_MSG, 2, 1)
    FIELD(DDRMC_UB_IER0, DATA_CE, 1, 1)
    FIELD(DDRMC_UB_IER0, INSTR_CE, 0, 1)
REG32(DDRMC_UB_IDR0, 0x110)
    FIELD(DDRMC_UB_IDR0, CALERROR, 3, 1)
    FIELD(DDRMC_UB_IDR0, UB_MSG, 2, 1)
    FIELD(DDRMC_UB_IDR0, DATA_CE, 1, 1)
    FIELD(DDRMC_UB_IDR0, INSTR_CE, 0, 1)
REG32(DDRMC_UB_IMR1, 0x114)
    FIELD(DDRMC_UB_IMR1, WATCHDOG_ERR, 3, 1)
    FIELD(DDRMC_UB_IMR1, VT_TRACK_ERR, 2, 1)
    FIELD(DDRMC_UB_IMR1, DATA_UE, 1, 1)
    FIELD(DDRMC_UB_IMR1, INSTR_UE, 0, 1)
REG32(DDRMC_UB_IER1, 0x118)
    FIELD(DDRMC_UB_IER1, WATCHDOG_ERR, 3, 1)
    FIELD(DDRMC_UB_IER1, VT_TRACK_ERR, 2, 1)
    FIELD(DDRMC_UB_IER1, DATA_UE, 1, 1)
    FIELD(DDRMC_UB_IER1, INSTR_UE, 0, 1)
REG32(DDRMC_UB_IDR1, 0x11c)
    FIELD(DDRMC_UB_IDR1, WATCHDOG_ERR, 3, 1)
    FIELD(DDRMC_UB_IDR1, VT_TRACK_ERR, 2, 1)
    FIELD(DDRMC_UB_IDR1, DATA_UE, 1, 1)
    FIELD(DDRMC_UB_IDR1, INSTR_UE, 0, 1)
REG32(DDRMC_UB_IOR, 0x120)
    FIELD(DDRMC_UB_IOR, OFFSET, 0, 5)
REG32(UB_CONFIG, 0x200)
    FIELD(UB_CONFIG, STARTCAL, 2, 1)
    FIELD(UB_CONFIG, RESET_MODE, 0, 2)
REG32(UB_WATCHDOG, 0x204)
    FIELD(UB_WATCHDOG, MAX_CNT, 16, 15)
    FIELD(UB_WATCHDOG, TIMEOUT, 1, 15)
    FIELD(UB_WATCHDOG, EN, 0, 1)
REG32(AXI_MONITOR, 0x208)
    FIELD(AXI_MONITOR, RESPONSE, 31, 1)
    FIELD(AXI_MONITOR, MAX_CNT, 16, 15)
    FIELD(AXI_MONITOR, TIMEOUT, 1, 15)
    FIELD(AXI_MONITOR, EN, 0, 1)
REG32(AXI_MONITOR_START_SLV0, 0x20c)
REG32(AXI_MONITOR_START_SLV1, 0x210)
REG32(AXI_MONITOR_START_SLV2, 0x214)
REG32(AXI_MONITOR_END_SLV0, 0x218)
REG32(AXI_MONITOR_END_SLV1, 0x21c)
REG32(AXI_MONITOR_END_SLV2, 0x220)
REG32(PMC2UB_INFO, 0x224)
    FIELD(PMC2UB_INFO, RESTORE_FREQ, 2, 1)
    FIELD(PMC2UB_INFO, SWITCH_TO_FREQ, 1, 1)
    FIELD(PMC2UB_INFO, PWR_DOWN_EXIT_RESTORE, 0, 1)
REG32(PMC2UB_INTERRUPT, 0x228)
    FIELD(PMC2UB_INTERRUPT, SPARE_2, 4, 1)
    FIELD(PMC2UB_INTERRUPT, SPARE_1, 3, 1)
    FIELD(PMC2UB_INTERRUPT, SPARE_0, 2, 1)
    FIELD(PMC2UB_INTERRUPT, SR_EXIT, 1, 1)
    FIELD(PMC2UB_INTERRUPT, SWITCH_FREQ, 0, 1)
REG32(UB2PMC_ACK, 0x22c)
    FIELD(UB2PMC_ACK, SPARE_2, 4, 1)
    FIELD(UB2PMC_ACK, SPARE_1, 3, 1)
    FIELD(UB2PMC_ACK, SPARE_0, 2, 1)
    FIELD(UB2PMC_ACK, SR_EXIT, 1, 1)
    FIELD(UB2PMC_ACK, SWITCH_FREQ, 0, 1)
REG32(UB2PMC_DONE, 0x230)
    FIELD(UB2PMC_DONE, SPARE_2, 4, 1)
    FIELD(UB2PMC_DONE, SPARE_1, 3, 1)
    FIELD(UB2PMC_DONE, SPARE_0, 2, 1)
    FIELD(UB2PMC_DONE, SR_EXIT, 1, 1)
    FIELD(UB2PMC_DONE, SWITCH_FREQ, 0, 1)
REG32(UB_STATUS, 0x234)
    FIELD(UB_STATUS, RESTORE_DONE, 1, 1)
    FIELD(UB_STATUS, AWAKE, 0, 1)
REG32(UB2PMC_GPO1, 0x238)
    FIELD(UB2PMC_GPO1, VAL, 0, 30)
REG32(UB2PMC_GPO2, 0x23c)
REG32(UB2PMC_GPO3, 0x240)
    FIELD(UB2PMC_GPO3, VAL, 0, 27)
REG32(PMC2UB_GPI1, 0x244)
    FIELD(PMC2UB_GPI1, VAL, 0, 21)
REG32(PMC2UB_GPI2, 0x248)
REG32(CLK_GATE, 0x24c)
    FIELD(CLK_GATE, BISR_EN, 6, 1)
    FIELD(CLK_GATE, ILA_EN, 5, 1)
    FIELD(CLK_GATE, SWITCH_RIU_EN, 4, 1)
    FIELD(CLK_GATE, SWITCH_DDRMC_EN, 3, 1)
    FIELD(CLK_GATE, SWITCH_FABRIC_EN, 2, 1)
    FIELD(CLK_GATE, RPI_EN, 1, 1)
    FIELD(CLK_GATE, AXI_MON_EN, 0, 1)
REG32(DBG_RPI, 0x250)
    FIELD(DBG_RPI, FIFO_EN, 0, 1)
REG32(UB2PMC_GPO4, 0x26c)
    FIELD(UB2PMC_GPO4, VAL_29_27, 6, 2)
    FIELD(UB2PMC_GPO4, VAL_15_10, 0, 6)
REG32(PMC2UB_GPI4, 0x270)
    FIELD(PMC2UB_GPI4, VAL_31_25, 0, 7)

#define DDRMC_UB_R_MAX (R_PMC2UB_GPI4 + 1)

#define LOCK_VAL 0xF9E8D7C6

typedef struct DDRMC_UB {
    SysBusDevice parent_obj;
    MemoryRegion iomem;

    qemu_irq rst_ub;
    qemu_irq wake_ub;

    uint32_t regs[DDRMC_UB_R_MAX];
    RegisterInfo regs_info[DDRMC_UB_R_MAX];
} DDRMC_UB;

#define PROPAGATE_GPIO(reg, f, irq, nirq) {       \
    bool val = ARRAY_FIELD_EX32(s->regs, reg, f); \
    qemu_set_irq(irq, val);                       \
    if (nirq) {                                   \
        qemu_set_irq(nirq, !val);                 \
    }                                             \
}

static void update_gpios(DDRMC_UB *s)
{
    PROPAGATE_GPIO(DDRMC_PCSR_CONTROL, UB_INITSTATE, s->rst_ub, s->wake_ub);
}

static void ddrmc_ub_pcsr_control_postw(RegisterInfo *reg, uint64_t val64)
{
    DDRMC_UB *s = XILINX_DDRMC_UB(reg->opaque);
    update_gpios(s);
}

static void ddrmc_ub_lock_postw(RegisterInfo *reg, uint64_t val64)
{
    DDRMC_UB *s = XILINX_DDRMC_UB(reg->opaque);
    uint32_t val = val64;
    bool locked;

    locked = ARRAY_FIELD_EX32(s->regs, DDRMC_PCSR_STATUS, PCSRLOCK);
    if (locked && val == LOCK_VAL) {
        locked = false;
    } else {
        locked |= FIELD_EX32(val, DDRMC_PCSR_LOCK, STATE);
    }
    ARRAY_FIELD_DP32(s->regs, DDRMC_PCSR_STATUS, PCSRLOCK, locked);
}

static const RegisterAccessInfo ddrmc_ub_regs_info[] = {
    {   .name = "DDRMC_PCSR_MASK",  .addr = A_DDRMC_PCSR_MASK,
        .rsvd = 0xfce07900,
        .ro = 0xe07900,
    },{ .name = "DDRMC_PCSR_CONTROL",  .addr = A_DDRMC_PCSR_CONTROL,
        .reset = 0x100047e,
        .rsvd = 0xfce07900,
        .ro = 0xe07900,
        .post_write = ddrmc_ub_pcsr_control_postw,
    },{ .name = "DDRMC_PCSR_STATUS",  .addr = A_DDRMC_PCSR_STATUS,
        .reset = R_DDRMC_PCSR_STATUS_PCSRLOCK_MASK
                 | R_DDRMC_PCSR_STATUS_SCAN_CLEAR_DONE_MASK
                 | R_DDRMC_PCSR_STATUS_SCAN_CLEAR_PASS_MASK
                 | R_DDRMC_PCSR_STATUS_CALDONE_MASK
                 | R_DDRMC_PCSR_STATUS_MEM_CLEAR_DONE_MASK
                 | R_DDRMC_PCSR_STATUS_MEM_CLEAR_PASS_MASK,
        .rsvd = 0xffffc000,
        .ro = 0x3fff,
    },{ .name = "DDRMC_PCSR_LOCK",  .addr = A_DDRMC_PCSR_LOCK,
        .reset = 0x1,
        .post_write = ddrmc_ub_lock_postw,
    },{ .name = "DDRMC_UB_ISR",  .addr = A_DDRMC_UB_ISR,
        .rsvd = 0xffffff00,
        .w1c = 0xff,
    },{ .name = "DDRMC_UB_ITR",  .addr = A_DDRMC_UB_ITR,
        .rsvd = 0xffffff00,
    },{ .name = "DDRMC_UB_IMR0",  .addr = A_DDRMC_UB_IMR0,
        .reset = 0xf,
        .rsvd = 0xfffffff0,
        .ro = 0xf,
    },{ .name = "DDRMC_UB_IER0",  .addr = A_DDRMC_UB_IER0,
        .rsvd = 0xfffffff0,
    },{ .name = "DDRMC_UB_IDR0",  .addr = A_DDRMC_UB_IDR0,
        .rsvd = 0xfffffff0,
    },{ .name = "DDRMC_UB_IMR1",  .addr = A_DDRMC_UB_IMR1,
        .reset = 0xf,
        .rsvd = 0xfffffff0,
        .ro = 0xf,
    },{ .name = "DDRMC_UB_IER1",  .addr = A_DDRMC_UB_IER1,
        .rsvd = 0xfffffff0,
    },{ .name = "DDRMC_UB_IDR1",  .addr = A_DDRMC_UB_IDR1,
        .rsvd = 0xfffffff0,
    },{ .name = "DDRMC_UB_IOR",  .addr = A_DDRMC_UB_IOR,
        .rsvd = 0xffffffe0,
    },{ .name = "UB_CONFIG",  .addr = A_UB_CONFIG,
        .reset = 0x5,
        .rsvd = 0xfffffff8,
    },{ .name = "UB_WATCHDOG",  .addr = A_UB_WATCHDOG,
        .reset = 0x400,
        .rsvd = 0x80000000,
    },{ .name = "AXI_MONITOR",  .addr = A_AXI_MONITOR,
        .reset = 0x400,
    },{ .name = "AXI_MONITOR_START_SLV0",  .addr = A_AXI_MONITOR_START_SLV0,
        .reset = 0x80000,
    },{ .name = "AXI_MONITOR_START_SLV1",  .addr = A_AXI_MONITOR_START_SLV1,
        .reset = 0x40000,
    },{ .name = "AXI_MONITOR_START_SLV2",  .addr = A_AXI_MONITOR_START_SLV2,
        .reset = 0xc0000,
    },{ .name = "AXI_MONITOR_END_SLV0",  .addr = A_AXI_MONITOR_END_SLV0,
        .reset = 0xbffff,
    },{ .name = "AXI_MONITOR_END_SLV1",  .addr = A_AXI_MONITOR_END_SLV1,
        .reset = 0x7ffff,
    },{ .name = "AXI_MONITOR_END_SLV2",  .addr = A_AXI_MONITOR_END_SLV2,
        .reset = 0xfffff,
    },{ .name = "PMC2UB_INFO",  .addr = A_PMC2UB_INFO,
        .rsvd = 0xfffffff8,
    },{ .name = "PMC2UB_INTERRUPT",  .addr = A_PMC2UB_INTERRUPT,
        .rsvd = 0xffffffe0,
    },{ .name = "UB2PMC_ACK",  .addr = A_UB2PMC_ACK,
        .rsvd = 0xffffffe0,
    },{ .name = "UB2PMC_DONE",  .addr = A_UB2PMC_DONE,
        .rsvd = 0xffffffe0,
    },{ .name = "UB_STATUS",  .addr = A_UB_STATUS,
        .rsvd = 0xfffffffc,
    },{ .name = "UB2PMC_GPO1",  .addr = A_UB2PMC_GPO1,
        .rsvd = 0xc0000000,
    },{ .name = "UB2PMC_GPO2",  .addr = A_UB2PMC_GPO2,
    },{ .name = "UB2PMC_GPO3",  .addr = A_UB2PMC_GPO3,
        .rsvd = 0xf8000000,
    },{ .name = "PMC2UB_GPI1",  .addr = A_PMC2UB_GPI1,
        .rsvd = 0xffe00000,
    },{ .name = "PMC2UB_GPI2",  .addr = A_PMC2UB_GPI2,
    },{ .name = "CLK_GATE",  .addr = A_CLK_GATE,
        .reset = 0x1f,
        .rsvd = 0xffffff80,
    },{ .name = "DBG_RPI",  .addr = A_DBG_RPI,
        .rsvd = 0xfffffffe,
    },{ .name = "UB2PMC_GPO4",  .addr = A_UB2PMC_GPO4,
        .rsvd = 0xffffff00,
    },{ .name = "PMC2UB_GPI4",  .addr = A_PMC2UB_GPI4,
        .rsvd = 0xffffff80,
    }
};

static void ddrmc_ub_reset(DeviceState *dev)
{
    DDRMC_UB *s = XILINX_DDRMC_UB(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }

    update_gpios(s);
}

static MemTxResult reg_write(void *opaque, hwaddr addr,
                             uint64_t data, unsigned size, MemTxAttrs attrs)
{
    RegisterInfoArray *reg_array = opaque;
    DDRMC_UB *s = XILINX_DDRMC_UB(reg_array->r[0]->opaque);

    /* Is the register set Locked?  */
    if (ARRAY_FIELD_EX32(s->regs, DDRMC_PCSR_STATUS, PCSRLOCK) &&
        addr != A_DDRMC_PCSR_LOCK) {
        return MEMTX_ERROR;
    }

    register_write_memory(opaque, addr, data, size);
    return MEMTX_OK;
}

static const MemoryRegionOps ddrmc_ub_ops = {
    .read = register_read_memory,
    .write_with_attrs = reg_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void ddrmc_ub_init(Object *obj)
{
    DDRMC_UB *s = XILINX_DDRMC_UB(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    RegisterInfoArray *reg_array;

    memory_region_init(&s->iomem, obj, TYPE_XILINX_DDRMC_UB,
                       DDRMC_UB_R_MAX * 4);
    reg_array =
        register_init_block32(DEVICE(obj), ddrmc_ub_regs_info,
                              ARRAY_SIZE(ddrmc_ub_regs_info),
                              s->regs_info, s->regs,
                              &ddrmc_ub_ops,
                              XILINX_DDRMC_UB_ERR_DEBUG,
                              DDRMC_UB_R_MAX * 4);
    memory_region_add_subregion(&s->iomem,
                                0x0,
                                &reg_array->mem);
    sysbus_init_mmio(sbd, &s->iomem);

    qdev_init_gpio_out_named(DEVICE(obj), &s->rst_ub, "rst-ub", 1);
    qdev_init_gpio_out_named(DEVICE(obj), &s->wake_ub, "wake-ub", 1);
}

static const VMStateDescription vmstate_ddrmc_ub = {
    .name = TYPE_XILINX_DDRMC_UB,
    .version_id = 1,
    .minimum_version_id = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, DDRMC_UB, DDRMC_UB_R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static const FDTGenericGPIOSet ddrmc_ub_gpios[] = {
    {
      .names = &fdt_generic_gpio_name_set_gpio,
      .gpios = (FDTGenericGPIOConnection[]) {
        { .name = "rst-ub", .fdt_index = 0, .range = 1 },
        { .name = "wake-ub", .fdt_index = 1, .range = 1 },
        { },
      },
    },
    { },
};

static void ddrmc_ub_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    FDTGenericGPIOClass *fggc = FDT_GENERIC_GPIO_CLASS(klass);

    dc->reset = ddrmc_ub_reset;
    dc->vmsd = &vmstate_ddrmc_ub;
    fggc->controller_gpios = ddrmc_ub_gpios;
}

static const TypeInfo ddrmc_ub_info = {
    .name          = TYPE_XILINX_DDRMC_UB,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(DDRMC_UB),
    .class_init    = ddrmc_ub_class_init,
    .instance_init = ddrmc_ub_init,
    .interfaces = (InterfaceInfo[]) {
        { TYPE_FDT_GENERIC_GPIO },
        { }
    },
};

static void ddrmc_ub_register_types(void)
{
    type_register_static(&ddrmc_ub_info);
}

type_init(ddrmc_ub_register_types)
