// SPDX-License-Identifier: MIT
// cctest_csmith_635f53cc.c --- cctest case csmith_635f53cc (csmith seed 1667191756)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5147e809 */
/* @exp_ticks 0x3787 */

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

// Options:   -s 1667191756 -o /tmp/csmith_gen_0wzx3p5h/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = 0xF73838A1L;
static int32_t g_6 = 0x49F845D8L;
static uint32_t g_16[3] = {0UL,0UL,0UL};
static int8_t g_58[1] = {0xBBL};
static uint32_t g_59 = 0xE480B0DEL;
static uint16_t g_65 = 0x1BC3L;
static uint32_t g_67 = 1UL;
static int32_t g_80[4] = {0x25FC6431L,0x25FC6431L,0x25FC6431L,0x25FC6431L};
static int16_t g_108 = 0xA9E3L;
static uint8_t g_135[2] = {7UL,7UL};
static int32_t g_158 = 0x672896A2L;
static int16_t g_164 = (-1L);
static int8_t g_165[4][4] = {{0x38L,0x38L,0x7EL,0x38L},{0x38L,(-5L),(-5L),0x38L},{(-5L),0x38L,(-5L),(-5L)},{0x38L,0x38L,0x7EL,0x38L}};
static uint8_t g_167 = 248UL;
static uint32_t g_170 = 4294967291UL;



static int16_t  func_1(void);
static int32_t  func_9(int16_t  p_10);
static uint16_t  func_21(int32_t  p_22, uint64_t  p_23, uint32_t  p_24, int32_t  p_25);




static int16_t  func_1(void)
{ 
    uint8_t l_2[1];
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = 0x19L;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        int i;
        return l_2[g_3];
    }
    for (g_3 = 0; (g_3 > (-22)); g_3 = safe_sub_func_uint8_t_u_u(g_3, 6))
    { 
        uint16_t l_11 = 65529UL;
        int32_t l_19 = 4L;
        uint32_t l_32 = 0xD53A38D0L;
        for (g_6 = 0; (g_6 <= 0); g_6 += 1)
        { 
            uint64_t l_20 = 0x21E124DC41FD9D08LL;
            int32_t l_166 = 3L;
            l_20 = (safe_sub_func_int32_t_s_s(((l_19 = func_9(l_11)) , l_19), g_3));
            if (func_9((func_21((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0xD850L, 65533UL)) == ((safe_mul_func_int16_t_s_s(l_32, g_6)) >= g_16[2])), l_32)), g_16[2], g_6, l_20) , l_2[0])))
            { 
                g_167--;
                if (l_11)
                    continue;
            }
            else
            { 
                uint64_t l_173[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_173[i][j] = 0xA6E12AA013F98BF1LL;
                }
                --g_170;
                if (g_16[2])
                    break;
                l_173[1][0] = 0L;
            }
            g_158 = (l_20 <= 0xF0L);
        }
    }
    return g_170;
}



static int32_t  func_9(int16_t  p_10)
{ 
    uint64_t l_12 = 3UL;
    int32_t l_15 = 1L;
    ++l_12;
    ++g_16[2];
    return p_10;
}



