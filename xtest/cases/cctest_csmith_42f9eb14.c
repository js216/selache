// SPDX-License-Identifier: MIT
// cctest_csmith_42f9eb14.c --- cctest case csmith_42f9eb14 (csmith seed 1123674900)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5f5a847a */
/* @exp_ticks 0x3439 */

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

// Options:   -s 1123674900 -o /tmp/csmith_gen_qiwmlo4t/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 1L;
static uint32_t g_5 = 0x9C4C8D3CL;
static uint16_t g_34 = 65528UL;
static uint32_t g_38[1][3] = {{0x91F32AFCL,0x91F32AFCL,0x91F32AFCL}};
static uint32_t g_67 = 18446744073709551613UL;
static int8_t g_68[3] = {0xB9L,0xB9L,0xB9L};
static uint8_t g_69 = 1UL;
static uint32_t g_92 = 0x4A5162C4L;
static int32_t g_93 = 0L;
static int64_t g_103[1][3] = {{0x26BCB33D27CF1A45LL,0x26BCB33D27CF1A45LL,0x26BCB33D27CF1A45LL}};
static uint32_t g_109 = 6UL;
static uint8_t g_110 = 249UL;
static int32_t g_111 = 6L;
static int64_t g_112 = (-1L);
static uint32_t g_143 = 0x75085CE8L;
static uint16_t g_150[1][2] = {{0xC551L,0xC551L}};
static uint64_t g_154 = 1UL;
static uint8_t g_159 = 255UL;



static int64_t  func_1(void);
static uint8_t  func_10(int8_t  p_11, const uint32_t  p_12, int16_t  p_13, int32_t  p_14);
static int32_t  func_18(uint32_t  p_19, int16_t  p_20, uint64_t  p_21);




static int64_t  func_1(void)
{ 
    uint16_t l_17 = 65534UL;
    int32_t l_128 = 0xBF8F4ABBL;
    int32_t l_140 = 0xDF0E7D16L;
    uint32_t l_145 = 4294967295UL;
    uint32_t l_165 = 6UL;
    for (g_2 = 0; (g_2 >= 11); g_2 = safe_add_func_uint64_t_u_u(g_2, 6))
    { 
        uint32_t l_24[4] = {0x946B43D2L,0x946B43D2L,0x946B43D2L,0x946B43D2L};
        int32_t l_125 = 0xD6983378L;
        int64_t l_126 = 0xBDED785604A18530LL;
        int32_t l_127 = 0L;
        uint32_t l_164 = 0x32FAA2BCL;
        int i;
        g_112 = ((((--g_5) || (safe_lshift_func_uint8_t_u_s(func_10(((safe_rshift_func_int16_t_s_u(l_17, (((((func_18((0xD14CL ^ ((safe_mod_func_uint32_t_u_u(((g_5 && 0xE1C5L) , l_24[3]), g_2)) | l_24[2])), g_5, l_24[3]) <= l_17) | 255UL) | l_17) , 0xE352601CL) <= l_17))) ^ g_2), l_24[2], l_24[1], l_24[3]), g_2))) & 246UL) < l_24[3]);
        if ((((safe_mod_func_int32_t_s_s((g_143 = (((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(g_109, (l_140 = (((safe_sub_func_uint8_t_u_u((l_127 |= (++g_69)), ((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int8_t_s_s(((((g_34 = (safe_sub_func_uint8_t_u_u((((((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_140 , (safe_lshift_func_uint8_t_u_s((g_110 = g_38[0][0]), 6))), 0x4479L)), (-10L))) ^ 0xBEL) != g_112) | (-4L)) >= 8UL), 9L))) & l_125) & 0x08L) , l_126), g_111)) , 1UL))) > l_140))) >= 1UL) | 0UL)))) < l_126) >= g_68[0]), 0x4023D1C57EA6FF28LL)), l_24[3])) < l_125) && l_17)), 0xE86AE0A1L)) , l_127) || l_128))
        { 
            int32_t l_153 = 1L;
            l_153 &= (((~l_145) ^ (((safe_lshift_func_uint8_t_u_u(l_24[3], (((safe_div_func_uint32_t_u_u((((g_150[0][1]++) != (g_143 < g_103[0][2])) || 0x22L), 0xB0DB9FFAL)) , 0xC697L) , g_67))) , 1UL) , g_38[0][1])) | g_38[0][2]);
        }
        else
        { 
            uint64_t l_158 = 0UL;
            g_154 = 4L;
            for (l_127 = (-17); (l_127 > (-21)); l_127 = safe_sub_func_uint8_t_u_u(l_127, 8))
            { 
                int64_t l_157 = 0xA1A4E4CF6FCF6890LL;
                l_157 |= g_154;
                g_159 = (l_158 & (g_5 ^ 0x4B621E9FL));
                l_164 ^= ((safe_mul_func_uint16_t_u_u(((l_125 , ((safe_div_func_int8_t_s_s((g_111 | g_150[0][1]), g_38[0][1])) != 0x9924L)) > g_109), l_158)) == l_157);
            }
        }
    }
    return l_165;
}



