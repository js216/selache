// SPDX-License-Identifier: MIT
// cctest_csmith_e4db8fd4.c --- cctest case csmith_e4db8fd4 (csmith seed 3839594452)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5a6fbf2a */
/* @exp_ticks 0x3539 */

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

// Options:   -s 3839594452 -o /tmp/csmith_gen_x65aoqgj/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 0x5D6C05BAL;
static int8_t g_9 = 0x49L;
static int16_t g_11 = (-1L);
static uint8_t g_12 = 4UL;
static uint16_t g_32 = 0UL;
static int32_t g_33 = 0xDFD99643L;
static int32_t g_85 = 0x18FE3B64L;
static uint32_t g_120[4] = {0x80DBEA54L,0x80DBEA54L,0x80DBEA54L,0x80DBEA54L};
static int8_t g_121[1] = {1L};
static uint32_t g_140 = 0xB3F607BBL;
static uint32_t g_143[2][2] = {{18446744073709551606UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL}};
static int16_t g_162 = 6L;
static uint16_t g_164 = 0x3493L;
static uint16_t g_169[1] = {0xD85BL};
static int32_t g_174[2][3] = {{(-6L),(-6L),0x72394782L},{(-6L),(-6L),0x72394782L}};
static int32_t g_175 = 9L;
static uint32_t g_190 = 0UL;



static uint16_t  func_1(void);
static uint8_t  func_39(int32_t  p_40, int32_t  p_41, int16_t  p_42);
static int32_t  func_61(int32_t  p_62);




static uint16_t  func_1(void)
{ 
    int64_t l_5[4][2] = {{0xE0B4074DD03248C6LL,0xE0B4074DD03248C6LL},{0x8D3C891C5534BF8FLL,0xE0B4074DD03248C6LL},{0xE0B4074DD03248C6LL,0x8D3C891C5534BF8FLL},{0xE0B4074DD03248C6LL,0xE0B4074DD03248C6LL}};
    int32_t l_10 = 0x65720B96L;
    int32_t l_163 = 0x4B399E46L;
    const uint32_t l_179 = 18446744073709551608UL;
    int i, j;
    for (g_2 = 26; (g_2 >= 25); g_2--)
    { 
        if (l_5[0][0])
            break;
    }
    for (g_2 = 0; (g_2 <= 1); g_2 += 1)
    { 
        uint32_t l_6[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_6[i][j] = 1UL;
        }
        return l_6[0][0];
    }
    for (g_2 = 0; (g_2 < (-18)); g_2--)
    { 
        uint16_t l_17 = 1UL;
        int32_t l_187 = 0L;
        --g_12;
        if (g_2)
        { 
            int32_t l_30[4][4] = {{0x1D25BB08L,(-5L),0x1D25BB08L,0x1D25BB08L},{(-5L),(-5L),1L,(-5L)},{(-5L),0x1D25BB08L,0x1D25BB08L,(-5L)},{0x1D25BB08L,(-5L),0x1D25BB08L,0x1D25BB08L}};
            uint64_t l_55 = 18446744073709551607UL;
            uint32_t l_58[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_58[i] = 0x4D37718CL;
            for (g_9 = (-19); (g_9 < (-1)); g_9++)
            { 
                uint32_t l_31 = 0x3B0639E6L;
                l_17--;
                g_33 |= (safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(g_11, ((l_17 && (safe_sub_func_int64_t_s_s((g_32 |= ((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s((-1L), l_5[0][0])) >= l_30[2][2]) >= l_31), 0x7D6C5051L)) , g_11)), g_9))) ^ g_2))), l_30[3][2]));
            }
            if (g_9)
                break;
            if (((l_10 , l_10) | g_2))
            { 
                int32_t l_59[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_59[i][j] = 1L;
                }
                l_163 |= ((safe_div_func_uint16_t_u_u(((~4L) ^ (safe_lshift_func_uint8_t_u_u(func_39((((((safe_div_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mul_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s((l_55 >= (safe_rshift_func_uint16_t_u_s(((g_9 = g_2) > 0L), g_2))), 3)) , g_33) , g_32), 0L)) && l_10), 13)), l_58[0])), 0x953B22489AFFF74BLL)) , 0UL) | 1L), l_59[0][0])) | l_17) , (-5L)) & 0UL) < 0x3E63D4D864B91BF5LL), l_5[1][0], g_12), g_120[0]))), g_12)) > g_120[3]);
                ++g_164;
                g_174[0][0] = (((safe_div_func_int64_t_s_s((((g_169[0] = l_30[2][2]) ^ l_17) , (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_120[2], (-1L))), 0L))), 18446744073709551610UL)) != l_59[0][0]) || l_17);
            }
            else
            { 
                uint32_t l_186 = 18446744073709551615UL;
                g_175 = g_174[1][2];
                if (g_120[2])
                    break;
                l_187 = ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((l_179 , (l_186 = ((-1L) != ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_32, g_32)), g_169[0])), g_121[0])) & 8UL)))))), 0L)) <= g_140);
            }
        }
        else
        { 
            g_190 = ((((((g_143[1][0] , 65535UL) == (((g_164 | 0xF6173B26L) != l_163) > g_169[0])) , g_33) , 0x1848449B04C19E56LL) == g_2) , g_169[0]);
        }
        l_187 ^= ((safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((0x58E107FDL && (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((g_11 = (safe_rshift_func_int16_t_s_u((((((g_174[0][0] & ((safe_lshift_func_int8_t_s_u(g_169[0], 4)) != g_121[0])) , 0xD3928CDBBAE03F52LL) & 9L) > l_179) == g_169[0]), g_174[0][0]))), 0x8AD0L)) ^ g_121[0]), 8)) >= g_174[0][1]) , 1L), l_10)) ^ (-1L)), 12))), l_17)), 0xC0L)) | l_5[3][0]), 0UL)) > 0L);
    }
    return g_121[0];
}



