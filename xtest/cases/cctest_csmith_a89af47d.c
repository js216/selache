// SPDX-License-Identifier: MIT
// cctest_csmith_a89af47d.c --- cctest case csmith_a89af47d (csmith seed 2828727421)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf5a9014 */
/* @exp_ticks 0x31f9 */

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

// Options:   -s 2828727421 -o /tmp/csmith_gen_ayxbfezv/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 4L;
static int32_t g_5[1] = {0xB743D837L};
static uint64_t g_20[4] = {0xDBD0176DF7E44142LL,0xDBD0176DF7E44142LL,0xDBD0176DF7E44142LL,0xDBD0176DF7E44142LL};
static int32_t g_32 = 1L;
static uint8_t g_78 = 0xDDL;
static uint8_t g_110[2] = {0x96L,0x96L};
static int64_t g_131 = 0L;
static int32_t g_132 = (-10L);
static uint64_t g_133 = 0x0896F4A54BB3B6D2LL;
static const int32_t g_187 = 0xA376DD06L;
static int64_t g_206[1] = {(-1L)};



static const uint8_t  func_1(void);
static int8_t  func_8(int64_t  p_9);
static int64_t  func_10(uint32_t  p_11, int16_t  p_12);




static const uint8_t  func_1(void)
{ 
    uint16_t l_155 = 65531UL;
    uint8_t l_207 = 0x38L;
    int16_t l_208 = 0x59A0L;
lbl_190:
    for (g_2 = 0; (g_2 < 8); ++g_2)
    { 
        uint32_t l_14 = 0xFA147B80L;
        int32_t l_146 = 7L;
        int16_t l_158 = 0L;
        for (g_5[0] = 0; (g_5[0] > 20); ++g_5[0])
        { 
            int32_t l_17 = 9L;
            l_146 &= (func_8(func_10((!l_14), (((safe_sub_func_int16_t_s_s(g_5[0], (g_5[0] == l_17))) == 65535UL) , g_5[0]))) | g_131);
            l_155 ^= ((safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(l_17, (safe_rshift_func_int8_t_s_s((-1L), (safe_mul_func_uint16_t_u_u(g_110[1], 0x19CEL)))))) < l_17), (-1L))) | l_17);
            g_32 &= (safe_lshift_func_uint8_t_u_s((g_20[1] & l_158), (l_14 != l_17)));
        }
    }
    if ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s(0x0C2188DBB9F33108LL, l_155)) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_133 &= ((65535UL && 8UL) ^ 4UL)), 0x2FA94D6089050E94LL)), 9))), 4)))
    { 
        uint32_t l_172 = 4294967295UL;
        uint32_t l_173 = 7UL;
        int32_t l_174[1][3];
        int32_t l_189[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_174[i][j] = 0x5FBB508EL;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_189[i][j] = 1L;
        }
        if (((((g_131 = (safe_sub_func_uint32_t_u_u((l_174[0][1] = (((~(2UL & (safe_div_func_uint16_t_u_u(((((((l_155 != ((0x84B1L & l_172) ^ g_20[3])) , l_155) , l_172) == l_173) , 0x996AL) > g_20[2]), g_133)))) >= 18446744073709551608UL) > l_172)), g_132))) <= 0x3CC51AB325749A0BLL) < 0xC324AB99L) < l_173))
        { 
            int32_t l_183 = 7L;
            int16_t l_186 = 1L;
            int32_t l_188 = 0xD378FEF9L;
            l_189[0][1] &= (l_188 = (((g_132 = (safe_add_func_uint16_t_u_u(0UL, ((((safe_add_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((l_183 <= (safe_sub_func_int8_t_s_s((l_174[0][1] &= ((g_132 & g_110[0]) , 0xD4L)), l_172))), 0x70L)), 0x356080F64FDBAA03LL)) == g_32) ^ 3L) || l_186)))) , g_187) ^ 0UL));
        }
        else
        { 
            l_174[0][1] = 0x813BED6CL;
        }
    }
    else
    { 
        uint16_t l_199[2][4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_199[i][j] = 1UL;
        }
        for (g_131 = 0; (g_131 <= 0); g_131 += 1)
        { 
            int i;
            for (g_2 = 0; (g_2 <= 0); g_2 += 1)
            { 
                if (g_132)
                    goto lbl_190;
            }
            return g_5[g_131];
        }
        g_5[0] = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((l_199[0][3] | ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((g_206[0] = (l_155 | ((safe_mul_func_uint16_t_u_u(l_155, l_155)) ^ g_187))), l_207)), l_199[0][3])) <= g_132)), g_5[0])) , l_208), l_199[0][1])) , g_78) >= g_110[0]), l_199[0][1])), 4L)) , l_155);
    }
    return l_208;
}



