// SPDX-License-Identifier: MIT
// cctest_csmith_8095d996.c --- cctest case csmith_8095d996 (csmith seed 2157304214)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9ce3a14 */
/* @exp_ticks 0x3f5e */

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

// Options:   -s 2157304214 -o /tmp/csmith_gen_xq7eex44/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2[1][2] = {{0xF6AF1124L,0xF6AF1124L}};
static int32_t g_5 = 0x5C19C5A6L;
static int32_t g_8 = 7L;
static uint64_t g_25[1][2] = {{5UL,5UL}};
static uint32_t g_47 = 4294967295UL;
static int16_t g_64 = 0x1EBCL;
static int32_t g_65 = 0L;
static uint16_t g_66 = 0UL;
static int64_t g_83 = (-8L);
static int32_t g_93[4] = {0x50E7A764L,0x50E7A764L,0x50E7A764L,0x50E7A764L};
static uint16_t g_130 = 0xB914L;
static int16_t g_146[1][1] = {{(-9L)}};
static int32_t g_157 = 0x92F95BF6L;
static int32_t g_164 = 0xB03C3254L;



static uint16_t  func_1(void);
static int8_t  func_13(int64_t  p_14, int16_t  p_15, const int32_t  p_16);
static uint8_t  func_33(uint16_t  p_34, uint32_t  p_35);