static uint8_t  func_39(int32_t  p_40, int32_t  p_41, int16_t  p_42)
{ 
    int8_t l_60[4];
    int32_t l_151 = 0xF285608BL;
    int i;
    for (i = 0; i < 4; i++)
        l_60[i] = 0xE9L;
    for (g_33 = 0; (g_33 <= 3); g_33 += 1)
    { 
        int32_t l_160 = 0xCCA8444AL;
        int32_t l_161 = 0x416570B7L;
        int i;
        l_151 = func_61(l_60[g_33]);
        g_162 = ((((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((g_143[1][1] , ((safe_sub_func_uint32_t_u_u((((l_161 = (l_160 = ((safe_sub_func_uint32_t_u_u(l_60[g_33], ((1L <= l_60[0]) < l_151))) >= p_42))) >= 0xC066171EL) ^ g_85), 0x0451B912L)) > g_85)) < g_121[0]), 0x5AL)), l_60[g_33])) < 1UL) == 0UL) > 0x9D16BB71L);
    }
    return g_9;
}



static int32_t  func_61(int32_t  p_62)
{ 
    uint32_t l_65 = 0x8E2DC660L;
    int32_t l_77[2];
    int32_t l_80 = 0xF928D85EL;
    int32_t l_95[2];
    int i;
    for (i = 0; i < 2; i++)
        l_77[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_95[i] = 0L;
    if ((safe_div_func_int32_t_s_s(l_65, p_62)))
    { 
        uint32_t l_76 = 4294967292UL;
        uint32_t l_78 = 0x04C6930AL;
        uint8_t l_79[2];
        int32_t l_94 = 6L;
        int16_t l_122 = 0x70FEL;
        int32_t l_138[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_79[i] = 0UL;
        l_80 = (safe_mul_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(((l_77[1] = (p_62 ^= ((((((0xE5L & 0x5BL) && (2UL ^ g_12)) || g_32) , 1UL) > 0x91E6DCF67A9F6563LL) > l_76))) , 0xF835L), g_33)) >= l_65) ^ g_11), l_65)), l_78)) , 5UL), 0x02B8L)) == l_76) , l_79[1]), l_65));
        if ((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(((((g_85 = 1L) || (l_95[0] &= (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_11 || (l_94 = 0x1361L)), l_80)), p_62)), l_79[1])) == 0xF706C0A8DCCB6772LL), l_77[0])))) , (-10L)) && 248UL), g_9)) >= g_11) || 1UL), p_62)))
        { 
            uint32_t l_97 = 0x1369F8C3L;
            int32_t l_123[2];
            int i;
            for (i = 0; i < 2; i++)
                l_123[i] = 0xAA6B01F1L;
            l_97 ^= (safe_unary_minus_func_int64_t_s(p_62));
            l_123[0] ^= (safe_lshift_func_int8_t_s_s((g_9 = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s((g_121[0] = (safe_mul_func_int8_t_s_s((-1L), (((((safe_div_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(((l_79[0] , (safe_div_func_int8_t_s_s(p_62, g_2))) || l_97), 0xDB549FEDL)) , 0x32F7F6FD02479DA4LL), l_95[0])) || g_9), g_9)) == l_77[0]) == p_62) & 0x7E09021DL), l_97)) == 0x2E1657FB82E29568LL) && 0xAD55379293E9D6A3LL) & g_120[3]) , p_62)))), l_122)) || 0L) , g_33) <= p_62), 2)) || l_65), l_95[0]))), 4));
            if (l_123[1])
            { 
                uint32_t l_136[1][3];
                int32_t l_137 = (-10L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_136[i][j] = 0UL;
                }
                l_95[0] = (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((safe_mod_func_int64_t_s_s(((((((0x8D99L && (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(l_136[0][2], ((l_137 ^= (18446744073709551606UL <= p_62)) , 0xC3B0L))) && 0x24L), l_95[0])), g_120[3]))) && 8L) == p_62) , l_138[1][0]) != l_123[0]) == 7UL), g_120[1])) && p_62) != 1L), l_95[1])) <= 0x0E7D168DL), 0xD4L));
                if (l_137)
                    goto lbl_139;
            }
            else
            { 
lbl_139:
                l_94 = ((l_80 = g_121[0]) < 0xA79CL);
                g_140++;
                g_143[1][0] = p_62;
            }
        }
        else
        { 
            for (l_80 = 0; (l_80 == 1); l_80 = safe_add_func_uint16_t_u_u(l_80, 1))
            { 
                return p_62;
            }
        }
    }
    else
    { 
        uint16_t l_148 = 65535UL;
        for (l_65 = 0; (l_65 > 9); l_65++)
        { 
            ++l_148;
        }
    }
    return p_62;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_121[i], "g_121[i]", print_hash_value);

    }
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