static uint8_t  func_10(int8_t  p_11, const uint32_t  p_12, int16_t  p_13, int32_t  p_14)
{ 
    uint32_t l_49 = 18446744073709551615UL;
    int32_t l_66 = 0xC4855F07L;
    g_38[0][1] = ((safe_lshift_func_uint16_t_u_u((g_2 <= 0xB100L), 9)) && (p_14 >= 0xC2FBF3F0L));
    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
    { 
        uint64_t l_48[2];
        int32_t l_50[2];
        uint16_t l_108[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_48[i] = 18446744073709551610UL;
        for (i = 0; i < 2; i++)
            l_50[i] = 0x77974D37L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_108[i][j] = 0x01DFL;
        }
        l_50[0] &= (safe_div_func_int16_t_s_s(((l_49 = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((~p_11), (1L ^ l_48[1]))), 3)), 7)) < 0L)) != 6UL), l_48[1]));
        for (p_14 = 0; (p_14 <= 0); p_14 += 1)
        { 
            int i, j;
            l_66 = ((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((((((safe_add_func_int8_t_s_s(0L, g_38[p_14][(p_14 + 1)])) > (safe_rshift_func_int16_t_s_u((g_38[0][1] <= g_34), 13))) != (-1L)) < 1L) <= 0x43DAL), 5)) >= l_48[1]), 6)), 0xA86EL)) <= g_38[p_14][(p_14 + 1)]))), 5)), p_14)) && l_49);
            g_67 |= ((g_34 = g_38[0][2]) ^ (p_13 || (0x7871239BL ^ g_38[p_14][(p_14 + 1)])));
        }
        for (p_13 = 0; (p_13 >= 0); p_13 -= 1)
        { 
            uint64_t l_81 = 0x402B8877E475996ELL;
            for (p_14 = 0; (p_14 >= 0); p_14 -= 1)
            { 
                int32_t l_82 = (-1L);
                g_69--;
                l_66 = (((p_13 == ((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint16_t_u(((p_12 && ((safe_mod_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(0xAA04L, l_81)) & 0x14C35F52D295891FLL) <= l_81), g_69)) & 0xA0L)) < p_13))) , g_68[0]) && l_82), 0x30L)), g_2)) , 0xB4C718FEL)) & g_69) & l_50[1]);
            }
            g_92 = ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_49, ((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s(0xE6F706C0L)) | ((((g_34 , 9L) || 0xB4L) > 0x5B3EL) & l_48[1])) > g_67) >= g_5), 0x69F8L)), g_68[0])) && 4294967294UL))), 0x59L)) , p_14);
            if (l_66)
            { 
                uint16_t l_102 = 65531UL;
                g_93 = p_12;
                g_103[0][0] = ((((safe_mod_func_int8_t_s_s((((safe_div_func_int64_t_s_s((l_50[1] |= (((safe_div_func_uint32_t_u_u(p_11, (safe_div_func_int32_t_s_s(p_12, (-10L))))) ^ p_14) < 0x316ED276L)), 0x8105A18A5C6425F0LL)) & l_102) , g_67), 0xB2L)) || l_81) , p_12) <= 0xA1L);
                if (l_49)
                    break;
            }
            else
            { 
                g_111 = (safe_sub_func_int8_t_s_s(((g_110 = (g_109 &= ((((((1L >= (safe_add_func_int16_t_s_s(0x63ABL, g_2))) , g_103[0][1]) , l_108[1][1]) & p_11) & (-1L)) & l_66))) == 1L), 4UL));
            }
        }
    }
    return l_66;
}



static int32_t  func_18(uint32_t  p_19, int16_t  p_20, uint64_t  p_21)
{ 
    uint16_t l_27 = 0UL;
    int32_t l_35 = 0x5674FA72L;
    l_35 = (safe_sub_func_uint16_t_u_u((g_34 = ((l_27 <= (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s(g_2, 1UL)), l_27)), 5)) > l_27) , l_27)) > 0x38L)), l_27));
    return p_20;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_38[i][j], "g_38[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
