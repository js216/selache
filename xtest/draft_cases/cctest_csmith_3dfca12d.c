// SPDX-License-Identifier: MIT
// cctest_csmith_3dfca12d.c --- cctest case csmith_3dfca12d (csmith seed 1039966509)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1e474b08 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1039966509 -o /tmp/csmith_gen_kzcfqqkh/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint16_t g_21 = 0x6E6AL;
static int8_t g_62[4][3][3] = {{{1L,0L,(-9L)},{(-1L),1L,1L},{1L,3L,(-6L)}},{{1L,0x85L,(-6L)},{4L,(-6L),1L},{0L,0L,(-9L)}},{{(-6L),(-6L),0L},{0L,0x85L,1L},{0L,3L,0L}},{{(-6L),1L,0x85L},{0L,0L,0L},{4L,(-8L),1L}}};
static uint64_t g_66[4] = {0x824FFAD6770D28CDLL,0x824FFAD6770D28CDLL,0x824FFAD6770D28CDLL,0x824FFAD6770D28CDLL};
static uint32_t g_67[2][1][1] = {{{0x6D65DBDCL}},{{0x6D65DBDCL}}};
static int32_t g_75 = (-6L);
static uint8_t g_99 = 2UL;
static int16_t g_128 = 0xC7E2L;
static int64_t g_130[2] = {0x527E36A8F31C0784LL,0x527E36A8F31C0784LL};
static uint64_t g_146[4] = {0xAAD5B6D64A7F71B9LL,0xAAD5B6D64A7F71B9LL,0xAAD5B6D64A7F71B9LL,0xAAD5B6D64A7F71B9LL};
static int32_t g_158 = 0xCB814C84L;
static uint32_t g_159 = 0UL;



static uint16_t  func_1(void);
static int32_t  func_2(int32_t  p_3, const uint8_t  p_4);
static uint32_t  func_14(int32_t  p_15);
static int32_t  func_29(uint32_t  p_30, int32_t  p_31, uint16_t  p_32, const int16_t  p_33, int16_t  p_34);




static uint16_t  func_1(void)
{ 
    uint16_t l_11 = 0xF6B8L;
    int32_t l_68 = 0L;
    int16_t l_189 = 0x843FL;
    if (func_2((safe_add_func_int64_t_s_s((l_68 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_11 || (safe_add_func_uint32_t_u_u(0UL, func_14((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u(g_21)) != 0x35B263D188047D20LL) & 0UL), 0x51AFL)), l_11)))))), l_11)), l_11)) && (-10L))), g_21)), l_11))
    { 
        int32_t l_157[5] = {0x5CC4140FL,0x5CC4140FL,0x5CC4140FL,0x5CC4140FL,0x5CC4140FL};
        int i;
        --g_159;
    }
    else
    { 
        int8_t l_186 = 0x8DL;
        int32_t l_190 = 0xDCECC9C5L;
        l_190 = (((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_21 = (safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((((0xFCCBL & l_186) < ((((((safe_mul_func_uint8_t_u_u((l_11 != (g_62[1][2][0] &= g_66[0])), l_186)) ^ l_68) & 0xB673L) & g_130[0]) > 0x2AE17087L) | 0x18778202B69C3758LL)) && 1L), 7)) ^ 0x202EL) & g_66[1]), l_68)), 0x4D923BADFC128342LL))), 12)), 3)), 1UL)), 1)) < l_11) && l_186) , 1L), l_11)), g_75)) || 0L), g_66[1])), 10)), 1)) ^ l_189) , 65535UL) < g_67[1][0][0]) > l_189);
    }
    return l_11;
}



