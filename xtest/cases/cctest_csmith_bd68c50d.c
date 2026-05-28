// SPDX-License-Identifier: MIT
// cctest_csmith_bd68c50d.c --- cctest case csmith_bd68c50d (csmith seed 3177760013)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa8c19460 */
/* @exp_ticks 0x3a37 */

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

// Options:   -s 3177760013 -o /tmp/csmith_gen_9_6wr9vn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
   const uint32_t  f3;
   int8_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int8_t  f0;
   struct S0  f1;
   uint8_t  f2;
   int32_t  f3;
   struct S0  f4;
   int64_t  f5;
};
#pragma pack(pop)

union U2 {
   const int32_t  f0;
   uint32_t  f1;
};


static int8_t g_2[4] = {0x48L,0x48L,0x48L,0x48L};
static int32_t g_3 = 0xF3D4210EL;
static uint32_t g_5 = 0x7597A61EL;
static int8_t g_39[4] = {0x7FL,0x7FL,0x7FL,0x7FL};
static int16_t g_52[5] = {0xFED2L,0xFED2L,0xFED2L,0xFED2L,0xFED2L};
static uint8_t g_62 = 0xCDL;
static uint64_t g_66 = 3UL;
static int64_t g_67 = 0L;
static uint64_t g_71 = 0xB6BA6FA0F5A0A6BDLL;
static uint64_t g_99[4] = {0x720855C5D77E0797LL,0x720855C5D77E0797LL,0x720855C5D77E0797LL,0x720855C5D77E0797LL};
static uint16_t g_100[3] = {2UL,2UL,2UL};
static int8_t g_111[3] = {0xBCL,0xBCL,0xBCL};
static uint8_t g_112 = 0xEAL;



static uint32_t  func_1(void);
static int32_t  func_8(union U2  p_9, struct S0  p_10, uint16_t  p_11);
static union U2  func_12(union U2  p_13, uint8_t  p_14);
static int64_t  func_18(uint64_t  p_19, uint16_t  p_20, int64_t  p_21, int32_t  p_22, const uint32_t  p_23);




static uint32_t  func_1(void)
{ 
    union U2 l_15 = {0L};
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t l_4[4] = {0L,0L,0L,0L};
        struct S0 l_116 = {18446744073709551615UL,-8L,0x6BFE3AE0L,0x9FDB8F82L,0x9EL,1UL};
        int i;
        g_5++;
        l_116.f2 = (func_8(func_12(l_15, (safe_add_func_uint32_t_u_u((g_2[g_3] , l_15.f0), g_3))), l_116, g_3) < l_116.f1);
    }
    return g_62;
}



static int32_t  func_8(union U2  p_9, struct S0  p_10, uint16_t  p_11)
{ 
    uint32_t l_121[1];
    int32_t l_126 = 0xB3A0AE14L;
    int32_t l_137 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_121[i] = 0x98011622L;
    l_126 &= ((safe_lshift_func_uint8_t_u_u(p_9.f0, ((((safe_lshift_func_uint16_t_u_u(l_121[0], 0)) >= (safe_rshift_func_uint8_t_u_s(0xB7L, ((safe_div_func_uint32_t_u_u((0x05F92870E6F0126CLL ^ l_121[0]), l_121[0])) , (-1L))))) != 0x7EL) != p_10.f3))) | 6UL);
    l_126 = (((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_121[0], 6)), ((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((l_121[0] == (safe_add_func_int64_t_s_s((l_121[0] | l_126), g_5))) | g_5), p_9.f1)), 3)) != l_126) , l_121[0]) == 0x53317BB9L))) , 0x166F2926L) != 0xAB2586FDL);
    return l_137;
}