static uint16_t  func_1(void)
{ 
    uint64_t l_19[3][3] = {{5UL,5UL,5UL},{9UL,9UL,9UL},{5UL,5UL,5UL}};
    int64_t l_84 = 0L;
    int32_t l_151 = 0x6B34804FL;
    uint32_t l_194 = 1UL;
    int i, j;
    for (g_2[0][0] = 2; (g_2[0][0] >= 7); ++g_2[0][0])
    { 
        int32_t l_105 = (-1L);
        uint32_t l_106 = 0xE6A82D78L;
        for (g_5 = 0; (g_5 <= 26); g_5++)
        { 
            const uint8_t l_20 = 255UL;
            int32_t l_92[4] = {0x716CFB31L,0x716CFB31L,0x716CFB31L,0x716CFB31L};
            int i;
            for (g_8 = 0; (g_8 > (-12)); g_8 = safe_sub_func_uint8_t_u_u(g_8, 6))
            { 
                g_83 = (safe_rshift_func_int8_t_s_u(func_13((safe_add_func_int8_t_s_s(((g_8 , (l_19[1][0] >= 0x37L)) && (-10L)), g_2[0][0])), g_5, l_20), 7));
                l_84 = g_25[0][0];
            }
            g_93[0] ^= ((((safe_lshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s((~(safe_sub_func_uint8_t_u_u((g_25[0][0] >= ((l_92[2] = ((g_64 >= l_20) || 0UL)) , 0xC819A802L)), 3L))), l_20)) < l_20), 0)) & g_8) , l_84) && g_64);
            if (l_20)
                continue;
        }
        for (g_83 = 0; (g_83 <= 3); g_83 += 1)
        { 
            int i;
            if ((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((safe_unary_minus_func_uint64_t_u(((safe_add_func_uint16_t_u_u(g_93[g_83], g_25[0][1])) , ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((g_64 = l_105) < g_5), g_65)), 65534UL)) , l_105)))) == 2UL) >= l_106), 0x47F7088EL)), l_84)))
            { 
                uint32_t l_107 = 4UL;
                int i;
                g_93[g_83] = l_107;
                g_5 ^= ((((((g_64 |= g_93[g_83]) ^ ((-1L) ^ ((~((l_105 = (safe_rshift_func_uint16_t_u_s(g_83, 6))) , g_2[0][0])) , 0x0612L))) >= 0x70L) == 8L) >= g_25[0][0]) || l_19[1][0]);
                l_105 |= g_8;
            }
            else
            { 
                l_105 = ((!0L) && 1L);
                return g_47;
            }
            for (g_5 = 0; (g_5 <= 0); g_5 += 1)
            { 
                int i, j;
                return g_25[g_5][g_5];
            }
        }
    }
    for (g_83 = 0; (g_83 <= 0); g_83 += 1)
    { 
        int32_t l_113 = 1L;
        uint16_t l_114 = 9UL;
        int8_t l_145 = 2L;
        int32_t l_156[3][2] = {{(-2L),(-2L)},{(-2L),(-2L)},{(-2L),(-2L)}};
        int i, j;
        for (g_8 = 3; (g_8 >= 0); g_8 -= 1)
        { 
            const uint64_t l_129 = 0x399BE1A4DE48EC7FLL;
            for (g_66 = 0; (g_66 <= 0); g_66 += 1)
            { 
                int32_t l_112 = 0x8A1598D8L;
                int32_t l_131 = 0xF9668646L;
                int i, j;
                l_114--;
                l_131 = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(0xEAL, 4)) == g_2[g_66][g_83]) >= ((((((safe_rshift_func_uint8_t_u_s((g_93[(g_83 + 2)] = 0UL), g_65)) <= l_129) & 0xA91DCC14L) == 7L) | g_130) | g_25[0][1])), 1L)), g_66)) == g_64) < g_25[0][1]), 6)), 0xFC2E2BE6L));
            }
            if (((!((+(safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((((l_129 , (((((+l_129) < (safe_div_func_uint32_t_u_u(((((l_129 && 1UL) & 3L) , 0x3155DB8EL) == g_93[0]), 0x2CBA5F0EL))) ^ 4UL) > 0UL) | l_114)) == l_84) == l_114) || l_129), 0x2045L)) <= 4294967290UL), l_19[1][0]))) > 65530UL)) == g_2[0][0]))
            { 
                g_5 ^= (((0xB84FL || (((g_146[0][0] = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((l_145 | 0x4557L), g_93[0])) , 0x3DDAL), 8))) & g_47) <= l_19[0][2])) || 0UL) , l_84);
            }
            else
            { 
                uint8_t l_152 = 0x24L;
                g_93[0] = ((safe_div_func_int8_t_s_s(1L, (l_113 = (safe_lshift_func_int8_t_s_u(((4294967295UL | g_65) ^ l_113), 7))))) , l_114);
                ++l_152;
                l_151 = g_65;
            }
            for (l_114 = 0; (l_114 <= 3); l_114 += 1)
            { 
                uint32_t l_155 = 1UL;
                int i;
                l_155 = ((g_93[g_8] <= 9UL) >= (g_47 = (((g_93[(g_83 + 2)] && g_130) < 0L) | l_129)));
                g_2[0][0] = ((g_157 = (((l_156[0][0] , (g_93[0] <= g_66)) || l_156[0][0]) || 0x78F7L)) & g_2[0][0]);
            }
        }
        for (g_130 = 0; (g_130 <= 3); g_130 += 1)
        { 
            int16_t l_187[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_187[i] = 0x8E19L;
            g_2[g_83][g_83] = ((g_2[g_83][(g_83 + 1)] & 1UL) || (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((g_164 = (safe_div_func_int16_t_s_s((g_2[g_83][g_83] , g_2[g_83][(g_83 + 1)]), 0xC033L))), 7UL)), g_93[(g_83 + 1)])));
            g_93[g_130] = 0L;
            if (((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_93[g_130], (l_156[0][0] != (safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((l_151 = (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(0L, 6)) | 0xD6A4L), g_47)) == l_145), 3)), 0x1CL)), g_66)) < g_157), 0x15E0L))), l_19[0][0])) , l_151), g_93[2]))))), g_2[g_83][(g_83 + 1)])), g_146[0][0])) , l_187[0]))
            { 
                g_2[0][0] = (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_19[1][1] == (((safe_add_func_uint16_t_u_u(g_8, g_83)) ^ g_2[g_83][(g_83 + 1)]) & 4294967295UL)), 0x6236CA14L)) != l_113), l_19[1][0]));
            }
            else
            { 
                int32_t l_201 = 0x1EFD3BF3L;
                l_194++;
                g_157 = (safe_mul_func_int8_t_s_s((-1L), (safe_add_func_int16_t_s_s(((3UL & 4294967293UL) == l_201), 0x623EL))));
            }
        }
    }
    for (g_83 = 0; (g_83 > (-19)); --g_83)
    { 
        int8_t l_214 = 0xA4L;
        g_8 ^= (+(((l_151 &= (l_214 = (safe_sub_func_int32_t_s_s((+(g_130 & ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_84, 10)), g_83)) <= 253UL))), g_157)))) , g_93[0]) && g_2[0][0]));
        if (g_65)
            break;
    }
    return g_83;
}