static int32_t  func_2(int32_t  p_3, const uint8_t  p_4)
{ 
    const uint32_t l_73 = 0x67733019L;
    int64_t l_142 = 0L;
    int32_t l_143 = 0L;
    int32_t l_144[3][1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_144[i][j] = 0x9A2A759BL;
    }
    for (g_21 = 0; (g_21 <= 3); g_21 = safe_add_func_int16_t_s_s(g_21, 8))
    { 
        uint64_t l_74 = 18446744073709551613UL;
        int32_t l_86 = (-1L);
        int8_t l_87 = (-10L);
        g_75 = (safe_sub_func_uint64_t_u_u(l_73, (l_74 = 0xB15E7CE1BF9D45AALL)));
        if (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((((l_74 | ((((l_86 = (((((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_74, 3)), l_74)) | (p_3 &= (((g_62[1][2][0] | g_66[1]) , l_74) == 0UL))) | 0L) ^ g_62[1][1][1]) || g_67[1][0][0])) != g_67[1][0][0]) < g_67[1][0][0]) || g_67[1][0][0])) < p_4) == p_4), g_62[1][2][0])) , g_21) >= g_67[1][0][0]), l_87)), p_4)) ^ l_73))
        { 
            g_75 = (p_3 , p_4);
        }
        else
        { 
            int8_t l_94 = 0x3BL;
            int32_t l_95[2];
            int32_t l_98 = 0xF50B00A4L;
            int i;
            for (i = 0; i < 2; i++)
                l_95[i] = 1L;
            g_75 = (((((g_99 &= (safe_div_func_int16_t_s_s(((l_95[0] = (safe_mod_func_int32_t_s_s(l_94, (p_3 & l_74)))) >= (l_98 = ((safe_add_func_int8_t_s_s(((g_67[1][0][0] ^= (((g_21 < 0xF45F95DF25DB31B8LL) < l_74) == p_4)) <= p_3), g_62[1][2][0])) > l_94))), (-1L)))) <= g_62[2][2][1]) == p_3) != 0xAEB4CD7CE17D6508LL) || l_86);
            l_86 = (safe_add_func_uint64_t_u_u(0x3E6CB93649196E2FLL, 0x64EC293C9755A17ALL));
        }
        for (l_74 = (-25); (l_74 <= 23); l_74++)
        { 
            uint32_t l_111 = 1UL;
            int32_t l_129 = 0x1985D36CL;
            if ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((+g_67[1][0][0]) && l_111), ((safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(p_4, (safe_unary_minus_func_uint8_t_u((g_62[2][0][2] != l_86))))) != 1UL), g_21)) & 0x43BFD272L))), g_62[1][2][0])), 65535UL)))
            { 
                int64_t l_117 = 0L;
                g_75 = (l_117 > ((safe_sub_func_int8_t_s_s(((0x03D8L ^ (safe_rshift_func_int8_t_s_u(g_67[0][0][0], 4))) != (safe_rshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((0x20E956D3L >= l_74), g_99)) && p_4) | p_3), g_66[2]))), g_66[1])) , l_87));
            }
            else
            { 
                return g_75;
            }
            if (((safe_mul_func_int16_t_s_s((l_129 = ((0xF050L <= p_4) || ((g_128 ^= (0L & ((-6L) && l_73))) > (-8L)))), g_66[1])) == 0L))
            { 
                uint64_t l_131 = 0xD2993284A0DC95FALL;
                int32_t l_145 = 0x850C123EL;
                l_131++;
                g_75 = (safe_rshift_func_uint8_t_u_s((p_3 & (safe_rshift_func_uint8_t_u_s(((l_87 , (((safe_mod_func_uint64_t_u_u(((l_74 == (safe_mod_func_uint32_t_u_u(g_67[1][0][0], 3UL))) == 18446744073709551611UL), g_130[0])) != 0x24FD1E69L) || l_142)) >= g_130[0]), g_66[1]))), 1));
                g_146[0]--;
            }
            else
            { 
                int16_t l_153[2];
                int32_t l_154[3];
                int i;
                for (i = 0; i < 2; i++)
                    l_153[i] = 0xE7DAL;
                for (i = 0; i < 3; i++)
                    l_154[i] = 0x206B3A0AL;
                l_129 = (g_75 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_153[1] = 0x09C7L) ^ l_154[0]), (-6L))), (g_99 = (p_3 , g_130[0])))) , l_129));
                if (l_144[1][0])
                    break;
                if (l_111)
                    continue;
            }
            for (p_3 = 0; (p_3 == (-3)); --p_3)
            { 
                return g_75;
            }
        }
    }
    return p_4;
}



static uint32_t  func_14(int32_t  p_15)
{ 
    int32_t l_47[3][5][4] = {{{(-1L),1L,0x3F0AEACBL,0L},{5L,0x3F0AEACBL,0x82169286L,0x3F0AEACBL},{0x82169286L,0x3F0AEACBL,5L,0L},{0x3F0AEACBL,1L,(-1L),0x82169286L},{0xD4C46983L,0L,0L,0xD4C46983L}},{{0xD4C46983L,0L,(-1L),0L},{0x3F0AEACBL,0xD4C46983L,5L,1L},{0x82169286L,1L,0x82169286L,1L},{5L,0xD4C46983L,0x3F0AEACBL,0L},{(-1L),0L,0xD4C46983L,0xD4C46983L}},{{0L,0L,0xD4C46983L,0x82169286L},{(-1L),1L,0x3F0AEACBL,0L},{5L,0x3F0AEACBL,0x82169286L,0x3F0AEACBL},{0x82169286L,0x3F0AEACBL,5L,0L},{0x3F0AEACBL,1L,(-1L),0x82169286L}}};
    uint64_t l_48 = 5UL;
    uint8_t l_49 = 0x6AL;
    const int32_t l_50 = 1L;
    int32_t l_65[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_65[i] = 0x27C2130BL;
    for (p_15 = 8; (p_15 >= (-23)); --p_15)
    { 
        return p_15;
    }
    g_67[1][0][0] = ((g_66[1] &= (safe_add_func_int16_t_s_s((l_65[0] = (safe_div_func_int32_t_s_s((~p_15), func_29((((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((g_21 , (l_48 ^= (safe_sub_func_uint32_t_u_u(p_15, (((safe_div_func_int16_t_s_s((((0x9B88L >= g_21) < l_47[0][1][3]) != l_47[0][1][3]), l_47[0][1][3])) <= g_21) , g_21))))) | p_15), g_21)), l_49)) >= g_21) >= l_49), l_47[0][1][3])) <= 0x4681L) | g_21), l_49)) & g_21) & g_21), l_47[0][3][2], g_21, l_50, g_21)))), 0xFA7DL))) >= 65528UL);
    return p_15;
}



static int32_t  func_29(uint32_t  p_30, int32_t  p_31, uint16_t  p_32, const int16_t  p_33, int16_t  p_34)
{ 
    int16_t l_63[3][2][3] = {{{7L,1L,7L},{1L,1L,1L}},{{7L,1L,7L},{1L,1L,1L}},{{7L,1L,7L},{1L,1L,1L}}};
    int32_t l_64 = 8L;
    int i, j, k;
    p_31 = g_21;
    l_64 = (safe_sub_func_int64_t_s_s(g_21, ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_34 | p_32), (safe_mod_func_uint16_t_u_u((+(((g_62[1][2][0] &= 1L) & l_63[0][1][0]) < g_21)), l_63[0][1][0])))), l_63[0][1][0])), l_63[0][1][0])) ^ l_63[1][1][2])));
    return g_62[1][0][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);

    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