static union U2  func_12(union U2  p_13, uint8_t  p_14)
{ 
    uint32_t l_26 = 0x196E6C8CL;
    uint32_t l_31 = 0x14186E14L;
    uint8_t l_32 = 255UL;
    int32_t l_53 = 0L;
    int8_t l_61 = 1L;
    int32_t l_70[1];
    union U2 l_115 = {0xFBA81857L};
    int i;
    for (i = 0; i < 1; i++)
        l_70[i] = 1L;
    if ((((func_18((safe_sub_func_uint32_t_u_u((l_26 == (-1L)), ((((safe_div_func_uint8_t_u_u((g_5 > (safe_mod_func_int32_t_s_s(p_13.f1, 0x469209A4L))), l_31)) || g_2[1]) && l_31) , (-7L)))), g_3, l_32, g_2[3], l_32) & 18446744073709551610UL) | g_2[1]) >= g_5))
    { 
        int64_t l_55 = (-4L);
        int32_t l_65 = 1L;
        int32_t l_69 = (-8L);
        uint32_t l_102[4][5][3] = {{{18446744073709551608UL,0x33D98189L,0x67BCF541L},{0x67BCF541L,0xA84ADD17L,0x46AAE942L},{18446744073709551608UL,0xA84ADD17L,18446744073709551608UL},{8UL,0x33D98189L,0x46AAE942L},{8UL,0xE385C008L,0x67BCF541L}},{{18446744073709551608UL,0x33D98189L,0x67BCF541L},{0x67BCF541L,8UL,18446744073709551612UL},{0x08BDFDF7L,8UL,0x08BDFDF7L},{18446744073709551606UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551606UL,0x67BCF541L,0x5B7D993EL}},{{0x08BDFDF7L,18446744073709551608UL,0x5B7D993EL},{0x5B7D993EL,8UL,18446744073709551612UL},{0x08BDFDF7L,8UL,0x08BDFDF7L},{18446744073709551606UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551606UL,0x67BCF541L,0x5B7D993EL}},{{0x08BDFDF7L,18446744073709551608UL,0x5B7D993EL},{0x5B7D993EL,8UL,18446744073709551612UL},{0x08BDFDF7L,8UL,0x08BDFDF7L},{18446744073709551606UL,18446744073709551608UL,18446744073709551612UL},{18446744073709551606UL,0x67BCF541L,0x5B7D993EL}}};
        int i, j, k;
        for (l_26 = 0; (l_26 <= 3); l_26 += 1)
        { 
            uint16_t l_54[4] = {65535UL,65535UL,65535UL,65535UL};
            int32_t l_68 = 0x6E25B9E7L;
            int i;
            for (l_31 = 0; (l_31 <= 3); l_31 += 1)
            { 
                int32_t l_56 = 1L;
                int i;
                l_55 = ((l_53 = (safe_sub_func_uint32_t_u_u((g_5 = ((g_2[l_31] <= g_2[1]) < (g_52[3] &= (safe_sub_func_int64_t_s_s(((g_2[0] || (((g_5 > (-1L)) <= g_5) , 0L)) != 0x2EL), g_39[0]))))), l_32))) == l_54[2]);
                l_56 ^= (0xE2L & ((g_52[3] == (0x0508L < (g_52[1] < p_13.f0))) | p_14));
            }
            g_67 = (p_13.f0 && ((safe_sub_func_int32_t_s_s((g_66 = (l_65 = ((safe_mod_func_int32_t_s_s(l_61, (g_62 = l_61))) > (safe_mod_func_uint16_t_u_u(65535UL, 4L))))), p_14)) | l_53));
            for (l_53 = 3; (l_53 >= 0); l_53 -= 1)
            { 
                int32_t l_101 = 0L;
                int i;
                g_71--;
                l_102[3][0][0] = (l_101 = (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((+((((+(((safe_rshift_func_uint8_t_u_s(((((safe_unary_minus_func_uint16_t_u((0x765BL || ((((safe_rshift_func_uint16_t_u_s(g_39[l_26], (l_69 ^= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(g_2[0], (safe_mod_func_uint16_t_u_u((l_65 ^= ((((g_39[l_26] , g_62) , 0xD6L) > p_13.f1) > 0x7B68111800AB31FBLL)), l_26)))) && l_61) , 8L), 0xA2822D1E25F8A0FDLL)), g_52[4])), g_39[l_26])) && g_39[l_26]) && g_67), 0x0DL))))) | 1UL) >= g_99[1]) | p_13.f0)))) ^ g_39[0]) | p_13.f1) < p_13.f1), 5)) >= 0UL) && p_13.f0)) && 18446744073709551613UL) && g_99[2]) | p_13.f1)), g_100[1])) , g_100[1]), (-8L))), p_13.f1)));
                l_101 = (+(l_69 = 0xEE33383FL));
            }
        }
    }
    else
    { 
        uint16_t l_110 = 0xC527L;
        l_70[0] |= (safe_mul_func_int8_t_s_s(((((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((g_99[1] <= l_110) | (p_13 , (0x80L < 0xD2L))), 18446744073709551612UL)), p_14)) >= p_13.f0) | l_31) & 0xC7AEF280L), g_5));
        --g_112;
    }
    return l_115;
}



static int64_t  func_18(uint64_t  p_19, uint16_t  p_20, int64_t  p_21, int32_t  p_22, const uint32_t  p_23)
{ 
    int32_t l_46 = 7L;
    struct S1 l_47 = {0xBCL,{9UL,0x85B8L,-1L,4294967293UL,0x67L,18446744073709551608UL},0UL,0x3DA79815L,{0x87E17710L,-7L,-7L,4294967288UL,-1L,0x949389D0L},0x131A3A4AA3E85184LL};
    for (p_19 = (-23); (p_19 == 12); p_19++)
    { 
        uint16_t l_36 = 1UL;
        g_39[0] = ((1UL != ((!l_36) & (((safe_add_func_int16_t_s_s(g_5, g_3)) ^ 0xDE6B786AE2AD21DDLL) && g_3))) | g_2[1]);
        p_22 = (((((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(g_3, 1UL)) > ((0x30L <= l_46) <= p_19)), 3)) <= g_39[0]), 1)) < p_21) != l_36) , l_47) , l_47.f5);
        if (p_23)
            continue;
    }
    return l_47.f1.f4;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