static uint16_t  func_21(int32_t  p_22, uint64_t  p_23, uint32_t  p_24, int32_t  p_25)
{ 
    uint64_t l_33 = 0xD5FBA2522ABF7C2FLL;
    int32_t l_54 = 0x1F73E702L;
    uint8_t l_106 = 0UL;
    int32_t l_134 = 0x5D179A93L;
    int64_t l_140 = 0x8202A807506916A6LL;
    uint64_t l_163 = 0xA685BE0904B385D3LL;
lbl_68:
    p_25 = l_33;
    if (l_33)
    { 
        int64_t l_42 = 0x67DCC3592E7BAA9DLL;
        int32_t l_109 = (-1L);
        if ((safe_add_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s(((g_16[1] , ((((p_25 == (((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_24 | p_23), 254UL)), l_33)) < 0x5DL) ^ p_25)) | l_42) > 9UL) & g_16[2])) , g_3), 5L)) || p_24) != g_3) && 255UL), p_25)))
        { 
            uint16_t l_57 = 0xF7EEL;
            int32_t l_81[4][1];
            uint8_t l_83 = 0x17L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_81[i][j] = 0xA1FE0AFDL;
            }
            for (l_33 = (-17); (l_33 < 60); l_33 = safe_add_func_int32_t_s_s(l_33, 8))
            { 
                uint8_t l_53 = 0UL;
                l_54 &= (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_23, g_16[2])), 1UL)), p_24)) == 0x2708L), l_53));
            }
            if (g_16[0])
            { 
                int16_t l_64 = (-1L);
                int16_t l_66 = 0L;
                g_59 = (safe_lshift_func_int8_t_s_s((g_58[0] = l_57), p_25));
                g_67 = (p_22 >= (safe_mul_func_int8_t_s_s(((l_66 = ((g_65 &= ((((((safe_mod_func_int64_t_s_s(l_64, 0x57A880E1B4ADC7C5LL)) == g_58[0]) , 0x2FFAL) <= p_22) , l_33) == 0xCA01DC0BF288841FLL)) & l_42)) > 0xDB44E933L), g_58[0])));
            }
            else
            { 
                int32_t l_82 = 0x99E8488EL;
                int32_t l_107 = 0L;
                if (g_3)
                    goto lbl_68;
                l_83 = (((l_81[1][0] &= ((((safe_div_func_int8_t_s_s(((8UL < (safe_mul_func_uint8_t_u_u((~0x12F0L), ((g_80[3] = ((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(g_16[0], l_42)), 10)) <= g_59), l_54)) >= g_58[0]) , 0x2FL) == 0UL)) & g_67)))) , p_24), g_16[2])) & l_57) && p_22) >= 1L)) & l_54) | l_82);
                p_25 = (((l_109 = (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((p_23 = (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((g_108 = (((p_24 = ((l_81[1][0] |= ((0x887233EDL || ((safe_add_func_uint64_t_u_u(0UL, (safe_mul_func_uint8_t_u_u((l_107 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_106 &= ((((safe_mul_func_int8_t_s_s((g_58[0] = g_16[2]), 250UL)) , l_54) >= l_33) , 0x3E51L)) ^ l_42), (-1L))), g_65)) | 0x0CL), p_22)), l_82))), l_42)))) , g_67)) , p_25)) , l_106)) , 0x7D5F2590C119CD2CLL) > l_82)) || 18446744073709551611UL) , 0x20L), l_33)), l_82))) != l_54) || p_23), g_65)) ^ g_80[0]), 0))) < p_25) | g_80[3]);
            }
            for (l_54 = 27; (l_54 <= 28); l_54++)
            { 
                l_109 |= ((((safe_mod_func_int16_t_s_s(0x48AEL, p_23)) == l_42) & p_25) < g_16[1]);
            }
        }
        else
        { 
            for (g_67 = 0; (g_67 <= 10); ++g_67)
            { 
                int64_t l_116 = 0L;
                p_25 = 0xD4C97A61L;
                if (l_116)
                    continue;
            }
        }
        for (g_108 = 0; (g_108 <= 3); ++g_108)
        { 
            uint32_t l_121 = 0x7851ED01L;
            for (l_109 = (-14); (l_109 <= (-26)); l_109--)
            { 
                return l_121;
            }
            return p_25;
        }
        g_135[0] = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_42, 0x48D7F838922964CBLL)), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((g_80[0] | 0x5974949FC4A87E63LL), 3)), g_67)))), 2UL)) | l_109), l_42)) > l_134);
    }
    else
    { 
        uint64_t l_141[2];
        int i;
        for (i = 0; i < 2; i++)
            l_141[i] = 9UL;
        l_134 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_6, ((l_54 = (l_140 && (((l_141[0] &= p_23) || l_141[1]) && p_23))) , g_135[0]))), g_80[3])) || l_141[0]);
        for (p_23 = 0; (p_23 != 24); ++p_23)
        { 
            for (l_140 = (-3); (l_140 == 12); l_140 = safe_add_func_int32_t_s_s(l_140, 1))
            { 
                uint64_t l_146 = 1UL;
                if (g_80[3])
                    break;
                if (l_146)
                    break;
                g_158 &= (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(0xFC3CL, ((safe_mul_func_uint8_t_u_u(p_22, (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int32_t_s((l_54 |= (safe_lshift_func_uint16_t_u_u(1UL, p_22))))), 5)))) <= p_22))) < g_3), p_22));
            }
            if (p_25)
                break;
            l_54 &= 0xC418A464L;
        }
        l_163 |= (safe_add_func_uint16_t_u_u((l_141[1] == (safe_div_func_int8_t_s_s(((0xD7L >= g_158) && p_22), 9UL))), g_158));
    }
    return l_33;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);

    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_165[i][j], "g_165[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