static int8_t  func_13(int64_t  p_14, int16_t  p_15, const int32_t  p_16)
{ 
    int16_t l_21 = 0x3268L;
    int32_t l_22 = (-4L);
    int32_t l_23 = 0xAEBA4D3EL;
    int32_t l_24[1][3];
    uint64_t l_30[3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_24[i][j] = 0x54292978L;
    }
    for (i = 0; i < 3; i++)
        l_30[i] = 0xC0B333EE67684593LL;
    g_25[0][1]--;
    l_23 = (((l_24[0][0] = (safe_add_func_uint8_t_u_u((l_30[0] >= (safe_lshift_func_int8_t_s_u(g_2[0][0], func_33((((p_15 , g_25[0][0]) >= 6L) , p_14), g_8)))), p_14))) , l_30[0]) , g_2[0][0]);
    return l_30[2];
}



static uint8_t  func_33(uint16_t  p_34, uint32_t  p_35)
{ 
    int8_t l_46 = 0xF7L;
    int32_t l_77 = 0x92E414E4L;
    int32_t l_78[3];
    int32_t l_79 = 0x68172882L;
    int i;
    for (i = 0; i < 3; i++)
        l_78[i] = 0x0517E40DL;
    for (p_34 = 0; (p_34 > 38); p_34++)
    { 
        uint64_t l_44 = 0x266D9918C6A8663CLL;
        int32_t l_45 = (-2L);
        int32_t l_82 = (-4L);
        if ((((safe_lshift_func_int16_t_s_s(g_2[0][0], 2)) <= (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((((l_44 |= 0x90L) == (l_45 |= 2UL)) ^ l_46), 0x3EE49CE5L)) & l_46), g_25[0][1]))) & l_46))
        { 
            int32_t l_75[2];
            int32_t l_76 = 0x226F84B8L;
            int i;
            for (i = 0; i < 2; i++)
                l_75[i] = 0x515FE49BL;
            ++g_47;
            l_79 |= (((safe_lshift_func_int16_t_s_u(((+((l_45 = (p_35 |= (~g_2[0][0]))) <= (safe_mul_func_uint8_t_u_u(l_44, ((((l_78[1] = (safe_sub_func_int16_t_s_s((((l_77 ^= (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s(((+(safe_lshift_func_uint16_t_u_u((++g_66), (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((((g_47 && p_34) && 0x0D22F7F1L) ^ 2UL), l_75[1])), l_75[1])), l_76)) && p_34) ^ l_44)))) < l_44), g_2[0][0]))))) ^ g_25[0][1]) , l_75[1]), 0x84C8L))) & l_75[1]) | p_34) , 255UL))))) != p_34), 7)) == 65534UL) >= p_34);
        }
        else
        { 
            return p_35;
        }
        for (l_45 = 0; (l_45 <= 2); l_45 += 1)
        { 
            int i;
            for (l_46 = 0; (l_46 >= 0); l_46 -= 1)
            { 
                int i, j;
                return g_25[l_46][l_46];
            }
            l_82 |= (l_78[l_45] = (safe_mul_func_uint16_t_u_u(l_77, g_5)));
        }
        if (p_35)
            continue;
    }
    return g_5;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);

    }
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