static int8_t  func_8(int64_t  p_9)
{ 
    int8_t l_60[3][1];
    int32_t l_61 = 0L;
    int32_t l_62[2];
    int32_t l_63 = 0x7B22F105L;
    int32_t l_64[4][1] = {{0L},{8L},{0L},{8L}};
    int32_t l_65 = (-7L);
    int32_t l_98 = 1L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_60[i][j] = 1L;
    }
    for (i = 0; i < 2; i++)
        l_62[i] = 0xC2C04DDAL;
lbl_104:
    l_65 = ((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((((l_64[3][0] &= (safe_unary_minus_func_uint32_t_u(((l_63 = (l_62[0] = (g_32 | ((l_61 = ((((safe_mul_func_uint16_t_u_u(l_60[2][0], g_32)) > g_2) || p_9) == l_60[1][0])) , p_9)))) & g_5[0])))) > 18446744073709551615UL) && g_20[2]) <= p_9), p_9)), l_60[2][0])) || l_63);
    if ((safe_sub_func_int32_t_s_s(g_20[3], (safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((l_62[0] <= ((l_64[2][0] ^= (safe_rshift_func_int16_t_s_u(((g_20[2] , l_63) , g_32), p_9))) != p_9)), l_62[0])) , (-2L)), 1UL)))))
    { 
        int64_t l_76 = (-1L);
        int32_t l_77 = 0x2F6A78CDL;
        int32_t l_97[1][3];
        uint16_t l_99 = 0xD29FL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_97[i][j] = 0x6F7E61D9L;
        }
        for (l_63 = 0; (l_63 == 25); ++l_63)
        { 
            uint16_t l_89 = 65535UL;
            g_78++;
            g_32 = (safe_sub_func_int8_t_s_s((0xB62727C3L ^ (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_76, g_32)), g_2))), g_5[0]));
            for (g_78 = 23; (g_78 == 29); g_78 = safe_add_func_uint64_t_u_u(g_78, 2))
            { 
                uint8_t l_90[4][2] = {{1UL,0x82L},{0x82L,1UL},{0x82L,0x82L},{1UL,0x82L}};
                int i, j;
                l_77 = (0x06F957EEL >= (((((((((g_32 > (g_20[3] <= l_63)) || l_77) <= 3UL) & 65533UL) , l_89) | 0x9EL) > l_90[1][0]) < l_90[1][0]) <= 1UL));
                l_77 &= ((((safe_sub_func_int16_t_s_s((p_9 , (65535UL || (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((g_2 > g_78), 0x9CD7D83882C1F1FELL)), g_32)))), 0xA93DL)) && 0x6DA1B12C12148021LL) < 0xB263L) != l_61);
            }
        }
        l_99--;
    }
    else
    { 
        uint32_t l_120 = 18446744073709551615UL;
        int32_t l_129[1];
        const uint64_t l_145 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_129[i] = 0x2FF10FDBL;
        if ((safe_lshift_func_int8_t_s_s(l_65, 3)))
        { 
            uint32_t l_111 = 0x36C85465L;
            int32_t l_128[1];
            int i;
            for (i = 0; i < 1; i++)
                l_128[i] = 0xEE2B1DE1L;
            if (l_63)
                goto lbl_104;
            if (((safe_lshift_func_int8_t_s_u(0x90L, 0)) || ((g_110[0] = (!((safe_sub_func_uint8_t_u_u(g_32, p_9)) , p_9))) > l_63)))
            { 
                g_32 |= 0xB6DD939AL;
                ++l_111;
            }
            else
            { 
                uint32_t l_121 = 1UL;
                int32_t l_130 = 0xB948F0CDL;
                g_32 = (safe_sub_func_int64_t_s_s(p_9, (((safe_mul_func_uint8_t_u_u((0x7157L | (((((safe_div_func_uint16_t_u_u((l_120 = l_111), g_20[3])) == p_9) | l_121) ^ 0x7AA0E7310FB7A05ALL) | l_62[1])), g_110[0])) , p_9) != (-5L))));
                l_128[0] = (safe_mod_func_uint8_t_u_u(((((l_61 = (safe_mul_func_int16_t_s_s((((0x4B258E78D8C438F6LL & p_9) || ((safe_lshift_func_uint8_t_u_s(p_9, 2)) > 5UL)) || p_9), l_111))) & l_111) , (-1L)) ^ l_121), l_120));
                ++g_133;
            }
            g_32 &= (p_9 ^ (((l_128[0] < (safe_mul_func_uint16_t_u_u(0UL, g_2))) != 0UL) == (-1L)));
        }
        else
        { 
            for (g_78 = 0; (g_78 > 27); g_78 = safe_add_func_int32_t_s_s(g_78, 1))
            { 
                int8_t l_140[2][4];
                int8_t l_143[3][1];
                int32_t l_144 = 1L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_140[i][j] = 5L;
                }
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_143[i][j] = 0L;
                }
                l_144 = ((((((g_20[3] > ((g_133 = l_140[1][0]) && (safe_mul_func_int8_t_s_s((-5L), l_140[1][0])))) <= g_110[1]) , p_9) | l_143[0][0]) > g_110[1]) & p_9);
                if (l_145)
                    break;
                if (l_61)
                    goto lbl_104;
            }
        }
    }
    return p_9;
}



static int64_t  func_10(uint32_t  p_11, int16_t  p_12)
{ 
    uint64_t l_31 = 18446744073709551615UL;
    g_20[3] = (safe_sub_func_int64_t_s_s(p_12, p_11));
    for (p_12 = (-11); (p_12 >= (-6)); p_12 = safe_add_func_uint8_t_u_u(p_12, 1))
    { 
        uint32_t l_36[1][2];
        int32_t l_37 = 0x9E1A0E1CL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_36[i][j] = 4UL;
        }
        for (p_11 = 0; (p_11 == 7); ++p_11)
        { 
            int8_t l_33 = 0xD0L;
            const int32_t l_34 = (-5L);
            uint64_t l_35[2][4] = {{0x90E69CD17CD95329LL,0x90E69CD17CD95329LL,0x90E69CD17CD95329LL,0x90E69CD17CD95329LL},{0x90E69CD17CD95329LL,0x90E69CD17CD95329LL,0x90E69CD17CD95329LL,0x90E69CD17CD95329LL}};
            int32_t l_38[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_38[i][j] = 0x8158FB5CL;
            }
            l_38[0][2] = (l_37 = (l_36[0][0] ^= (safe_mul_func_int8_t_s_s(0xC9L, (safe_sub_func_int8_t_s_s(((((l_33 |= ((safe_sub_func_uint64_t_u_u(l_31, (g_32 = l_31))) , g_2)) , l_33) == l_34) < g_5[0]), l_35[1][2]))))));
            if ((l_37 = (safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((g_2 ^ (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_s((p_12 , ((safe_add_func_int16_t_s_s((p_12 == l_31), p_11)) | l_36[0][0])), 1)) == g_5[0]) , 18446744073709551611UL) >= l_31) >= l_38[0][1]), p_11)), p_12)), p_11)) , p_11) >= p_12)), l_31)) ^ l_31), 0xD3L))))
            { 
                l_38[0][2] = g_20[3];
                if (g_32)
                    continue;
            }
            else
            { 
                if (g_32)
                    break;
            }
        }
        for (l_31 = 0; (l_31 <= 0); l_31 += 1)
        { 
            l_37 = 1L;
        }
    }
    return g_5[0];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_206[i], "g_206[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
