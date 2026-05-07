// SPDX-License-Identifier: MIT
// cctest_csmith_98865cf9.c --- cctest case csmith_98865cf9 (csmith seed 2558942457)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9fa4fbd0 */

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

// Options:   -s 2558942457 -o /tmp/csmith_gen_q7osj8br/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   uint8_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 25;
   unsigned f1 : 13;
   const uint8_t  f2;
   const unsigned f3 : 17;
   signed f4 : 27;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint8_t  f1;
   int32_t  f2;
   struct S0  f3;
};


static int32_t g_2 = 0xED9BA07EL;
static int32_t g_5[3][5][2] = {{{0x10C13FE6L,0x72D9EE1CL},{0x72D9EE1CL,0x10C13FE6L},{0x72D9EE1CL,0x72D9EE1CL},{0x10C13FE6L,0x72D9EE1CL},{0x72D9EE1CL,0x10C13FE6L}},{{0x72D9EE1CL,0x72D9EE1CL},{0x10C13FE6L,0x72D9EE1CL},{0x72D9EE1CL,0x10C13FE6L},{0x72D9EE1CL,0x72D9EE1CL},{0x10C13FE6L,0x72D9EE1CL}},{{0x72D9EE1CL,0x10C13FE6L},{0x72D9EE1CL,0x72D9EE1CL},{0x10C13FE6L,0x72D9EE1CL},{0x72D9EE1CL,0x10C13FE6L},{0x72D9EE1CL,0x72D9EE1CL}}};
static union U2 g_8[4] = {{0xDCA27289L},{0xDCA27289L},{0xDCA27289L},{0xDCA27289L}};
static int32_t g_9 = (-2L);
static int8_t g_21 = 0x76L;
static struct S1 g_31 = {3993,31,255UL,45,-2789};
static struct S1 *g_30[7][2] = {{&g_31,&g_31},{&g_31,&g_31},{&g_31,&g_31},{&g_31,&g_31},{&g_31,&g_31},{&g_31,&g_31},{&g_31,&g_31}};
static int32_t g_33 = 1L;
static int64_t g_41 = 0L;
static int32_t g_53[2] = {7L,7L};
static struct S0 g_84[4][7] = {{{0x3B640E48530E6B9ALL,251UL},{0L,255UL},{0x3B640E48530E6B9ALL,251UL},{0x356F8BEA3A27DCF5LL,1UL},{5L,8UL},{5L,8UL},{0x356F8BEA3A27DCF5LL,1UL}},{{-1L,1UL},{-10L,0xFDL},{-1L,1UL},{-8L,255UL},{0x0861E0F174FA8EA3LL,0x56L},{0x0861E0F174FA8EA3LL,0x56L},{-8L,255UL}},{{0x3B640E48530E6B9ALL,251UL},{0L,255UL},{0x3B640E48530E6B9ALL,251UL},{0x356F8BEA3A27DCF5LL,1UL},{5L,8UL},{5L,8UL},{0x356F8BEA3A27DCF5LL,1UL}},{{-1L,1UL},{-10L,0xFDL},{-1L,1UL},{-8L,255UL},{0x0861E0F174FA8EA3LL,0x56L},{0x0861E0F174FA8EA3LL,0x56L},{-8L,255UL}}};
static int32_t *g_86 = &g_53[1];
static uint8_t g_114 = 9UL;
static uint64_t g_135 = 18446744073709551610UL;
static int8_t *g_143 = (void*)0;
static int8_t **g_142 = &g_143;
static struct S1 g_156 = {3302,5,0x56L,46,-6664};
static struct S1 **g_173[7][6] = {{&g_30[6][0],&g_30[2][0],&g_30[6][0],&g_30[2][0],(void*)0,&g_30[2][0]},{&g_30[2][0],(void*)0,&g_30[6][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]},{&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]},{&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]},{&g_30[6][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]},{&g_30[2][0],(void*)0,&g_30[2][0],&g_30[2][0],(void*)0,&g_30[2][0]},{&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]}};
static int8_t g_185 = 0x99L;
static struct S1 g_258 = {5409,54,0x3DL,206,3990};
static int16_t g_325[5][2][4] = {{{0L,0x723AL,0L,0xC3C7L},{1L,0x75B2L,0xC3C7L,0xC3C7L}},{{0x723AL,0x723AL,1L,0x75B2L},{0x75B2L,1L,1L,1L}},{{0x723AL,0L,0xC3C7L,1L},{1L,0L,0L,1L}},{{0L,1L,0x723AL,0x75B2L},{0L,0x723AL,0L,0xC3C7L}},{{1L,0x75B2L,0xC3C7L,0xC3C7L},{0x723AL,0x723AL,1L,0x75B2L}}};
static uint16_t g_344[4] = {0xF32DL,0xF32DL,0xF32DL,0xF32DL};
static uint32_t g_357 = 0xEF17E24AL;
static uint8_t *g_384 = &g_84[0][0].f1;
static uint8_t **g_383 = &g_384;
static int16_t *g_392[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t **g_391[3] = {&g_392[3],&g_392[3],&g_392[3]};
static uint32_t g_400 = 4294967289UL;
static int32_t g_408 = 0x5565F498L;
static uint16_t g_569 = 0x5D2FL;
static int16_t g_605 = 0x0D83L;
static struct S1 g_637 = {4964,37,0xECL,41,-7106};
static uint32_t g_720 = 0x7BEB5829L;
static int8_t ***g_723 = &g_142;
static int8_t ****g_722 = &g_723;
static const int16_t g_729 = (-1L);
static int64_t g_826 = 0x2F0D6E88D0D71A33LL;
static uint64_t g_827 = 3UL;
static struct S1 ***g_857 = &g_173[4][4];
static int16_t g_881[7][3] = {{0xE475L,0xE475L,0xE475L},{(-10L),0xB032L,(-10L)},{0xE475L,0xE475L,0xE475L},{(-10L),0xB032L,(-10L)},{0xE475L,0xE475L,0xE475L},{(-10L),0xB032L,(-10L)},{0xE475L,0xE475L,0xE475L}};
static int64_t *g_1219 = &g_41;
static int64_t ** const g_1218 = &g_1219;
static uint64_t *g_1239[2] = {&g_135,&g_135};
static uint64_t **g_1238 = &g_1239[1];
static uint64_t ***g_1237 = &g_1238;
static uint64_t ****g_1236 = &g_1237;
static uint32_t g_1355 = 4294967295UL;
static int16_t *****g_1522 = (void*)0;
static uint8_t g_1523 = 255UL;
static uint32_t g_1637 = 0x533BAFDAL;
static struct S1 g_1697[1] = {{4277,22,1UL,142,-8523}};
static struct S0 *g_1703 = &g_84[0][1];
static uint32_t g_1768[5][5] = {{0x1266EEB8L,0xD079B7D2L,0x9554CF43L,0x784644C6L,1UL},{4294967295UL,4294967293UL,4294967293UL,4294967295UL,0x81704202L},{0xD4D79C02L,4294967295UL,0x9554CF43L,1UL,0xD079B7D2L},{0xD4D79C02L,0x9554CF43L,0x81704202L,0x9554CF43L,0xD4D79C02L},{4294967295UL,0x784644C6L,0x1266EEB8L,1UL,4294967293UL}};
static int16_t g_1787 = (-1L);
static union U2 *g_1817 = &g_8[1];
static const uint8_t ***g_1825 = (void*)0;
static const uint8_t ****g_1824 = &g_1825;
static const uint64_t *g_1830 = &g_827;
static const int8_t g_1859 = 0x79L;
static int32_t g_1874 = 0x8A00A9E3L;
static int16_t g_1885 = 4L;
static struct S1 ** const *g_1891 = (void*)0;
static struct S1 ** const * const *g_1890 = &g_1891;
static struct S1 ** const * const **g_1889[3] = {&g_1890,&g_1890,&g_1890};
static int32_t *g_1928[2] = {&g_33,&g_33};
static int32_t **g_1942 = &g_86;
static int32_t ***g_1941 = &g_1942;
static uint32_t **g_1963 = (void*)0;
static int16_t g_1971 = 0x0506L;
static int64_t **g_1979[4] = {&g_1219,&g_1219,&g_1219,&g_1219};
static int64_t *** const g_1978 = &g_1979[3];
static int64_t *** const *g_1977 = &g_1978;
static int64_t *** const **g_1976 = &g_1977;
static int16_t ***g_2044 = &g_391[1];
static uint64_t g_2058[4] = {0xA5BF5A22CA4C4DBALL,0xA5BF5A22CA4C4DBALL,0xA5BF5A22CA4C4DBALL,0xA5BF5A22CA4C4DBALL};
static uint32_t g_2061 = 0x21D5063EL;
static struct S1 g_2125[3] = {{1386,13,0xE4L,139,2166},{1386,13,0xE4L,139,2166},{1386,13,0xE4L,139,2166}};
static struct S1 g_2173[3][5] = {{{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768}},{{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768}},{{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768},{1599,1,9UL,281,4768}}};
static int32_t g_2342 = 0x7BF1E7EBL;
static uint64_t g_2356 = 0x2D91674E7248802FLL;
static int16_t **g_2403 = &g_392[4];
static uint8_t g_2415 = 0UL;
static int16_t g_2416[7] = {0x0D98L,0x0D98L,0x0D98L,0x0D98L,0x0D98L,0x0D98L,0x0D98L};
static int32_t g_2441 = (-1L);
static uint64_t g_2450 = 0x9C0F3B6D6278321DLL;
static const int16_t ** const g_2457 = (void*)0;
static const int16_t ** const *g_2456 = &g_2457;
static const int16_t ** const **g_2455 = &g_2456;
static uint32_t ****g_2474 = (void*)0;
static uint32_t ***** const g_2473 = &g_2474;
static union U2 g_2573[5][6][5] = {{{{0xE44A6A8FL},{8L},{0L},{-1L},{0L}},{{1L},{1L},{-1L},{0x3BCB9359L},{-10L}},{{0L},{0x10F0904AL},{0x0A3E5DEAL},{0x765F97A4L},{-1L}},{{0x008DA859L},{7L},{3L},{0x1D7DD225L},{0L}},{{8L},{0x10F0904AL},{0x6C6D5C3EL},{0xE44A6A8FL},{0L}},{{0L},{1L},{0x1D7DD225L},{1L},{0L}}},{{{0x4CDFF69BL},{8L},{0L},{0L},{0x30125BC7L}},{{0x2F65CB97L},{-10L},{0xCC89E6A2L},{0x008DA859L},{0x1D7DD225L}},{{0L},{9L},{1L},{8L},{0x30125BC7L}},{{0L},{0x008DA859L},{0x2F65CB97L},{0L},{0L}},{{0x30125BC7L},{0x5ED2A72CL},{0x30125BC7L},{0x4CDFF69BL},{0L}},{{0x53F35C37L},{0x49D6662DL},{0xEED34C43L},{0x2F65CB97L},{0L}}},{{{0x5ED2A72CL},{0L},{0xF32674CBL},{0L},{-1L}},{{4L},{5L},{0xEED34C43L},{0L},{-10L}},{{1L},{0L},{0x30125BC7L},{0x30125BC7L},{0L}},{{0x9F001B81L},{-1L},{0x2F65CB97L},{0x53F35C37L},{0x4D26B604L}},{{9L},{0x0A3E5DEAL},{1L},{0x5ED2A72CL},{0x197443A7L}},{{0xEED34C43L},{3L},{0xCC89E6A2L},{4L},{0x9490112CL}}},{{{9L},{0x6C6D5C3EL},{0L},{1L},{8L}},{{0x9F001B81L},{0x1D7DD225L},{0x1D7DD225L},{0x9F001B81L},{0x2F65CB97L}},{{1L},{0L},{0x6C6D5C3EL},{9L},{0x73B0C7D4L}},{{4L},{0xCC89E6A2L},{3L},{0xEED34C43L},{-1L}},{{0x5ED2A72CL},{1L},{0x0A3E5DEAL},{9L},{0x8043075FL}},{{0x53F35C37L},{0x2F65CB97L},{-1L},{0x9F001B81L},{-1L}}},{{{0x30125BC7L},{0x30125BC7L},{0L},{1L},{1L}},{{0L},{0xEED34C43L},{5L},{4L},{0x9F001B81L}},{{0L},{0xF32674CBL},{0L},{0x5ED2A72CL},{0L}},{{0x2F65CB97L},{0xEED34C43L},{0x49D6662DL},{0x53F35C37L},{3L}},{{0x4CDFF69BL},{0x30125BC7L},{0x5ED2A72CL},{0x30125BC7L},{0x4CDFF69BL}},{{0L},{0x2F65CB97L},{0x008DA859L},{0L},{1L}}}};
static uint16_t g_2741 = 0xEE70L;
static struct S1 g_2755 = {4040,88,0xC4L,313,-4494};
static struct S0 g_2933 = {0L,0UL};
static int32_t g_2986 = 0x1B6D6A2EL;
static struct S1 g_2999 = {3462,14,0xF0L,104,5468};
static struct S0 g_3047 = {-6L,246UL};
static uint16_t g_3060 = 65535UL;
static int32_t ****g_3075 = &g_1941;
static int32_t * const *g_3078 = &g_1928[1];
static int32_t * const **g_3077 = &g_3078;
static int32_t * const ***g_3076 = &g_3077;
static const int32_t g_3163 = 0L;
static struct S0 **g_3173 = (void*)0;
static struct S0 ** const *g_3172 = &g_3173;
static struct S0 ** const **g_3171 = &g_3172;



static const int64_t  func_1(void);
static struct S1 * func_10(struct S1 * p_11, struct S1 * p_12, int32_t  p_13, struct S1 * const  p_14, struct S1 * p_15);
static struct S1  func_22(uint8_t  p_23, int8_t * p_24);
static int8_t * func_25(struct S1 * p_26, struct S1 * p_27, const int8_t * p_28, union U2  p_29);
static int32_t  func_34(struct S1 * p_35, uint8_t  p_36, struct S1  p_37);
static struct S1 * func_38(uint16_t  p_39);
static uint8_t  func_42(int64_t * p_43, struct S1  p_44, int8_t * p_45, int32_t  p_46);
static struct S1  func_47(int32_t * p_48, int32_t * p_49);




static const int64_t  func_1(void)
{ 
    uint32_t l_17[3];
    struct S1 * const l_2751 = &g_258;
    struct S1 *l_2752 = &g_31;
    uint32_t l_2764 = 0UL;
    int32_t l_2766 = 0xF253B54AL;
    int32_t l_2770 = (-1L);
    int32_t l_2771 = 0x9484D92AL;
    int32_t l_2772[5][7][6] = {{{(-5L),0x8AF8118CL,0x8DD32077L,0xDA7B8761L,(-1L),1L},{(-6L),0L,0x9A2B112FL,(-1L),0xAB232369L,(-1L)},{0xDA7B8761L,0L,0L,0xCC5A8971L,0L,0L},{0x7ACED028L,1L,1L,0xF2DA4FDDL,0L,0x457B1299L},{8L,0x376CA6F7L,0L,(-2L),0xB065D53CL,0L},{0x457B1299L,0x376CA6F7L,1L,0x153F2030L,0L,0xA3EFD646L},{0x211A96D2L,1L,(-1L),(-10L),0x153F2030L,0xD05658EAL}},{{1L,0x7ACED028L,(-1L),0x24A7E84CL,0xA5C4E460L,0L},{1L,(-1L),0x1F3B6502L,0xAB232369L,1L,0x14C669C0L},{(-1L),0x14C669C0L,(-1L),0xA735C419L,(-1L),0x211A96D2L},{0xD05658EAL,1L,0xE9F10E68L,0L,(-6L),0xA735C419L},{0x12ADEC25L,0x7619AB23L,0x9A2B112FL,(-1L),1L,0xDF72D5DEL},{0x9A2B112FL,0xD05658EAL,0x8E2269ADL,1L,0x211A96D2L,(-10L)},{(-1L),0xA1FF7719L,(-1L),0xD87536EAL,(-1L),0x2B5BA94AL}},{{(-2L),0xB6A6B547L,1L,0x373CF97BL,0x373CF97BL,1L},{0L,0L,0x8AF8118CL,1L,8L,1L},{(-1L),0x304A6A35L,0L,5L,(-1L),0x8AF8118CL},{(-6L),(-1L),0L,0x2A878B9DL,0L,1L},{(-1L),0x2A878B9DL,0x8AF8118CL,0xB065D53CL,(-1L),1L},{0xB065D53CL,(-1L),1L,0x828CAC99L,0x14C669C0L,0x2B5BA94AL},{0xDA7B8761L,0L,(-1L),(-1L),5L,(-10L)}},{{5L,0x6D8CAE4BL,0x8E2269ADL,1L,(-4L),0xDF72D5DEL},{0x2A878B9DL,0xB065D53CL,0x9A2B112FL,0x12ADEC25L,(-5L),0xA735C419L},{0xA5C4E460L,(-6L),0xE9F10E68L,0x7D301A13L,(-1L),0x211A96D2L},{(-1L),0L,(-1L),2L,(-1L),0x14C669C0L},{(-1L),0L,0x1F3B6502L,8L,0xB6A6B547L,0L},{0xE9F10E68L,(-1L),(-1L),0xD05658EAL,5L,0xD05658EAL},{(-1L),0xDA7B8761L,(-1L),0x457B1299L,0xAB232369L,0xA3EFD646L}},{{0xCD3C2F24L,0x373CF97BL,1L,(-6L),0x7ACED028L,0L},{5L,0x8DD32077L,0L,(-6L),0L,0x457B1299L},{0xCD3C2F24L,(-2L),1L,0x457B1299L,1L,0x7ACED028L},{(-1L),(-10L),0x153F2030L,0xD05658EAL,1L,(-1L)},{0xE9F10E68L,0x1F3B6502L,(-9L),8L,0xDA7B8761L,(-2L)},{(-1L),8L,0x7D301A13L,2L,0x457B1299L,0x1F3B6502L},{(-1L),0x828CAC99L,0x373CF97BL,0x7D301A13L,0x2B5BA94AL,0x457B1299L}}};
    uint32_t l_2785 = 0x34EF98DEL;
    const uint8_t *l_2799 = (void*)0;
    const uint8_t **l_2798 = &l_2799;
    const uint8_t l_2801 = 0xE3L;
    int64_t *l_2809 = &g_41;
    union U2 l_2835 = {0x615FE75CL};
    uint32_t l_2857[1][3][5] = {{{6UL,6UL,18446744073709551615UL,6UL,6UL},{1UL,0x46247051L,1UL,1UL,0x46247051L},{6UL,18446744073709551607UL,18446744073709551607UL,6UL,18446744073709551607UL}}};
    int32_t *l_2858 = &l_2770;
    uint32_t *l_2861 = &g_1768[0][1];
    int16_t l_2891 = 1L;
    const int32_t l_2892 = 0x279873C9L;
    const int32_t l_2923[7][2][1] = {{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}},{{0xA8298546L},{(-1L)}}};
    uint32_t l_2992 = 0x393E56F6L;
    uint32_t l_3014 = 0xF82A822EL;
    int16_t l_3018 = 5L;
    uint8_t l_3034 = 0UL;
    const uint8_t l_3036[7] = {0UL,1UL,0UL,0UL,1UL,0UL,0UL};
    int64_t l_3037 = 0L;
    uint8_t ***l_3066[7][3] = {{(void*)0,(void*)0,(void*)0},{&g_383,&g_383,&g_383},{(void*)0,(void*)0,(void*)0},{&g_383,&g_383,&g_383},{(void*)0,(void*)0,(void*)0},{&g_383,&g_383,&g_383},{(void*)0,(void*)0,(void*)0}};
    uint16_t l_3100 = 65532UL;
    int8_t l_3101 = 0L;
    int32_t l_3105 = (-7L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_17[i] = 8UL;
    for (g_2 = 0; (g_2 == (-23)); g_2--)
    { 
        uint64_t l_18 = 0x54D8142C78EF8A6ELL;
        struct S1 *l_2750 = &g_2173[0][0];
        int32_t l_2775 = 0xBD7E3B92L;
        int32_t l_2778 = (-5L);
        int32_t l_2780 = 0x7572588DL;
        int32_t l_2781 = 0xDFC6E0E6L;
        int32_t l_2782 = 7L;
        int32_t l_2783[7][6][4] = {{{0x41C8EB24L,0x3A9C57F4L,(-1L),(-3L)},{(-1L),0x5C50C163L,0x41C8EB24L,0x5C50C163L},{0x45A97D23L,0x2C001D87L,0xF7A019F0L,0L},{5L,(-1L),(-1L),0L},{0x3A9C57F4L,(-3L),0L,5L},{0x3A9C57F4L,0x6A4BAE02L,(-1L),(-1L)}},{{5L,5L,0xF7A019F0L,1L},{0x45A97D23L,0xF7A019F0L,0x41C8EB24L,0x2C001D87L},{(-1L),0x0620DD66L,(-1L),0x41C8EB24L},{0x41C8EB24L,0x0620DD66L,5L,0x2C001D87L},{0x0620DD66L,0xF7A019F0L,0x0620DD66L,1L},{0x6A4BAE02L,5L,(-1L),(-1L)}},{{0L,0x6A4BAE02L,1L,5L},{0x2C001D87L,(-3L),1L,0L},{0L,(-1L),(-1L),0L},{0x6A4BAE02L,0x2C001D87L,0x0620DD66L,0x5C50C163L},{0x0620DD66L,0x5C50C163L,5L,(-3L)},{0x41C8EB24L,0x3A9C57F4L,(-1L),(-3L)}},{{(-1L),0x5C50C163L,0x41C8EB24L,0x5C50C163L},{0x45A97D23L,0x2C001D87L,0xF7A019F0L,0L},{5L,(-1L),(-1L),0L},{0x3A9C57F4L,(-3L),0L,5L},{0x3A9C57F4L,0x6A4BAE02L,(-1L),(-1L)},{5L,5L,0xF7A019F0L,1L}},{{0x45A97D23L,0xF7A019F0L,0x41C8EB24L,0x2C001D87L},{(-1L),0x0620DD66L,(-1L),0x41C8EB24L},{0x41C8EB24L,0x0620DD66L,5L,0x2C001D87L},{0x0620DD66L,0xF7A019F0L,0x0620DD66L,1L},{0x6A4BAE02L,5L,(-1L),(-1L)},{0L,0x6A4BAE02L,1L,5L}},{{0x2C001D87L,(-3L),1L,0L},{0L,(-1L),(-1L),0L},{0x6A4BAE02L,0x2C001D87L,0x0620DD66L,0x5C50C163L},{0x0620DD66L,5L,0x41C8EB24L,0x3A9C57F4L},{0x2C001D87L,0x5C50C163L,0L,0x3A9C57F4L},{0x0620DD66L,5L,0x2C001D87L,5L}},{{1L,0L,(-3L),0x45A97D23L},{0x41C8EB24L,(-1L),0x0620DD66L,(-1L)},{0x5C50C163L,0x3A9C57F4L,(-1L),0x41C8EB24L},{0x5C50C163L,(-1L),0x0620DD66L,0x0620DD66L},{0x41C8EB24L,0x41C8EB24L,(-3L),0x6A4BAE02L},{1L,(-3L),0x2C001D87L,0L}}};
        int i, j, k;
        for (g_5[1][2][1] = 2; (g_5[1][2][1] <= (-3)); --g_5[1][2][1])
        { 
            struct S1 *l_2754 = &g_2755;
            int32_t l_2769 = 0x321AE029L;
            int64_t l_2776[3][2][1] = {{{0x1B4E4FFFB267C231LL},{0x1B4E4FFFB267C231LL}},{{0x745E85687F8AAD4FLL},{0x1B4E4FFFB267C231LL}},{{0x1B4E4FFFB267C231LL},{0x745E85687F8AAD4FLL}}};
            int32_t l_2777 = (-1L);
            int32_t l_2779 = 0x1B8F1AB8L;
            int32_t l_2784[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
            const struct S1 *l_2797 = (void*)0;
            const struct S1 **l_2796 = &l_2797;
            const struct S1 ***l_2795 = &l_2796;
            const struct S1 ****l_2794 = &l_2795;
            uint32_t l_2823 = 0xBD81B8F4L;
            struct S0 l_2827[3][7] = {{{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L}},{{-1L,0UL},{-1L,0UL},{-1L,0UL},{-1L,0UL},{-1L,0UL},{-1L,0UL},{-1L,0UL}},{{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L},{0L,0x47L}}};
            const uint32_t ****l_2830 = (void*)0;
            const uint32_t *****l_2829 = &l_2830;
            uint32_t ***l_2834 = &g_1963;
            uint32_t ****l_2833 = &l_2834;
            int i, j, k;
            for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
            { 
                const uint64_t l_16 = 0x1AA12AFD77CCCAEALL;
                int8_t *l_19 = (void*)0;
                int8_t *l_20[1];
                struct S1 *l_2749 = &g_31;
                struct S1 **l_2753[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 1; i++)
                    l_20[i] = &g_21;
            }
            for (g_1523 = (-11); (g_1523 <= 25); g_1523 = safe_add_func_int16_t_s_s(g_1523, 6))
            { 
                int32_t *l_2773 = &g_33;
                int32_t *l_2774[5][3][7] = {{{&g_33,&g_53[1],&g_2441,&g_5[2][4][1],&l_2772[0][4][4],&l_2769,&g_2573[2][2][3].f2},{&g_2342,(void*)0,(void*)0,&g_2342,&g_2573[2][2][3].f2,&g_9,&l_2769},{&g_2441,&g_33,&l_2770,&g_53[1],&l_2770,&g_33,&g_2441}},{{&l_2769,&g_9,&g_2573[2][2][3].f2,&g_2342,(void*)0,(void*)0,&g_2342},{&g_2573[2][2][3].f2,&l_2769,&l_2772[0][4][4],&g_5[2][4][1],&g_2441,&g_53[1],&g_33},{(void*)0,&g_5[0][0][1],&g_2573[2][2][3].f2,&l_2769,&l_2766,(void*)0,(void*)0}},{{&l_2770,&g_2573[2][2][3].f2,&l_2770,&g_2573[2][2][3].f2,&l_2770,&g_2441,&l_2772[4][6][0]},{(void*)0,&g_5[0][0][1],(void*)0,&g_9,&g_2342,(void*)0,&g_2342},{&g_53[1],&l_2769,&g_2441,(void*)0,&g_2,&g_5[1][2][1],&g_2441}},{{(void*)0,&g_9,&l_2766,(void*)0,&g_2342,&g_2342,(void*)0},{&l_2770,&g_33,&l_2770,&g_5[1][2][1],&g_2573[2][2][3].f2,&g_5[2][4][1],&g_2441},{(void*)0,(void*)0,&g_2342,&l_2766,&l_2771,&l_2766,&g_2342}},{{&g_2573[2][2][3].f2,&g_53[1],&g_2,(void*)0,&g_2342,&g_5[2][4][1],&l_2772[4][6][0]},{&l_2769,(void*)0,&g_2342,&g_5[0][0][1],&g_5[0][0][1],&g_2342,(void*)0},{&g_2441,&g_2441,&g_2573[2][2][3].f2,&l_2772[0][1][3],&g_2342,&g_5[1][2][1],&g_33}}};
                int i, j, k;
                (**g_1942) ^= l_2769;
                l_2785--;
                (*l_2773) ^= (**g_1942);
            }
        }
        return l_17[1];
    }
lbl_3083:
    (*l_2858) &= (l_2835 , ((((l_2772[0][0][2] >= (((safe_mul_func_uint8_t_u_u(((0xDDL != (safe_sub_func_int64_t_s_s(((*g_1219) = (((((*g_1817) , (g_2173[0][0].f0 = (safe_mul_func_int8_t_s_s(g_21, 4UL)))) <= ((*g_86) = ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s(((!(((**g_1238) = ((g_1885 || 1UL) ^ l_2835.f2)) > 0L)) <= l_2771), l_2801)), l_2771)), 0xB438BDC7L)), l_2857[0][1][4])) , l_2771), 65535UL)), 0xD3AEBB173593BF62LL)) >= l_2772[3][5][3]), g_2573[2][2][3].f2)) < g_2173[0][0].f1))) ^ (-1L)) != 4294967292UL)), 18446744073709551615UL))) || l_2766), l_17[1])) | l_17[2]) & l_2835.f2)) >= l_2771) | l_2772[3][0][0]) != 0xCC4CL));
    if ((safe_mul_func_int8_t_s_s((0x2CL ^ (((l_2835 , (*l_2858)) <= (*l_2858)) || ((*l_2858) = (((--(*l_2861)) > (*l_2858)) >= 0UL)))), (safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((--(**g_1238)), (**g_1218))), (-3L))))))
    { 
        int16_t l_2883 = 1L;
        int8_t *l_2888 = &g_21;
        int16_t *l_2889[2];
        int32_t l_2890 = 0x31209BE7L;
        int32_t l_2921 = 0x1F943240L;
        int32_t *l_2924 = &g_2342;
        int32_t *** const *l_2939[4];
        uint16_t l_2942 = 0UL;
        int64_t *l_2981 = &g_84[0][0].f0;
        int64_t *l_2982 = &g_826;
        struct S0 **l_3015 = &g_1703;
        int16_t l_3035 = 0xB73FL;
        int i;
        for (i = 0; i < 2; i++)
            l_2889[i] = &g_325[4][1][1];
        for (i = 0; i < 4; i++)
            l_2939[i] = (void*)0;
    }
    else
    { 
        const uint32_t l_3045[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        const int64_t * const l_3086[5][5] = {{(void*)0,&g_2933.f0,(void*)0,(void*)0,&g_2933.f0},{&g_3047.f0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_41,(void*)0,&g_2933.f0,&g_2933.f0,(void*)0},{&g_3047.f0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_41,(void*)0,&g_2933.f0,&g_2933.f0,(void*)0}};
        int64_t * const l_3087 = &g_41;
        int32_t l_3088 = 0xEF3B2107L;
        int16_t *l_3095 = &g_325[2][0][2];
        struct S0 l_3170 = {0x9B7748262BC6D68BLL,248UL};
        int i, j;
        for (g_400 = (-5); (g_400 > 5); g_400 = safe_add_func_int16_t_s_s(g_400, 6))
        { 
            uint8_t l_3053 = 0xE1L;
            int64_t ***l_3068[4][7] = {{&g_1979[0],&g_1979[2],(void*)0,&g_1979[0],&g_1979[1],&g_1979[3],&g_1979[0]},{&g_1979[0],&g_1979[0],(void*)0,(void*)0,(void*)0,&g_1979[0],&g_1979[0]},{&g_1979[0],&g_1979[3],&g_1979[1],&g_1979[0],(void*)0,&g_1979[2],&g_1979[0]},{(void*)0,&g_1979[0],&g_1979[3],&g_1979[3],&g_1979[0],(void*)0,&g_1979[0]}};
            int64_t ****l_3067 = &l_3068[1][4];
            int32_t ****l_3074 = &g_1941;
            int i, j;
            if (l_3045[2])
            { 
                const uint8_t l_3046[3][4][4] = {{{0x9FL,0xD1L,1UL,0x0CL},{0x9FL,250UL,250UL,0x9FL},{0xDDL,0x0CL,255UL,250UL},{0x0CL,0xD1L,0x12L,0x5AL}},{{254UL,0xDDL,250UL,0x5AL},{255UL,0xD1L,255UL,250UL},{0x9FL,0x0CL,3UL,0x9FL},{254UL,250UL,255UL,0x0CL}},{{250UL,0xD1L,255UL,255UL},{254UL,254UL,3UL,0x5AL},{0x9FL,0x91L,255UL,0x0CL},{255UL,0x0CL,250UL,255UL}}};
                int32_t *l_3049 = (void*)0;
                int32_t *l_3050 = &g_53[1];
                int32_t *l_3051 = &l_2772[3][0][3];
                int32_t *l_3052 = (void*)0;
                int i, j, k;
                (*g_86) |= 0xACCBEFBEL;
                for (g_2356 = 0; (g_2356 <= 6); g_2356 += 1)
                { 
                    struct S1 **l_3048 = &g_30[3][1];
                    (*g_1703) = (l_3046[1][0][3] , g_3047);
                    (*l_3048) = l_2751;
                }
                (**g_1941) = (**g_1941);
                (*g_1942) = (*g_1942);
                l_3053++;
            }
            else
            { 
                int32_t l_3056 = 8L;
                uint8_t l_3063 = 0xB5L;
                struct S0 l_3079 = {1L,6UL};
                (*g_86) |= l_3056;
                if (l_3053)
                    break;
                if ((***g_1941))
                { 
                    if (l_3045[1])
                        break;
                    return l_3045[2];
                }
                else
                { 
                    int16_t l_3057 = 0x9285L;
                    if ((**g_1942))
                        break;
                    if (l_3057)
                        break;
                }
                for (g_1355 = 0; (g_1355 <= 4); g_1355 = safe_add_func_int8_t_s_s(g_1355, 6))
                { 
                    int32_t l_3064 = 0L;
                    l_3056 = (l_3053 , ((*g_86) = ((*l_2858) = (g_3060 && ((safe_mod_func_uint16_t_u_u(l_3063, l_3064)) || ((+((void*)0 == l_3066[5][0])) == ((void*)0 != l_3067)))))));
                    (*l_2858) ^= ((safe_mul_func_uint8_t_u_u(((((***g_1941) = (safe_sub_func_int32_t_s_s(l_3045[2], ((safe_unary_minus_func_int16_t_s((((g_1768[0][1] != ((g_3075 = l_3074) == g_3076)) || 1L) & (**g_1238)))) >= (0xC6058AFAL < (**g_3078)))))) & 0x3CE38796L) , 0x73L), l_3064)) || l_3056);
                    (*g_1703) = l_3079;
                }
                if (((*l_2858) >= (*g_384)))
                { 
                    uint64_t l_3080 = 0x4CC7BF8FD72D3F3ELL;
                    l_3080++;
                }
                else
                { 
                    uint32_t l_3089 = 4UL;
                    if (g_33)
                        goto lbl_3083;
                    if ((***g_1941))
                        continue;
                    if ((*l_2858))
                        break;
                    l_3089 ^= (((((g_2755.f0 == ((((((*l_2858) >= (safe_lshift_func_uint16_t_u_s((l_3086[2][2] == ((****l_3074) , l_3087)), ((**g_383) < ((l_3088 = (*l_2858)) < (*g_384)))))) & 65535UL) , (*l_2858)) , g_827) | g_156.f1)) > 0L) && (****l_3074)) & 249UL) , (****l_3074));
                    (***g_3077) &= ((****g_3075) = (-1L));
                }
            }
            (****l_3074) = 0L;
            (**g_3078) = ((****g_3075) |= ((void*)0 == &g_1890));
            (**g_3078) = (**g_3078);
        }
        (***g_3077) = 0x818E6393L;
        for (g_826 = 0; g_826 < 2; g_826 += 1)
        {
            g_53[g_826] = 0L;
        }
        if (((((safe_mod_func_int16_t_s_s((l_3045[2] | (safe_rshift_func_uint8_t_u_s(((void*)0 != &g_1977), (((+(((*l_3095) = (l_3088 | 0UL)) | (g_1697[0].f2 || (safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(0x87L, (*l_2858))), 1L))))) != 0x1EE0315AD355EFCDLL) >= (*l_2858))))), l_3088)) == l_3100) <= l_3045[2]) < (*l_2858)))
        { 
            int32_t *l_3102 = &l_2766;
            int32_t *l_3103 = &l_3088;
            int32_t *l_3104[1][1][5];
            uint32_t l_3106 = 0x7F174ECFL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_3104[i][j][k] = &l_2772[3][5][3];
                }
            }
            --l_3106;
        }
        else
        { 
            int16_t l_3112 = 1L;
            int32_t l_3122[1][3][5] = {{{0x9415ECD8L,0x9415ECD8L,0x1EAD1C6DL,0x9415ECD8L,0x9415ECD8L},{0x3A29C0C5L,0x90277831L,0x3A29C0C5L,0x3A29C0C5L,0x90277831L},{0x9415ECD8L,(-2L),(-2L),0x9415ECD8L,(-2L)}}};
            struct S0 l_3169[6] = {{-1L,0xDFL},{-1L,0xDFL},{-1L,0xDFL},{-1L,0xDFL},{-1L,0xDFL},{-1L,0xDFL}};
            int i, j, k;
            for (l_2771 = (-13); (l_2771 > (-7)); ++l_2771)
            { 
                int32_t *l_3111 = (void*)0;
                int32_t *l_3113 = &g_2342;
                int32_t *l_3114 = &l_2772[3][5][3];
                int32_t *l_3115 = &g_5[1][2][1];
                int32_t *l_3116 = &l_2772[2][1][1];
                int32_t *l_3117 = &l_2835.f2;
                int32_t *l_3118 = &g_5[1][3][1];
                int32_t *l_3119 = &g_53[1];
                int32_t *l_3120 = (void*)0;
                int32_t *l_3121 = &g_2;
                int32_t *l_3123 = &l_2772[3][5][3];
                int32_t *l_3124 = &l_2766;
                int32_t *l_3125 = &g_33;
                int32_t *l_3126 = &g_2441;
                int32_t *l_3127 = &g_2573[2][2][3].f2;
                int32_t *l_3128 = &g_53[1];
                int32_t *l_3129 = (void*)0;
                int32_t *l_3130 = &l_3122[0][0][2];
                int32_t *l_3131 = &l_2766;
                int32_t *l_3132 = &g_53[1];
                int32_t *l_3133 = &l_3122[0][1][0];
                int32_t *l_3134 = &g_53[1];
                int32_t *l_3135 = &g_5[2][1][0];
                int32_t *l_3136 = &l_2772[3][5][3];
                int32_t *l_3137 = &g_9;
                int32_t *l_3138 = (void*)0;
                int32_t *l_3139 = &l_3122[0][1][0];
                int32_t *l_3140 = (void*)0;
                int32_t *l_3141 = &l_3088;
                int32_t *l_3142 = &l_2770;
                int32_t *l_3143 = &l_2835.f2;
                int32_t *l_3144[5];
                uint16_t l_3145 = 65535UL;
                int32_t l_3164 = 0xF596DD43L;
                int i;
                for (i = 0; i < 5; i++)
                    l_3144[i] = &g_2441;
                (***g_3075) = l_3111;
                --l_3145;
                l_3088 ^= (*l_2858);
                for (l_2891 = 0; (l_2891 == (-5)); l_2891 = safe_sub_func_uint8_t_u_u(l_2891, 2))
                { 
                    union U2 **l_3150[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S1 * const l_3151 = &g_2999;
                    struct S1 **l_3152 = (void*)0;
                    struct S1 **l_3153 = (void*)0;
                    struct S1 **l_3154 = &l_2752;
                    int32_t l_3159 = (-1L);
                    int i;
                    g_1817 = &g_8[0];
                    (*l_3154) = l_3151;
                    (*l_3121) = ((((((void*)0 == (*g_383)) , ((*l_3137) == ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0x2B77C1B3L, (((*l_3133) & l_3159) <= (((~(safe_div_func_int8_t_s_s((*l_2858), 0x9EL))) & g_3163) || (-3L))))), l_3164)) < l_3159))) | (*l_3136)) >= l_3159) , l_3159);
                }
                return (*l_3127);
            }
            for (g_2356 = 12; (g_2356 != 16); g_2356 = safe_add_func_int8_t_s_s(g_2356, 4))
            { 
                for (g_135 = 0; (g_135 == 18); g_135++)
                { 
                    struct S0 ** const ***l_3174 = (void*)0;
                    struct S0 ** const ***l_3175 = &g_3171;
                    l_3170 = l_3169[0];
                    (*l_3175) = g_3171;
                    if ((*g_86))
                        break;
                }
            }
        }
    }
    (*g_1942) = (void*)0;
    return (**g_1218);
}



static struct S1 * func_10(struct S1 * p_11, struct S1 * p_12, int32_t  p_13, struct S1 * const  p_14, struct S1 * p_15)
{ 
    return p_15;
}



static struct S1  func_22(uint8_t  p_23, int8_t * p_24)
{ 
    struct S0 l_2604 = {0x5F03F5CFD49CC11DLL,0x05L};
    uint8_t ***l_2615 = &g_383;
    int32_t l_2619[5];
    int32_t l_2627 = 0xE58BE421L;
    union U2 l_2646 = {0x3129C252L};
    uint64_t ** const *l_2647[6][7] = {{&g_1238,&g_1238,&g_1238,(void*)0,(void*)0,&g_1238,&g_1238},{&g_1238,&g_1238,(void*)0,(void*)0,&g_1238,&g_1238,&g_1238},{&g_1238,(void*)0,(void*)0,&g_1238,&g_1238,&g_1238,(void*)0},{&g_1238,&g_1238,&g_1238,(void*)0,&g_1238,&g_1238,&g_1238},{(void*)0,(void*)0,&g_1238,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1238,&g_1238,&g_1238,&g_1238,&g_1238,&g_1238,&g_1238}};
    uint64_t *l_2650 = &g_827;
    uint64_t ** const l_2649 = &l_2650;
    uint64_t ** const *l_2648 = &l_2649;
    struct S1 ****l_2677 = &g_857;
    int16_t l_2689 = 3L;
    const int64_t l_2705 = 0x1021C78DDC303FC0LL;
    int32_t *l_2740 = &g_2573[2][2][3].f0;
    struct S1 l_2745 = {4071,79,1UL,101,11314};
    int32_t *l_2748 = &g_2441;
    int i, j;
    for (i = 0; i < 5; i++)
        l_2619[i] = 0x6CC53FE9L;
    for (g_1355 = 28; (g_1355 < 54); g_1355 = safe_add_func_uint8_t_u_u(g_1355, 8))
    { 
        int8_t *** const *l_2608 = (void*)0;
        int8_t *** const **l_2607 = &l_2608;
        int32_t l_2609 = (-7L);
        int16_t *l_2616 = &g_2416[6];
        int16_t l_2617 = 6L;
        int64_t *l_2618 = &g_2573[2][2][3].f3.f0;
        int32_t l_2628 = (-4L);
        int32_t l_2629 = (-6L);
        uint32_t l_2630 = 0xCCAB68DEL;
        uint16_t l_2643 = 3UL;
        struct S0 l_2655[3][4] = {{{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L}},{{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L}},{{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L},{0x6F804297101012B7LL,0x32L}}};
        struct S1 l_2656 = {2593,60,0xFBL,299,-4641};
        struct S1 **** const l_2676[6] = {&g_857,&g_857,&g_857,&g_857,&g_857,&g_857};
        int16_t l_2686 = (-3L);
        int16_t l_2691 = 0L;
        int32_t l_2692[1];
        struct S1 l_2744 = {3456,11,255UL,43,-911};
        int i, j;
        for (i = 0; i < 1; i++)
            l_2692[i] = 0L;
        (*g_86) ^= ((l_2604 , (--(*g_384))) ^ (&g_722 == l_2607));
        if ((((p_23 != l_2609) < ((((*l_2618) = ((*****g_1976) ^= (((+((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(8UL, 7)), (((*g_384) = (1UL && ((*l_2616) = (4294967292UL < (l_2615 != (*g_1824)))))) <= p_23))) || l_2604.f0)) | 0x82L) >= l_2617))) == 0x84E26E571E3F1DB4LL) , l_2617)) || l_2604.f0))
        { 
            int32_t *l_2620 = &g_53[0];
            int32_t *l_2621 = &l_2619[4];
            int32_t *l_2622 = &g_2342;
            int32_t *l_2623 = &g_33;
            int32_t *l_2624 = &g_2441;
            int32_t *l_2625 = (void*)0;
            int32_t *l_2626[1][7][4] = {{{&l_2619[3],&l_2619[3],&g_2,&l_2619[3]},{&l_2619[3],&g_53[1],&g_53[1],&g_53[1]},{&g_2,&g_53[1],&g_2,&g_2},{&g_53[1],&g_53[1],&l_2619[3],&g_53[1]},{&g_53[1],&g_2,&g_2,&g_53[1]},{&g_2,&g_53[1],&g_2,&g_2},{&g_53[1],&g_53[1],&l_2619[3],&g_53[1]}}};
            uint16_t *l_2675 = &g_344[1];
            struct S1 l_2680[6][4] = {{{5276,29,255UL,8,-7380},{2102,58,1UL,83,-2640},{2102,58,1UL,83,-2640},{5276,29,255UL,8,-7380}},{{2102,58,1UL,83,-2640},{5276,29,255UL,8,-7380},{2102,58,1UL,83,-2640},{2102,58,1UL,83,-2640}},{{5276,29,255UL,8,-7380},{5276,29,255UL,8,-7380},{1613,68,255UL,259,-10035},{5276,29,255UL,8,-7380}},{{5276,29,255UL,8,-7380},{2102,58,1UL,83,-2640},{2102,58,1UL,83,-2640},{5276,29,255UL,8,-7380}},{{2102,58,1UL,83,-2640},{5276,29,255UL,8,-7380},{2102,58,1UL,83,-2640},{2102,58,1UL,83,-2640}},{{5276,29,255UL,8,-7380},{5276,29,255UL,8,-7380},{1613,68,255UL,259,-10035},{5276,29,255UL,8,-7380}}};
            int i, j, k;
            l_2630--;
            for (l_2617 = 0; (l_2617 <= 4); l_2617 += 1)
            { 
                uint16_t l_2633 = 65535UL;
                struct S0 l_2636 = {1L,0xC4L};
                int32_t l_2638 = 0x3D10E326L;
                int32_t l_2639 = 0x3199751DL;
                int32_t l_2641 = 0x9CD077BDL;
                for (g_605 = 0; (g_605 <= 1); g_605 += 1)
                { 
                    (***g_1941) = 0x6B26ADCAL;
                    (**g_1941) = (*g_1942);
                    (*g_1942) = l_2621;
                    --l_2633;
                    (*g_1703) = l_2636;
                }
                if (l_2604.f1)
                    continue;
                for (g_1523 = 0; (g_1523 <= 4); g_1523 += 1)
                { 
                    int64_t l_2637[5][6][2] = {{{0L,1L},{0x464EF9288E7BD801LL,(-4L)},{0x464EF9288E7BD801LL,1L},{0L,0x3FCB380322000ECFLL},{1L,(-9L)},{0x94DAF12B6CED6FECLL,5L}},{{1L,0xEBE4E5297D2B27FBLL},{0xEBE4E5297D2B27FBLL,0L},{0x0C6D19BF99EF50DDLL,0L},{0xEBE4E5297D2B27FBLL,0xEBE4E5297D2B27FBLL},{1L,5L},{0x94DAF12B6CED6FECLL,(-9L)}},{{1L,0x3FCB380322000ECFLL},{0L,1L},{0x464EF9288E7BD801LL,(-4L)},{0x464EF9288E7BD801LL,1L},{0L,0x3FCB380322000ECFLL},{1L,(-9L)}},{{0x94DAF12B6CED6FECLL,5L},{1L,0xEBE4E5297D2B27FBLL},{0xEBE4E5297D2B27FBLL,0L},{0x0C6D19BF99EF50DDLL,0L},{0xEBE4E5297D2B27FBLL,0xEBE4E5297D2B27FBLL},{1L,5L}},{{0x94DAF12B6CED6FECLL,(-9L)},{1L,0x3FCB380322000ECFLL},{0L,1L},{0x464EF9288E7BD801LL,(-4L)},{0x464EF9288E7BD801LL,1L},{0L,0x3FCB380322000ECFLL}}};
                    int8_t l_2640 = 0xECL;
                    int16_t l_2642 = 0L;
                    int i, j, k;
                    l_2643--;
                }
            }
            if (((0xDDDE21D7803B8085LL ^ (((l_2646 , ((*l_2622) = ((l_2648 = l_2647[4][0]) == ((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_2655[1][1] , (l_2656 , l_2646.f1)) >= (((!(safe_add_func_uint16_t_u_u(((*l_2675) = (((~((safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s(p_23, 0x4121L)), l_2656.f2)), p_23)), 7UL)), 5)), 0x3C8DL)) | l_2619[3]), (**g_383))) , 0xDD6AEA64L)) || (-5L)) == (***g_1237))), p_23))) , l_2676[4]) == l_2677)), 0x14D1D700L)), 3)) , (void*)0)))) > 0x8601FBAFL) && p_23)) != (*l_2620)))
            { 
                (*g_1942) = (*g_1942);
                if (p_23)
                    continue;
                for (l_2604.f0 = 0; (l_2604.f0 > (-4)); --l_2604.f0)
                { 
                    l_2686 ^= ((*l_2620) = (l_2680[4][1] , (safe_add_func_uint64_t_u_u(((*l_2650) ^= (safe_lshift_func_uint16_t_u_s((+(*g_384)), 13))), 0UL))));
                }
            }
            else
            { 
                int32_t l_2688 = 0x53416407L;
                int32_t l_2690 = (-1L);
                uint32_t l_2695 = 0xD7F048A8L;
                struct S1 l_2706 = {4248,67,0xF2L,286,-3036};
                if ((*l_2621))
                { 
                    int8_t l_2687 = 0xEBL;
                    int32_t l_2693 = 6L;
                    int32_t l_2694 = 0x14EA2EABL;
                    l_2695++;
                }
                else
                { 
                    int32_t l_2702 = 6L;
                    (*l_2620) = ((l_2655[1][1] , (p_23 , (safe_div_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u(l_2702, (0x3E5B39B7L != ((safe_mod_func_uint8_t_u_u(255UL, ((***l_2615) = p_23))) == 0x9698L)))) <= 0x33EBB30EL) , l_2695), 0xD28E7E78L)))) ^ l_2705);
                    (*g_1703) = (l_2619[4] , (*g_1703));
                    return l_2706;
                }
            }
        }
        else
        { 
            struct S1 l_2707 = {2908,23,6UL,323,-2729};
            int32_t *l_2708 = &l_2619[4];
            for (g_114 = 0; (g_114 <= 2); g_114 += 1)
            { 
                return l_2707;
            }
            (**g_1941) = l_2708;
            (**g_1941) = (*g_1942);
        }
        if (((safe_sub_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((l_2692[0] = ((***g_1941) = (safe_mod_func_int8_t_s_s((+((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s((!l_2656.f2), 6)))) | ((g_2 || (safe_mod_func_int16_t_s_s(p_23, (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_156.f0, (g_31.f4 , l_2619[4]))), (((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 != l_2740), l_2646.f1)), p_23)), p_23)), g_2741)) , &g_1637) != (void*)0))), l_2656.f2)), l_2656.f4))))) | p_23))), 1UL)))) & 0x077710B3L), l_2656.f1)), 10)) && 9L) , (void*)0) != &g_1942), l_2686)) & (*****g_1976)))
        { 
            (*g_86) ^= (safe_div_func_int16_t_s_s((l_2627 = ((**g_383) | l_2646.f0)), p_23));
            (**g_1941) = (void*)0;
        }
        else
        { 
            (*g_86) ^= l_2627;
            if (p_23)
                break;
            return l_2744;
        }
        return l_2745;
    }
    for (g_1885 = 0; (g_1885 > 1); g_1885++)
    { 
        (*g_1703) = (*g_1703);
        l_2748 = &l_2627;
    }
    return l_2745;
}



static int8_t * func_25(struct S1 * p_26, struct S1 * p_27, const int8_t * p_28, union U2  p_29)
{ 
    int32_t *l_32[3][4][7] = {{{&g_9,&g_5[0][1][1],&g_5[1][0][1],&g_9,&g_5[0][1][0],&g_9,&g_9},{&g_5[1][2][1],&g_33,&g_2,&g_33,&g_5[1][2][1],&g_5[1][1][0],&g_9},{(void*)0,&g_5[0][1][1],&g_9,&g_9,&g_33,&g_9,&g_33},{&g_33,&g_5[0][3][0],&g_5[0][3][0],&g_33,&g_33,&g_9,&g_5[1][3][0]}},{{(void*)0,&g_9,&g_5[0][1][0],&g_33,&g_2,&g_2,&g_33},{&g_5[1][2][1],&g_9,&g_5[1][2][1],&g_9,&g_33,&g_2,&g_5[1][3][0]},{&g_9,&g_2,&g_33,&g_5[0][1][0],&g_5[1][0][0],&g_5[0][1][0],&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_2,&g_9}},{{&g_9,&g_9,&g_2,&g_5[0][1][1],&g_5[0][1][1],&g_2,&g_9},{&g_5[0][3][0],&g_5[1][1][0],&g_33,&g_5[1][2][1],&g_33,&g_9,&g_33},{&g_2,&g_9,&g_5[1][0][0],&g_9,&g_5[1][0][0],&g_9,&g_2},{&g_33,&g_9,&g_33,&g_5[1][2][1],&g_33,&g_5[1][1][0],&g_5[0][3][0]}}};
    int64_t *l_40 = &g_41;
    uint16_t *l_567 = (void*)0;
    uint16_t *l_568 = &g_569;
    int32_t l_1153 = (-4L);
    struct S1 l_1228 = {5519,66,0x94L,237,8815};
    int64_t l_2259 = 2L;
    uint32_t *l_2262 = (void*)0;
    uint32_t *l_2263 = &g_1355;
    uint32_t *l_2266 = (void*)0;
    int8_t *l_2267 = (void*)0;
    int8_t *l_2268 = (void*)0;
    int8_t * const ***l_2269 = (void*)0;
    struct S1 ****l_2272 = (void*)0;
    int16_t l_2304 = 1L;
    int32_t l_2307 = (-1L);
    uint32_t l_2309 = 0xB1B94147L;
    uint8_t l_2332 = 0xC7L;
    uint16_t l_2418 = 65535UL;
    uint8_t l_2431 = 0x88L;
    const int16_t *l_2454 = &g_325[3][0][3];
    const int16_t ** const l_2453[5] = {&l_2454,&l_2454,&l_2454,&l_2454,&l_2454};
    const int16_t ** const *l_2452 = &l_2453[4];
    const int16_t ** const **l_2451 = &l_2452;
    int8_t l_2476 = 4L;
    const union U2 * const l_2488 = &g_8[3];
    const union U2 * const *l_2487 = &l_2488;
    struct S0 **l_2534[6];
    uint32_t l_2547 = 0x31C42F5FL;
    int32_t ***l_2579[5][6] = {{&g_1942,(void*)0,&g_1942,&g_1942,(void*)0,&g_1942},{(void*)0,&g_1942,&g_1942,(void*)0,&g_1942,&g_1942},{&g_1942,(void*)0,&g_1942,&g_1942,&g_1942,&g_1942},{&g_1942,&g_1942,&g_1942,(void*)0,&g_1942,(void*)0},{(void*)0,&g_1942,(void*)0,&g_1942,&g_1942,&g_1942}};
    int8_t l_2600[4][5][7] = {{{0x1FL,0x1FL,(-6L),0xBBL,(-6L),0x1FL,0x1FL},{9L,(-7L),0x18L,(-7L),9L,9L,(-7L)},{(-3L),4L,(-3L),(-6L),(-6L),(-3L),4L},{(-7L),0L,0x18L,0x18L,0L,(-7L),0L},{(-3L),(-6L),(-6L),(-3L),4L,(-3L),(-6L)}},{{9L,9L,(-7L),0x18L,(-7L),9L,9L},{0x1FL,(-6L),0xBBL,(-6L),0x1FL,0x1FL,(-6L)},{1L,0L,1L,(-7L),(-7L),1L,0L},{(-6L),4L,0xBBL,0xBBL,4L,(-6L),4L},{1L,(-7L),(-7L),1L,0L,1L,(-7L)}},{{0x1FL,0x1FL,(-6L),0xBBL,(-6L),0x1FL,0x1FL},{9L,(-7L),0x18L,(-7L),9L,9L,(-7L)},{(-3L),4L,(-3L),(-6L),(-6L),(-3L),4L},{(-7L),0L,0x18L,0x18L,0L,(-7L),0L},{(-3L),(-6L),(-6L),(-3L),4L,(-3L),(-6L)}},{{9L,9L,(-7L),0x18L,(-7L),9L,9L},{0x1FL,(-6L),0xBBL,(-6L),0x1FL,0x1FL,(-6L)},{1L,0L,1L,(-7L),(-7L),1L,0L},{(-6L),4L,0xBBL,0xBBL,4L,(-6L),4L},{1L,(-7L),(-7L),1L,0L,1L,(-7L)}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2534[i] = &g_1703;
    p_29.f2 |= g_9;
    return (**g_723);
}



static int32_t  func_34(struct S1 * p_35, uint8_t  p_36, struct S1  p_37)
{ 
    int32_t l_1255 = 0L;
    int32_t l_1263 = 0xB1A16730L;
    int32_t l_1267 = 0x69C03312L;
    uint8_t ***l_1280 = &g_383;
    uint32_t l_1300 = 0x04E913DBL;
    int16_t * const *l_1304 = &g_392[3];
    int16_t * const **l_1303 = &l_1304;
    int32_t **l_1310 = (void*)0;
    struct S0 l_1345 = {0L,250UL};
    int16_t ***l_1349 = &g_391[1];
    int16_t ****l_1348 = &l_1349;
    int16_t *****l_1347 = &l_1348;
    int32_t l_1352 = (-3L);
    int32_t l_1354[1][5] = {{(-2L),(-2L),(-2L),(-2L),(-2L)}};
    uint32_t *l_1358 = &g_400;
    int64_t l_1367[7][1][5] = {{{0xF54E379A483D0C2CLL,(-10L),2L,(-10L),0xF54E379A483D0C2CLL}},{{1L,0L,0L,1L,1L}},{{(-5L),(-10L),(-5L),0L,(-5L)}},{{1L,1L,0x835ECEB9A6EB223CLL,0L,1L}},{{0xF54E379A483D0C2CLL,0L,2L,0L,0xF54E379A483D0C2CLL}},{{1L,0L,0x835ECEB9A6EB223CLL,1L,1L}},{{(-5L),0L,(-5L),(-10L),(-5L)}}};
    int64_t **l_1370[6][3][2] = {{{(void*)0,&g_1219},{(void*)0,&g_1219},{&g_1219,(void*)0}},{{(void*)0,&g_1219},{&g_1219,&g_1219},{(void*)0,(void*)0}},{{&g_1219,&g_1219},{(void*)0,&g_1219},{(void*)0,&g_1219}},{{&g_1219,(void*)0},{&g_1219,&g_1219},{&g_1219,(void*)0}},{{&g_1219,&g_1219},{(void*)0,&g_1219},{(void*)0,&g_1219}},{{&g_1219,(void*)0},{(void*)0,&g_1219},{&g_1219,&g_1219}}};
    int64_t **l_1371 = &g_1219;
    int8_t l_1372 = 0x55L;
    int32_t l_1382 = 0x8B98549CL;
    uint64_t l_1383 = 4UL;
    uint64_t ** const **l_1392 = (void*)0;
    uint64_t l_1419 = 1UL;
    int32_t *l_1490 = &l_1267;
    struct S1 ****l_1496 = &g_857;
    struct S1 l_1658 = {3793,79,0x7DL,322,2378};
    const struct S1 *l_1693 = &g_258;
    const struct S1 **l_1692[3][2][4] = {{{&l_1693,(void*)0,&l_1693,&l_1693},{&l_1693,&l_1693,&l_1693,&l_1693}},{{&l_1693,(void*)0,&l_1693,&l_1693},{&l_1693,&l_1693,&l_1693,&l_1693}},{{&l_1693,&l_1693,&l_1693,&l_1693},{&l_1693,(void*)0,&l_1693,&l_1693}}};
    const struct S1 ***l_1691 = &l_1692[1][0][2];
    const struct S1 ****l_1690 = &l_1691;
    union U2 l_1700 = {0xDBC62376L};
    int64_t ***l_1764 = &l_1370[0][0][0];
    int64_t ****l_1763 = &l_1764;
    int64_t *****l_1762 = &l_1763;
    int32_t l_1778 = 0x4F8CEA1FL;
    uint32_t l_1796 = 0x74394C94L;
    uint16_t *l_1900[1][5][3] = {{{(void*)0,(void*)0,&g_344[3]},{&g_569,&g_569,&g_569},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_569,(void*)0},{&g_569,(void*)0,(void*)0}}};
    uint8_t l_1901 = 0xA3L;
    int8_t l_2047 = 6L;
    struct S1 *****l_2065 = &l_1496;
    uint16_t l_2080 = 1UL;
    uint32_t l_2088 = 0xE2DD785CL;
    uint8_t l_2178 = 0xAEL;
    uint32_t l_2214 = 0x2128A055L;
    union U2 **l_2233 = &g_1817;
    int i, j, k;
    for (p_36 = 0; (p_36 != 33); ++p_36)
    { 
        int64_t l_1231 = 0L;
        int64_t l_1246[3];
        int32_t l_1252 = 0x0F3E783AL;
        int32_t l_1256 = 0x191E74F8L;
        int32_t l_1257 = 0L;
        int32_t l_1258 = (-5L);
        int32_t l_1260 = 0x76DB247FL;
        int32_t l_1261 = (-1L);
        int32_t l_1262 = 0x96A25023L;
        int32_t l_1264 = 0x57F6DC4EL;
        int32_t l_1265 = 0xD26DDE1AL;
        int32_t l_1266 = 0L;
        uint16_t *l_1295 = &g_344[1];
        int16_t * const **l_1305 = &l_1304;
        struct S1 l_1306 = {978,70,0x6FL,177,10058};
        int32_t *l_1307[7] = {&l_1266,&l_1266,&g_5[1][2][1],&l_1266,&l_1266,&g_5[1][2][1],&l_1266};
        int16_t *****l_1350 = &l_1348;
        int i;
        for (i = 0; i < 3; i++)
            l_1246[i] = (-10L);
        for (g_41 = 0; g_41 < 7; g_41 += 1)
        {
            for (g_135 = 0; g_135 < 3; g_135 += 1)
            {
                g_881[g_41][g_135] = 0x26B6L;
            }
        }
        if (l_1231)
        { 
            int32_t *l_1234 = &g_53[0];
            uint32_t l_1243 = 0x57C3D1B7L;
            struct S1 l_1247 = {3587,17,3UL,205,-8784};
            int8_t l_1249 = 0x8BL;
            int32_t l_1259[7] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
            int i;
            if (g_2)
                break;
            for (g_21 = (-4); (g_21 != (-10)); g_21 = safe_sub_func_uint16_t_u_u(g_21, 6))
            { 
                int32_t *l_1235[5];
                uint8_t ***l_1282[6];
                int i;
                for (i = 0; i < 5; i++)
                    l_1235[i] = &g_53[1];
                for (i = 0; i < 6; i++)
                    l_1282[i] = &g_383;
                l_1235[1] = l_1234;
                if ((*l_1234))
                { 
                    return g_9;
                }
                else
                { 
                    uint64_t *****l_1240 = &g_1236;
                    uint64_t ****l_1242[1];
                    uint64_t *****l_1241 = &l_1242[0];
                    struct S1 ** const *l_1248[7][6][5] = {{{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]},{&g_173[4][3],&g_173[4][4],&g_173[4][3],&g_173[2][4],&g_173[4][3]},{(void*)0,&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4]},{(void*)0,&g_173[2][4],&g_173[4][4],&g_173[2][4],(void*)0},{&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4],(void*)0}},{{&g_173[4][3],&g_173[2][4],&g_173[4][3],&g_173[4][4],&g_173[4][3]},{&g_173[4][4],&g_173[4][4],&g_173[2][0],&g_173[1][1],(void*)0},{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]},{&g_173[4][3],&g_173[4][4],&g_173[4][3],&g_173[2][4],&g_173[4][3]},{(void*)0,&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4]}},{{(void*)0,&g_173[2][4],&g_173[4][4],&g_173[2][4],(void*)0},{&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4],(void*)0},{&g_173[4][3],&g_173[2][4],&g_173[4][3],&g_173[4][4],&g_173[4][3]},{&g_173[4][4],&g_173[4][4],&g_173[2][0],&g_173[1][1],(void*)0},{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]}},{{&g_173[4][3],&g_173[4][4],&g_173[4][3],&g_173[2][4],&g_173[4][3]},{(void*)0,&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4]},{(void*)0,&g_173[2][4],&g_173[4][4],&g_173[2][4],(void*)0},{&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4],(void*)0},{&g_173[4][3],&g_173[2][4],&g_173[4][3],&g_173[4][4],&g_173[4][3]},{&g_173[4][4],&g_173[4][4],&g_173[2][0],&g_173[1][1],(void*)0}},{{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]},{&g_173[4][3],&g_173[4][4],&g_173[4][3],&g_173[2][4],&g_173[4][3]},{(void*)0,&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4]},{(void*)0,&g_173[2][4],&g_173[4][4],&g_173[2][4],(void*)0},{&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4],(void*)0}},{{&g_173[4][3],&g_173[2][4],&g_173[4][3],&g_173[4][4],&g_173[4][3]},{&g_173[4][4],&g_173[4][4],&g_173[2][0],&g_173[1][1],(void*)0},{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]},{&g_173[4][3],&g_173[4][4],&g_173[4][3],&g_173[2][4],&g_173[4][3]},{(void*)0,&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4]}},{{(void*)0,&g_173[2][4],&g_173[4][4],&g_173[2][4],(void*)0},{&g_173[4][4],&g_173[1][1],&g_173[1][1],&g_173[4][4],(void*)0},{&g_173[4][3],&g_173[2][4],&g_173[4][3],&g_173[4][4],&g_173[4][3]},{&g_173[4][4],&g_173[4][4],&g_173[2][0],&g_173[1][1],(void*)0},{(void*)0,&g_173[4][4],&g_173[4][4],&g_173[4][4],(void*)0},{(void*)0,&g_173[1][1],&g_173[2][0],&g_173[4][4],&g_173[4][4]}}};
                    int32_t l_1250 = (-9L);
                    int32_t l_1251 = 0x77E92E0FL;
                    int32_t l_1253 = 0xE4810AB1L;
                    int32_t l_1254[1];
                    uint64_t l_1268[2][6] = {{0x7AB4FA85135CA5A2LL,6UL,0x7AB4FA85135CA5A2LL,6UL,0x7AB4FA85135CA5A2LL,6UL},{0x7AB4FA85135CA5A2LL,6UL,0x7AB4FA85135CA5A2LL,6UL,0x7AB4FA85135CA5A2LL,6UL}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1242[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_1254[i] = (-5L);
                    (*l_1241) = ((*l_1240) = g_1236);
                    (*l_1234) = (((((((l_1243 == p_37.f1) , (((*l_1234) & (((4294967290UL ^ (p_36 , l_1246[2])) & (((((l_1247 , (void*)0) != l_1248[1][5][1]) == (-8L)) & 0xCDL) < 252UL)) >= (*l_1234))) > g_156.f3)) <= g_41) > g_881[2][1]) , p_37.f3) || 249UL) || g_21);
                    (*l_1234) = p_37.f0;
                    (*l_1234) &= l_1249;
                    l_1268[1][0]++;
                }
                if (g_185)
                { 
                    uint16_t l_1271 = 3UL;
                    uint16_t *l_1274[7][1][4] = {{{&g_344[3],&g_569,&g_569,&g_569}},{{&g_344[1],&g_344[1],&l_1271,&g_569}},{{&g_344[1],&g_344[1],&g_569,&g_344[1]}},{{&g_344[3],&g_569,&g_344[3],&g_569}},{{&g_569,&g_569,&l_1271,&g_344[1]}},{{&g_569,&g_344[1],&g_344[1],&g_569}},{{&g_344[3],&g_344[1],&g_344[1],&g_569}}};
                    int32_t l_1275 = (-1L);
                    uint8_t ****l_1281 = &l_1280;
                    int i, j, k;
                    ++l_1271;
                    g_156.f4 = (((l_1275 = 65527UL) , p_37.f0) , ((*l_1234) = (safe_sub_func_uint32_t_u_u(((*l_1234) , p_37.f2), ((safe_rshift_func_uint16_t_u_s(((((*l_1234) , ((*l_1281) = l_1280)) != l_1282[3]) , g_156.f4), 3)) == (*l_1234))))));
                    if (p_36)
                        continue;
                    if (l_1271)
                        break;
                }
                else
                { 
                    (*l_1280) = &g_384;
                }
                for (g_408 = (-12); (g_408 == (-30)); g_408 = safe_sub_func_int32_t_s_s(g_408, 7))
                { 
                    l_1247.f4 |= (*l_1234);
                }
            }
            if (p_37.f2)
                continue;
            (*l_1234) = (-4L);
        }
        else
        { 
            const uint32_t l_1288[2] = {18446744073709551615UL,18446744073709551615UL};
            int32_t l_1289 = 0L;
            int32_t *l_1290 = &l_1265;
            int i;
            (*l_1290) = (safe_rshift_func_uint8_t_u_s((+p_36), (l_1289 = (l_1261 > l_1288[0]))));
            return p_37.f2;
        }
        g_33 = ((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_1295) = l_1258), p_37.f3)) && (p_37.f2 != ((safe_add_func_int16_t_s_s(p_37.f4, (safe_div_func_uint16_t_u_u((((l_1300 != ((safe_add_func_uint64_t_u_u(((l_1305 = l_1303) != (l_1306 , (void*)0)), 0x845B64A0CBC26E33LL)) > 0x79860A180479FE72LL)) != 0x83FFL) & 0x8353L), 65534UL)))) > l_1255))), p_37.f0)) && l_1258);
        for (l_1260 = 0; (l_1260 <= 1); l_1260 += 1)
        { 
            int32_t **l_1319 = (void*)0;
            int32_t ***l_1318 = &l_1319;
            int32_t l_1322 = 0x7F59EE7EL;
            struct S0 l_1328 = {0x1CD19F43AEE120ADLL,252UL};
            struct S1 l_1337 = {2950,85,0x52L,273,-7520};
            struct S0 *l_1342 = &g_84[0][0];
            int i;
            if ((p_37.f4 &= ((safe_div_func_uint8_t_u_u((l_1310 != &l_1307[3]), (~((0L || 4294967292UL) >= (safe_sub_func_int64_t_s_s((-1L), ((***g_1237) = (safe_sub_func_uint8_t_u_u(((***l_1280) ^= (safe_rshift_func_uint8_t_u_u((((*l_1318) = &l_1307[3]) != &g_86), 3))), l_1246[l_1260]))))))))) | p_37.f0)))
            { 
                for (g_41 = 0; (g_41 <= 1); g_41 += 1)
                { 
                    int i, j, k;
                    if (g_325[(g_41 + 2)][l_1260][(l_1260 + 1)])
                        break;
                    l_1322 ^= (g_21 ^ (0L && (safe_add_func_int16_t_s_s((-1L), 0xBD8FL))));
                    return g_258.f0;
                }
                (*l_1319) = (**l_1318);
            }
            else
            { 
                struct S0 l_1323[6][6][7] = {{{{0x5921148243EDEFBFLL,0UL},{4L,246UL},{0L,1UL},{8L,1UL},{8L,1UL},{0L,1UL},{4L,246UL}},{{0xDBC789731043ADBDLL,1UL},{0x6B09D491F65ECCB3LL,0x15L},{0x11F08369708DA615LL,0xD3L},{7L,0xA6L},{0x5CA5C8D25DE0B588LL,249UL},{0xDCA806ED234BE575LL,0x3CL},{-1L,254UL}},{{1L,0xB5L},{0x710FAB1AAB3E2317LL,0x3CL},{0x62739029E1FF5970LL,0x28L},{-10L,0x4CL},{0x62739029E1FF5970LL,0x28L},{1L,0xB5L},{0x62739029E1FF5970LL,0x28L}},{{0xDBC789731043ADBDLL,1UL},{0x7C9F8AA025F72499LL,255UL},{0x7C9F8AA025F72499LL,255UL},{0xDBC789731043ADBDLL,1UL},{0x11F08369708DA615LL,0xD3L},{0xA1A1E833BD54000CLL,0UL},{0x6B09D491F65ECCB3LL,0x15L}},{{-10L,0x4CL},{0x62739029E1FF5970LL,0x28L},{0x710FAB1AAB3E2317LL,0x3CL},{1L,0xB5L},{0L,1UL},{0xB6D5200C040D5C9FLL,254UL},{0L,0x9FL}},{{0x6B09D491F65ECCB3LL,0x15L},{0x9BB91C6966CB5FC7LL,255UL},{0xA1A1E833BD54000CLL,0UL},{7L,0xA6L},{0xA1A1E833BD54000CLL,0UL},{0x9BB91C6966CB5FC7LL,255UL},{0x6B09D491F65ECCB3LL,0x15L}}},{{{0x0AA5A4414717EE3BLL,0x8DL},{0x90C0670F005951F6LL,0x49L},{0x31AA5831D62EF91ELL,0x4AL},{0L,0x9FL},{-10L,0x4CL},{-1L,7UL},{0x62739029E1FF5970LL,0x28L}},{{0x32A7FC130476F14ELL,0UL},{0xF0B8B4E57331E12ELL,249UL},{0xECEBB020433D28A9LL,0x8BL},{0xA1A1E833BD54000CLL,0UL},{0xDCA806ED234BE575LL,0x3CL},{0xDCA806ED234BE575LL,0x3CL},{0xA1A1E833BD54000CLL,0UL}},{{0x31AA5831D62EF91ELL,0x4AL},{4L,246UL},{0x31AA5831D62EF91ELL,0x4AL},{0x93AD7D21B858D30ALL,0UL},{0xB6D5200C040D5C9FLL,254UL},{0L,0x4DL},{-1L,7UL}},{{0x9BB91C6966CB5FC7LL,255UL},{-1L,254UL},{0xA1A1E833BD54000CLL,0UL},{0xF0B8B4E57331E12ELL,249UL},{0x7C9F8AA025F72499LL,255UL},{0L,0x2FL},{0x32A7FC130476F14ELL,0UL}},{{0L,0x4DL},{0x0AA5A4414717EE3BLL,0x8DL},{0x710FAB1AAB3E2317LL,0x3CL},{0x710FAB1AAB3E2317LL,0x3CL},{0x0AA5A4414717EE3BLL,0x8DL},{0L,0x4DL},{0xD38DD4D844DF8175LL,255UL}},{{0L,1UL},{0xA1A1E833BD54000CLL,0UL},{0x7C9F8AA025F72499LL,255UL},{0x1E1959D3FC6752BALL,255UL},{0xECEBB020433D28A9LL,0x8BL},{0xDCA806ED234BE575LL,0x3CL},{0x11F08369708DA615LL,0xD3L}}},{{{0x5921148243EDEFBFLL,0UL},{0L,0x4DL},{8L,1UL},{-1L,7UL},{0L,0x9FL},{-1L,7UL},{8L,1UL}},{{0xA1A1E833BD54000CLL,0UL},{0xA1A1E833BD54000CLL,0UL},{0L,0x2FL},{0x5CA5C8D25DE0B588LL,249UL},{0x1E1959D3FC6752BALL,255UL},{0x9BB91C6966CB5FC7LL,255UL},{1L,248UL}},{{0xD38DD4D844DF8175LL,255UL},{0x0AA5A4414717EE3BLL,0x8DL},{0x93AD7D21B858D30ALL,0UL},{-10L,0x4CL},{8L,1UL},{0xB6D5200C040D5C9FLL,254UL},{0xB6D5200C040D5C9FLL,254UL}},{{0x1E1959D3FC6752BALL,255UL},{-1L,254UL},{0x6B09D491F65ECCB3LL,0x15L},{-1L,254UL},{0x1E1959D3FC6752BALL,255UL},{0xA1A1E833BD54000CLL,0UL},{0xDBC789731043ADBDLL,1UL}},{{0L,1UL},{4L,246UL},{0x5921148243EDEFBFLL,0UL},{0x90C0670F005951F6LL,0x49L},{0L,0x9FL},{1L,0xB5L},{0L,0x4DL}},{{7L,0xA6L},{0xF0B8B4E57331E12ELL,249UL},{0x5CA5C8D25DE0B588LL,249UL},{0xECEBB020433D28A9LL,0x8BL},{0xECEBB020433D28A9LL,0x8BL},{0x5CA5C8D25DE0B588LL,249UL},{0xF0B8B4E57331E12ELL,249UL}}},{{{0L,1UL},{0x90C0670F005951F6LL,0x49L},{4L,246UL},{0xD38DD4D844DF8175LL,255UL},{0x0AA5A4414717EE3BLL,0x8DL},{0x93AD7D21B858D30ALL,0UL},{-10L,0x4CL}},{{0x1E1959D3FC6752BALL,255UL},{0x9BB91C6966CB5FC7LL,255UL},{1L,248UL},{0x6B09D491F65ECCB3LL,0x15L},{0x7C9F8AA025F72499LL,255UL},{0xECEBB020433D28A9LL,0x8BL},{0x7C9F8AA025F72499LL,255UL}},{{0xD38DD4D844DF8175LL,255UL},{0x62739029E1FF5970LL,0x28L},{0x62739029E1FF5970LL,0x28L},{0xD38DD4D844DF8175LL,255UL},{0xB6D5200C040D5C9FLL,254UL},{-10L,0x4CL},{0x5921148243EDEFBFLL,0UL}},{{0xA1A1E833BD54000CLL,0UL},{0x7C9F8AA025F72499LL,255UL},{0x1E1959D3FC6752BALL,255UL},{0xECEBB020433D28A9LL,0x8BL},{0xDCA806ED234BE575LL,0x3CL},{0x11F08369708DA615LL,0xD3L},{-1L,254UL}},{{0x5921148243EDEFBFLL,0UL},{0x31AA5831D62EF91ELL,0x4AL},{-10L,0x4CL},{0x90C0670F005951F6LL,0x49L},{-10L,0x4CL},{0x31AA5831D62EF91ELL,0x4AL},{0x5921148243EDEFBFLL,0UL}},{{0L,1UL},{7L,0xA6L},{0x9BB91C6966CB5FC7LL,255UL},{-1L,254UL},{0xA1A1E833BD54000CLL,0UL},{0xF0B8B4E57331E12ELL,249UL},{0x7C9F8AA025F72499LL,255UL}}},{{{0L,0x4DL},{-1L,7UL},{1L,0xB5L},{-10L,0x4CL},{0L,1UL},{0L,1UL},{-10L,0x4CL}},{{0x9BB91C6966CB5FC7LL,255UL},{0L,0x2FL},{0x9BB91C6966CB5FC7LL,255UL},{0x5CA5C8D25DE0B588LL,249UL},{0x11F08369708DA615LL,0xD3L},{0x32A7FC130476F14ELL,0UL},{0xF0B8B4E57331E12ELL,249UL}},{{0x31AA5831D62EF91ELL,0x4AL},{0L,0x9FL},{-10L,0x4CL},{-1L,7UL},{0x62739029E1FF5970LL,0x28L},{4L,246UL},{0L,0x4DL}},{{0x32A7FC130476F14ELL,0UL},{0L,1UL},{0x1E1959D3FC6752BALL,255UL},{0x1E1959D3FC6752BALL,255UL},{0L,1UL},{0x32A7FC130476F14ELL,0UL},{0xDBC789731043ADBDLL,1UL}},{{0x0AA5A4414717EE3BLL,0x8DL},{-10L,0x4CL},{0x62739029E1FF5970LL,0x28L},{0x710FAB1AAB3E2317LL,0x3CL},{1L,0xB5L},{0L,1UL},{0xB6D5200C040D5C9FLL,254UL}},{{0x6B09D491F65ECCB3LL,0x15L},{0x32A7FC130476F14ELL,0UL},{1L,248UL},{0xF0B8B4E57331E12ELL,249UL},{-1L,254UL},{0xF0B8B4E57331E12ELL,249UL},{0xECEBB020433D28A9LL,0x8BL}}},{{{0x5921148243EDEFBFLL,0UL},{0x5921148243EDEFBFLL,0UL},{-1L,7UL},{0x0AA5A4414717EE3BLL,0x8DL},{0x31AA5831D62EF91ELL,0x4AL},{0xB6D5200C040D5C9FLL,254UL},{1L,0xB5L}},{{0xDCA806ED234BE575LL,0x3CL},{0x7C9F8AA025F72499LL,255UL},{0L,1UL},{0x6B09D491F65ECCB3LL,0x15L},{0xECEBB020433D28A9LL,0x8BL},{0L,0x2FL},{0L,0x2FL}},{{0x31AA5831D62EF91ELL,0x4AL},{-10L,0x4CL},{0x90C0670F005951F6LL,0x49L},{-10L,0x4CL},{0x31AA5831D62EF91ELL,0x4AL},{0x5921148243EDEFBFLL,0UL},{0L,1UL}},{{0x5CA5C8D25DE0B588LL,249UL},{0xF0B8B4E57331E12ELL,249UL},{7L,0xA6L},{0xDBC789731043ADBDLL,1UL},{0xA1A1E833BD54000CLL,0UL},{0x1E1959D3FC6752BALL,255UL},{-1L,254UL}},{{0xD38DD4D844DF8175LL,255UL},{0L,0x4DL},{0x0AA5A4414717EE3BLL,0x8DL},{0x710FAB1AAB3E2317LL,0x3CL},{0x710FAB1AAB3E2317LL,0x3CL},{0x0AA5A4414717EE3BLL,0x8DL},{0L,0x4DL}},{{0x5CA5C8D25DE0B588LL,249UL},{0xDBC789731043ADBDLL,1UL},{0xF0B8B4E57331E12ELL,249UL},{0xDCA806ED234BE575LL,0x3CL},{0x7C9F8AA025F72499LL,255UL},{0L,1UL},{0x6B09D491F65ECCB3LL,0x15L}}}};
                uint64_t *l_1326 = (void*)0;
                uint64_t *l_1327 = &g_827;
                struct S0 *l_1329 = &g_84[0][6];
                int i, j, k;
                l_1263 = ((l_1323[4][0][4] , ((****g_1236) = ((void*)0 != &g_1218))) & ((*l_1327) ^= (safe_add_func_uint8_t_u_u((*g_384), p_37.f3))));
                (*l_1329) = l_1328;
            }
            if (p_37.f2)
                break;
            for (g_569 = 0; (g_569 <= 2); g_569 += 1)
            { 
                uint32_t l_1330 = 6UL;
                struct S0 *l_1340 = &g_84[0][0];
                struct S0 **l_1341[2];
                int32_t l_1353 = 0L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1341[i] = (void*)0;
                l_1330++;
                if ((g_325[l_1260][l_1260][g_569] ^ (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_36, 7)), (((((l_1337 , ((safe_rshift_func_int8_t_s_s((&g_84[0][0] != (l_1342 = l_1340)), g_258.f0)) | (safe_div_func_uint8_t_u_u((l_1345 , (**g_383)), (-1L))))) >= g_53[0]) >= p_37.f3) >= p_36) | (***g_1237))))))
                { 
                    struct S1 **l_1346 = &g_30[2][0];
                    (*l_1342) = g_84[3][0];
                    (*l_1342) = g_84[1][1];
                    (*l_1346) = (void*)0;
                    l_1350 = l_1347;
                    (**l_1318) = &l_1258;
                }
                else
                { 
                    int32_t *l_1351 = &l_1257;
                    (**l_1318) = l_1351;
                    return p_37.f4;
                }
                g_156.f4 |= 0x277FE29CL;
                --g_1355;
            }
        }
        return p_37.f4;
    }
    l_1263 |= (p_37.f4 = ((**g_383) > (((*l_1358)--) || (safe_mul_func_uint8_t_u_u(((0xEFDC5C54L > (((*l_1348) = (**l_1347)) != &g_391[2])) > l_1354[0][3]), ((safe_sub_func_uint8_t_u_u((++p_36), l_1367[0][0][0])) == ((safe_lshift_func_uint16_t_u_s((((l_1370[0][0][0] = (void*)0) != l_1371) ^ p_37.f3), 10)) > l_1372)))))));
lbl_1929:
    for (g_400 = 1; (g_400 <= 50); ++g_400)
    { 
        int32_t *l_1375 = &l_1354[0][4];
        int32_t *l_1376 = &g_53[1];
        int32_t *l_1377 = &g_53[1];
        int32_t *l_1378 = &g_33;
        int32_t *l_1379 = (void*)0;
        int32_t *l_1380 = &l_1352;
        int32_t *l_1381[5];
        uint8_t l_1399[2];
        uint16_t *l_1412 = &g_344[0];
        struct S0 l_1433 = {0x44A25D75B26C9602LL,0x67L};
        struct S1 l_1457[4][7][1] = {{{{1606,49,250UL,99,-9635}},{{3584,41,0x89L,352,-10746}},{{4647,50,0xF2L,82,-1145}},{{3045,34,0UL,292,-5622}},{{4647,50,0xF2L,82,-1145}},{{3584,41,0x89L,352,-10746}},{{1606,49,250UL,99,-9635}}},{{{1606,49,250UL,99,-9635}},{{3584,41,0x89L,352,-10746}},{{4647,50,0xF2L,82,-1145}},{{3045,34,0UL,292,-5622}},{{4647,50,0xF2L,82,-1145}},{{3584,41,0x89L,352,-10746}},{{1606,49,250UL,99,-9635}}},{{{1606,49,250UL,99,-9635}},{{3584,41,0x89L,352,-10746}},{{4647,50,0xF2L,82,-1145}},{{3045,34,0UL,292,-5622}},{{4647,50,0xF2L,82,-1145}},{{3584,41,0x89L,352,-10746}},{{1606,49,250UL,99,-9635}}},{{{1606,49,250UL,99,-9635}},{{3584,41,0x89L,352,-10746}},{{4647,50,0xF2L,82,-1145}},{{3045,34,0UL,292,-5622}},{{4647,50,0xF2L,82,-1145}},{{3584,41,0x89L,352,-10746}},{{1606,49,250UL,99,-9635}}}};
        int64_t ***l_1475 = &l_1370[5][2][0];
        uint16_t l_1507 = 1UL;
        int8_t l_1563[7] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int32_t l_1605 = 0x5387C117L;
        const union U2 l_1612 = {0xBA625846L};
        uint32_t **l_1650 = &l_1358;
        uint32_t ***l_1649[5][6] = {{&l_1650,&l_1650,(void*)0,&l_1650,(void*)0,&l_1650},{&l_1650,&l_1650,(void*)0,&l_1650,&l_1650,&l_1650},{&l_1650,&l_1650,&l_1650,&l_1650,&l_1650,&l_1650},{&l_1650,&l_1650,&l_1650,&l_1650,&l_1650,(void*)0},{(void*)0,&l_1650,&l_1650,&l_1650,(void*)0,&l_1650}};
        uint32_t ****l_1648 = &l_1649[0][4];
        int16_t *l_1661 = &g_325[1][0][3];
        uint8_t l_1675[5][7] = {{0xE4L,255UL,255UL,0xE4L,250UL,0xE4L,255UL},{3UL,3UL,255UL,0x4EL,255UL,3UL,3UL},{0xFFL,255UL,0x69L,255UL,0xFFL,0xFFL,255UL},{0UL,246UL,0UL,255UL,255UL,0UL,246UL},{255UL,250UL,0x69L,0x69L,250UL,255UL,250UL}};
        uint16_t l_1723 = 0UL;
        uint32_t l_1727[4];
        int8_t l_1783 = 0L;
        int32_t l_1784[3][7][7] = {{{0L,(-1L),(-1L),0x99562F2FL,(-1L),0xE02C7972L,(-1L)},{0xA0265614L,0x355C62E5L,(-1L),0xD6E807B9L,(-2L),0x257B1321L,0x8E409D54L},{0xA0265614L,0xF351A3AAL,0x333FE77FL,(-1L),0x49435E6AL,0xD50BF413L,(-1L)},{0L,0L,0x6AA5B852L,9L,(-1L),1L,3L},{(-1L),3L,0xDCEBA0C4L,0xDCEBA0C4L,3L,(-1L),7L},{0x5EC7FD4BL,9L,(-2L),0L,0x276E261AL,0L,(-1L)},{(-1L),(-5L),1L,0x8D75EE4AL,9L,(-2L),0x0D0E0800L}},{{9L,0xE02C7972L,0x276E261AL,1L,9L,0x0D0E0800L,0x99562F2FL},{0x14EC30F9L,(-1L),0x8A8F34A6L,0L,0x5EC7FD4BL,0x7367342DL,(-1L)},{0x7A33B657L,0x355C62E5L,0x53757942L,0xFAAAD38DL,(-1L),(-9L),(-1L)},{0xDCEBA0C4L,0L,0x99562F2FL,0x7367342DL,(-5L),9L,0x7A33B657L},{0x0D0E0800L,(-2L),0x99562F2FL,0x53757942L,0x631FB786L,0xF351A3AAL,9L},{0L,0x797F14B1L,0x53757942L,(-2L),1L,(-1L),0L},{1L,(-5L),0x8A8F34A6L,0xE02C7972L,0xE02C7972L,0x8A8F34A6L,(-5L)}},{{(-9L),0x6830B0EEL,0x276E261AL,(-1L),0x49435E6AL,1L,0x257B1321L},{0x8A8F34A6L,0L,0x631FB786L,0x8D75EE4AL,1L,0x1933CC0EL,(-9L)},{0x6EC5D1F5L,8L,0xB93AF28FL,(-1L),0x797F14B1L,(-2L),(-9L)},{0L,(-9L),3L,0xE02C7972L,(-9L),0L,(-2L)},{0x1933CC0EL,0xA0265614L,0x333FE77FL,(-2L),0x5EC7FD4BL,0x8D75EE4AL,(-5L)},{0x99562F2FL,0xD50BF413L,0x9820F590L,0x53757942L,0x3D8FE027L,0x6AA5B852L,0x8E409D54L},{0xD6E807B9L,0xE02C7972L,0x797F14B1L,0x7367342DL,0x3D8FE027L,0x1933CC0EL,0x99562F2FL}}};
        struct S1 *****l_1862 = &l_1496;
        struct S1 *****l_1863 = &l_1496;
        int32_t l_1870 = 0x1D9339C0L;
        int8_t l_1871[3];
        uint64_t *****l_1893[6] = {&g_1236,&g_1236,&g_1236,&g_1236,&g_1236,&g_1236};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1381[i] = &g_53[0];
        for (i = 0; i < 2; i++)
            l_1399[i] = 0xA8L;
        for (i = 0; i < 4; i++)
            l_1727[i] = 0UL;
        for (i = 0; i < 3; i++)
            l_1871[i] = 0x00L;
        --l_1383;
    }
    g_637.f4 |= p_37.f1;
    if ((((*l_1490) != p_36) , ((((0x739B16E475A8AA11LL | (safe_div_func_uint64_t_u_u(((***g_1237) ^= ((safe_mod_func_uint8_t_u_u((*g_384), p_37.f3)) & g_31.f4)), (p_37.f3 | (*g_384))))) , (void*)0) != l_1392) , (*l_1490))))
    { 
        uint32_t l_1915[5];
        int32_t *l_1927 = &l_1778;
        uint64_t l_1940 = 4UL;
        int32_t ***l_1945 = &l_1310;
        int32_t ***l_1946 = &l_1310;
        int32_t ***l_1947 = &g_1942;
        struct S1 l_1949[2] = {{3418,62,252UL,8,-10997},{3418,62,252UL,8,-10997}};
        int32_t l_1953 = 0xEA977F2DL;
        int64_t l_1954 = 0xECD9FBD7D28E2422LL;
        int64_t *** const **l_1980 = &g_1977;
        uint64_t **l_1991[1][5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1915[i] = 0x3C1EEA08L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1991[i][j] = &g_1239[1];
        }
        for (l_1700.f0 = 0; (l_1700.f0 < 25); l_1700.f0 = safe_add_func_int8_t_s_s(l_1700.f0, 8))
        { 
            return p_37.f3;
        }
        if (p_37.f4)
        { 
            p_35 = &p_37;
        }
        else
        { 
            (*l_1490) = g_156.f2;
            (*g_1703) = (*g_1703);
        }
        (*l_1490) = (g_729 , (p_37.f4 && ((*g_1219) || (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((0xC61E6FA3584A650BLL > (safe_mod_func_uint16_t_u_u((p_37.f0 != (~((1UL >= 0x224EE2B98B7ED651LL) < l_1915[3]))), p_37.f3))), 0x6057L)) < l_1915[3]), 3UL)))));
        for (l_1255 = 1; (l_1255 >= 0); l_1255 -= 1)
        { 
            int32_t *l_1916 = (void*)0;
            int32_t l_1926 = 0x983849E7L;
            int32_t l_1952[2];
            uint32_t **l_1964 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1952[i] = (-8L);
            for (l_1778 = 3; (l_1778 >= 0); l_1778 -= 1)
            { 
                int32_t **l_1917 = &g_86;
                for (l_1372 = 1; (l_1372 >= 0); l_1372 -= 1)
                { 
                    if (p_37.f3)
                        break;
                }
                (*l_1917) = l_1916;
                for (g_114 = 0; (g_114 <= 0); g_114 += 1)
                { 
                    int i, j;
                    return l_1354[g_114][(l_1778 + 1)];
                }
            }
            (*l_1490) = ((p_37.f1 || ((l_1915[2] , 0x96L) >= l_1915[3])) == ((safe_mod_func_int16_t_s_s(((!(g_344[0] = 1UL)) , ((safe_add_func_uint8_t_u_u((((*l_1358) = (~0xCE8EL)) < (safe_div_func_uint16_t_u_u((4L < p_36), 0xE19DL))), l_1926)) , l_1915[3])), l_1915[0])) && 0x0E86L));
            g_1928[1] = (g_86 = (l_1700 , l_1927));
            if (g_156.f2)
                goto lbl_1929;
            for (l_1382 = 1; (l_1382 >= 0); l_1382 -= 1)
            { 
                int8_t *l_1936 = &g_185;
                int32_t l_1937 = 1L;
                const int32_t l_1938 = 0x19543C93L;
                int32_t ***l_1948 = (void*)0;
                uint32_t l_1955 = 18446744073709551615UL;
                struct S0 * const l_1982[6] = {&l_1345,&l_1345,&l_1345,&l_1345,&l_1345,&l_1345};
                int i;
            }
        }
    }
    else
    { 
        const int8_t l_2011 = (-10L);
        int16_t *l_2012 = &g_1971;
        int32_t l_2013 = 0xAB294FA3L;
        int32_t * const *l_2017 = &l_1490;
        int32_t * const **l_2016 = &l_2017;
        uint16_t l_2031 = 0x3D0EL;
        int8_t *l_2032 = &g_185;
        int32_t *l_2033 = &g_53[1];
        int16_t ****l_2036 = &l_1349;
        uint32_t l_2041 = 0xF27795B2L;
        int16_t ***l_2042 = &g_391[1];
        int32_t l_2057 = 0x96FB03A3L;
        struct S1 *****l_2066[3][1];
        uint64_t * const ***l_2070 = (void*)0;
        uint64_t * const ****l_2069[4][6] = {{(void*)0,&l_2070,(void*)0,(void*)0,&l_2070,(void*)0},{(void*)0,&l_2070,(void*)0,(void*)0,&l_2070,(void*)0},{(void*)0,&l_2070,(void*)0,(void*)0,&l_2070,(void*)0},{(void*)0,&l_2070,(void*)0,(void*)0,&l_2070,(void*)0}};
        int32_t l_2087 = 0x4CAAC7F8L;
        uint16_t l_2118[1][1][5];
        int64_t l_2123 = 9L;
        int64_t **l_2146 = &g_1219;
        int32_t l_2150[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint16_t l_2158 = 65526UL;
        const union U2 l_2161[2] = {{0xEA93CC3EL},{0xEA93CC3EL}};
        uint8_t **l_2171 = &g_384;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_2066[i][j] = &l_1496;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_2118[i][j][k] = 0UL;
            }
        }
        p_37.f4 ^= ((p_37.f1 || (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((+18446744073709551613UL) == (l_2013 = ((*l_2012) = (0xA90A8392L >= l_2011)))) & (((safe_div_func_int32_t_s_s((*l_1490), g_729)) , &g_1942) != l_2016)), 0xFFL)), p_37.f2)), p_37.f2))) & (**l_2017));
        (*l_2033) |= (((*l_2032) = (safe_lshift_func_int8_t_s_s(p_37.f0, (safe_unary_minus_func_uint8_t_u((((safe_mul_func_int8_t_s_s(0x32L, (safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((****g_1236) &= (p_37.f0 > 1UL)), ((((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((g_344[1] && (4294967289UL ^ ((*l_1358) |= 0x1EE55F61L))), (-1L))), 3)) <= 6UL) || l_2031) & (***l_2016)))), p_37.f1)))) == p_36) < 1UL)))))) , 0x088C18BDL);
        if (((safe_lshift_func_uint8_t_u_s(((*l_1347) != l_2036), (1UL >= (safe_mul_func_int8_t_s_s(((*l_1490) = ((*g_1976) != (p_37.f3 , (void*)0))), ((safe_div_func_uint32_t_u_u((&l_1700 == &g_8[2]), l_2041)) && p_37.f2)))))) && (*l_1490)))
        { 
            int16_t ****l_2043[7][3][6] = {{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}},{{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042},{&l_2042,&l_2042,&l_2042,&l_2042,&l_2042,&l_2042}}};
            int32_t l_2048 = 6L;
            int32_t l_2056[3];
            struct S1 l_2079 = {5499,22,0xD2L,25,178};
            int32_t *l_2083 = &l_2056[2];
            int32_t *l_2084 = &l_2013;
            int32_t *l_2085 = (void*)0;
            int32_t *l_2086[3][1][6] = {{{(void*)0,&g_33,(void*)0,&l_1700.f2,&l_1700.f2,(void*)0}},{{(void*)0,(void*)0,&l_1700.f2,&g_53[1],&l_2013,&g_53[1]}},{{&g_33,(void*)0,&g_33,(void*)0,&l_1700.f2,&l_1700.f2}}};
            uint16_t l_2115[6][7][5] = {{{0xD2D9L,65526UL,0x2C52L,0x22A1L,0x7ADFL},{8UL,0UL,65527UL,65534UL,0xDE85L},{0UL,0xE744L,0xD2C8L,0xFAFEL,3UL},{0xAF1DL,0xA752L,0x8B48L,0UL,65534UL},{0xD2C8L,65532UL,1UL,0x68D7L,0x2C52L},{0xFF52L,1UL,65535UL,0x63E3L,0UL},{5UL,1UL,0x4BB1L,1UL,5UL}},{{0x1DD3L,65527UL,65535UL,9UL,0xADB2L},{0UL,0xDCAEL,0xFBB4L,0x5D0DL,0x8CE3L},{0x726EL,0x0BF9L,65534UL,65527UL,0xADB2L},{1UL,0x5D0DL,1UL,0x1763L,5UL},{0xADB2L,0x726EL,0UL,65527UL,0UL},{0x4975L,0xE138L,0x110CL,0xDF98L,0x2C52L},{0xBB0CL,0x15B5L,0x1DD3L,0UL,65534UL}},{{0xDF98L,3UL,0UL,0UL,3UL},{0xE672L,65535UL,0xA752L,0x59AAL,0xDE85L},{65526UL,0xB344L,3UL,5UL,0x7ADFL},{5UL,0x1769L,0UL,5UL,0UL},{65526UL,0xDF98L,0x7ADFL,0x8CE3L,65532UL},{0x1769L,9UL,0x7D9EL,5UL,0xDE85L},{0x4BB1L,65533UL,0xD2D9L,0x22A1L,0x4975L}},{{0x8B48L,0x79FCL,0x1DD3L,0x7D9EL,65535UL},{0x8CE3L,0x2C52L,65533UL,0xB344L,65533UL},{0x693AL,0x693AL,0x01E9L,0UL,0xA752L},{0x110CL,0xD2D9L,0xE138L,65535UL,0xC40EL},{65535UL,0x0BF9L,0UL,0x59AAL,0UL},{0xDF98L,0xD2D9L,0xD2C8L,0x110CL,65535UL},{65527UL,0x693AL,65535UL,65534UL,9UL}},{{1UL,0x2C52L,65532UL,3UL,0x8CE3L},{5UL,0x79FCL,0x63E3L,65534UL,0UL},{0xE1A3L,65533UL,0x1763L,0xE138L,0xE138L},{0x0BF9L,9UL,0x0BF9L,0xBB0CL,5UL},{3UL,0xDF98L,5UL,0xFBB4L,0x1763L},{0UL,0xA752L,0UL,0xFF52L,0x1769L},{0xA394L,65535UL,5UL,0x1763L,1UL}},{{0UL,65534UL,0x0BF9L,0UL,0xADB2L},{0xD2D9L,0UL,0x1763L,65529UL,0xDF98L},{5UL,1UL,0x63E3L,0x1769L,0xEFC0L},{65535UL,0x1763L,65532UL,0xA1E0L,0xD2D9L},{0xDE85L,65535UL,65535UL,0xDE85L,1UL},{0x1763L,0xD361L,0xD2C8L,0UL,3UL},{0x15B5L,0xDF28L,0UL,0x3712L,65527UL}}};
            int64_t l_2147[6][7] = {{0x895D34B728601094LL,0x4720237AEE56C84DLL,(-1L),0x4720237AEE56C84DLL,0x895D34B728601094LL,0x4720237AEE56C84DLL,(-1L)},{(-8L),0x2677E161529ABC0ALL,(-1L),(-1L),0x2677E161529ABC0ALL,(-8L),(-4L)},{1L,0L,1L,0x4720237AEE56C84DLL,1L,0L,1L},{(-8L),(-1L),(-4L),0x2677E161529ABC0ALL,0x2677E161529ABC0ALL,(-4L),(-1L)},{0x895D34B728601094LL,0L,(-1L),0L,0x895D34B728601094LL,0L,(-1L)},{0x2677E161529ABC0ALL,0x2677E161529ABC0ALL,(-4L),(-1L),(-8L),(-8L),(-1L)}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2056[i] = 1L;
            if (((((**l_1347) = (*l_2036)) == (g_2044 = l_2042)) == (safe_sub_func_uint64_t_u_u(7UL, l_2047))))
            { 
                int32_t l_2049 = (-2L);
                int32_t *l_2050 = &l_1267;
                int32_t *l_2051 = &l_1352;
                int32_t *l_2052 = &l_1354[0][0];
                int32_t *l_2053 = (void*)0;
                int32_t *l_2054 = (void*)0;
                int32_t *l_2055[6][3] = {{&l_1354[0][3],&l_1267,&l_1354[0][3]},{&g_9,&l_1352,&l_1352},{&g_33,&l_1267,&g_33},{&g_9,&g_9,&l_1352},{&l_1354[0][3],&l_1267,&l_1354[0][3]},{&g_9,&l_1352,&l_1352}};
                struct S1 *****l_2064[4][2] = {{&l_1496,&l_1496},{&l_1496,&l_1496},{&l_1496,&l_1496},{&l_1496,&l_1496}};
                int i, j;
                g_2058[3]--;
                --g_2061;
                (*l_1490) = ((***g_1237) > ((((l_2056[2] &= (**g_1218)) > ((l_2066[1][0] = (l_2065 = l_2064[2][1])) == ((((***l_1280) = p_36) ^ ((0xE2L ^ (((safe_mod_func_uint16_t_u_u(((*l_2033) || (((l_1345 , l_2069[1][1]) != (void*)0) <= 0xA1C12F29L)), p_37.f2)) , p_36) ^ p_37.f2)) && p_37.f0)) , &g_1890))) & p_37.f2) , p_37.f0));
                if ((safe_unary_minus_func_uint8_t_u((p_37.f4 && (0xAD1B10D69E178AE6LL && (+((safe_div_func_uint32_t_u_u(p_37.f0, 0x769D2B39L)) >= 0xD8L)))))))
                { 
                    int32_t *l_2078 = &l_2056[2];
                    (***l_2016) = (((safe_mul_func_int8_t_s_s(((*l_2032) |= (((((g_637.f0 >= (safe_unary_minus_func_int32_t_s((0x1EDBL | (&l_2042 == (void*)0))))) & (***l_2016)) == (l_2079 , (*g_1219))) | (*l_1490)) ^ 0x159FF6EDF42AB682LL)), l_2079.f3)) != l_2080) < (*g_384));
                }
                else
                { 
                    (*l_1490) |= (p_37.f4 = p_37.f2);
                }
                return p_37.f2;
            }
            else
            { 
                uint8_t l_2081 = 250UL;
                int16_t * const * const *l_2082 = &l_1304;
                (*l_2033) ^= l_2081;
                l_2082 = (void*)0;
            }
            --l_2088;
            for (l_1700.f0 = 22; (l_1700.f0 > 14); --l_1700.f0)
            { 
                uint32_t l_2119 = 0xDF78B15BL;
                int32_t l_2120 = 0x9942C3B0L;
                struct S1 *l_2124 = &g_2125[0];
                union U2 l_2126 = {0x9D3B05E2L};
                const struct S1 ** const *l_2130 = &l_1692[1][0][2];
                const struct S1 ** const **l_2129 = &l_2130;
                l_2120 ^= ((((safe_div_func_uint64_t_u_u((**g_1238), (safe_sub_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_36, ((l_2118[0][0][2] = (safe_div_func_int64_t_s_s(p_37.f1, (safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((((**g_383) = (l_2079 , (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((p_35 = &p_37) != ((((((l_2115[3][5][1] <= (safe_lshift_func_uint16_t_u_u(g_1697[0].f0, (*l_1490)))) || p_36) | 0xFB0B44CFL) < p_36) == 4294967286UL) , &p_37)), (*l_1490))), 0UL)), p_36)), 6)))) | p_37.f2), (*l_1490))), 6))))) != 0x5D580090AE735984LL))), p_37.f0)) & (*****g_1976)) < 0x2A41L) <= l_2119), p_37.f3)))) & l_2119) ^ 0x213ED423CB8E0045LL) < 1UL);
                if (l_2119)
                { 
                    int64_t l_2121 = 1L;
                    (*l_2084) &= ((*l_2083) = l_2120);
                    if (p_37.f2)
                        break;
                    return l_2121;
                }
                else
                { 
                    int32_t **l_2122 = &l_2086[1][0][5];
                    p_35 = &p_37;
                    (*l_2122) = (**l_2016);
                    if ((*l_2084))
                        break;
                    if (l_2123)
                        continue;
                    (*l_2033) = ((((l_2124 = (void*)0) == (p_35 = (p_37.f2 , &p_37))) && (l_2126 , ((((safe_div_func_uint64_t_u_u(p_37.f1, p_37.f1)) , ((*l_1490) ^= (l_2129 != &l_2130))) >= 0xE65120B8L) , p_36))) & 65535UL);
                }
                (*l_1490) = ((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((p_37.f1 ^ ((*g_384) = (!(safe_mod_func_uint32_t_u_u((l_2119 >= ((++g_569) > (g_344[1] = ((void*)0 != &l_1348)))), p_37.f1))))) , (((safe_mod_func_int32_t_s_s(((((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_2146 != (void*)0), p_37.f1)), p_37.f2)) <= 0UL) != l_2147[2][0]) & 0xECL), (*l_1490))) | (**l_2017)) || 0x9D9D8AD3L)), (****g_1977))), 9)) ^ p_37.f2);
            }
            for (g_1637 = 1; (g_1637 > 57); g_1637 = safe_add_func_uint64_t_u_u(g_1637, 5))
            { 
                uint8_t l_2151 = 5UL;
                --l_2151;
                (*l_2033) &= ((*l_2083) = 0x401A71B0L);
            }
            for (l_1267 = 0; (l_1267 < (-29)); l_1267 = safe_sub_func_int16_t_s_s(l_1267, 6))
            { 
                int32_t l_2156[6][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
                int32_t l_2157 = 0x069947A4L;
                int i, j;
                if (p_37.f3)
                    break;
                l_2158++;
                (*l_2083) = (*l_2084);
            }
        }
        else
        { 
            struct S1 *l_2172 = &g_2173[0][0];
            const int32_t l_2174 = 0L;
            int32_t l_2176 = 0L;
            int64_t ***l_2186 = &l_1370[0][0][0];
            int32_t l_2228 = 0L;
            int32_t l_2229 = 1L;
            for (l_1419 = 0; (l_1419 <= 0); l_1419 += 1)
            { 
                uint8_t l_2175[2][2] = {{6UL,6UL},{6UL,6UL}};
                int64_t ***l_2185 = &l_2146;
                int32_t l_2199[6][4] = {{0x5BD87C1AL,0x9BA8F978L,0x5BD87C1AL,0xECF321D0L},{(-1L),0x9BA8F978L,1L,0x9BA8F978L},{(-1L),0xECF321D0L,0x5BD87C1AL,0x9BA8F978L},{0x5BD87C1AL,0x9BA8F978L,0x5BD87C1AL,0xECF321D0L},{(-1L),0x9BA8F978L,1L,0x9BA8F978L},{(-1L),0xECF321D0L,0x5BD87C1AL,0x9BA8F978L}};
                uint16_t *l_2206 = &l_2158;
                uint16_t l_2230 = 0xAA35L;
                int i, j;
                for (g_720 = 0; (g_720 <= 0); g_720 += 1)
                { 
                    uint16_t l_2162 = 0x404BL;
                    (*l_1490) = ((void*)0 == (**g_1976));
                    (**l_2017) |= ((l_2161[1] , p_36) <= (p_37.f2 < ((void*)0 != &g_1977)));
                    return l_2162;
                }
            }
            p_37.f4 = (((((*g_1703) , 0xD2L) == (&g_1817 != ((*l_2033) , l_2233))) > (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((-1L), (safe_unary_minus_func_int8_t_s(l_2176)))), 5))) <= p_37.f3);
        }
    }
    return p_37.f1;
}



static struct S1 * func_38(uint16_t  p_39)
{ 
    int64_t l_1158 = 6L;
    uint32_t l_1159 = 0xCE7EA254L;
    int32_t l_1169 = 0xAB502994L;
    int32_t l_1188 = 0x9949C02AL;
    struct S1 *l_1193 = (void*)0;
    uint32_t l_1227 = 0x020220ECL;
    for (g_408 = 0; (g_408 <= 5); g_408 += 1)
    { 
        int32_t *l_1154 = (void*)0;
        int32_t *l_1155 = &g_33;
        int32_t *l_1156 = (void*)0;
        int32_t *l_1157[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        union U2 l_1164[1][6] = {{{-1L},{-1L},{0x39321972L},{-1L},{-1L},{0x39321972L}}};
        int16_t *l_1165 = &g_325[0][1][3];
        uint32_t **l_1168 = (void*)0;
        uint32_t ***l_1167[3][4] = {{&l_1168,&l_1168,&l_1168,&l_1168},{&l_1168,&l_1168,&l_1168,&l_1168},{&l_1168,&l_1168,&l_1168,&l_1168}};
        uint32_t *** const *l_1166[3][1];
        struct S1 l_1183 = {5498,8,0x4EL,34,1356};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1166[i][j] = &l_1167[0][1];
        }
        l_1159--;
        l_1169 = ((((*g_384) , (l_1164[0][4] , (*l_1155))) ^ (l_1159 , ((void*)0 == &l_1159))) < ((((*l_1165) |= ((l_1158 == (-3L)) > l_1159)) , l_1166[1][0]) != &l_1167[1][0]));
        if ((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((!(safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*l_1155) > p_39), (*g_384))), ((((((safe_mul_func_int16_t_s_s(((l_1183 , (18446744073709551615UL & (safe_add_func_uint32_t_u_u(g_357, (safe_rshift_func_int16_t_s_u(0xBF4CL, 15)))))) <= 0x84C7L), (*l_1155))) | 0xBBB84AA014CC16EFLL) , 0x52L) || 0xE9L) < (*l_1155)) || p_39))) , 0x4249L), p_39))) || (-4L)), 0x7606L)) != 18446744073709551615UL), 2)))
        { 
            uint16_t l_1189 = 0x063EL;
            l_1189--;
        }
        else
        { 
            int32_t **l_1192 = &l_1157[3];
            (*l_1192) = &g_2;
        }
        return l_1193;
    }
    for (l_1159 = (-6); (l_1159 != 56); l_1159++)
    { 
        uint32_t l_1226 = 4294967291UL;
        for (g_135 = 0; (g_135 >= 46); ++g_135)
        { 
            int32_t *l_1206 = &g_53[1];
            int32_t *l_1211 = &l_1188;
            int16_t ***l_1212 = &g_391[1];
            int64_t *l_1213[1];
            int32_t *l_1214 = &l_1169;
            int i;
            for (i = 0; i < 1; i++)
                l_1213[i] = (void*)0;
            (*l_1214) = (safe_sub_func_uint64_t_u_u(g_881[2][2], (g_41 = (safe_sub_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(((p_39 || (((l_1169 == ((safe_add_func_int32_t_s_s(((*l_1206) = 0xECE96ECCL), ((*l_1211) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_39, 0x22L)), (p_39 ^ p_39)))))) ^ g_31.f3)) , l_1212) != &g_391[2])) , g_325[1][0][2]), 1UL)) || (**g_383)) <= p_39) & p_39), 0x6AC9L)))));
            for (g_400 = 0; (g_400 <= 3); g_400 += 1)
            { 
                int64_t **l_1217 = &l_1213[0];
                (*l_1214) = (((safe_mul_func_uint16_t_u_u(p_39, (l_1217 == g_1218))) != 7L) , ((((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(8UL, 0xBBD06D6AL)), ((safe_rshift_func_uint16_t_u_u((((l_1226 || p_39) & l_1226) | l_1227), g_156.f1)) , 0L))) ^ p_39) && p_39) || 1L));
            }
            if (p_39)
                break;
        }
    }
    return l_1193;
}



static uint8_t  func_42(int64_t * p_43, struct S1  p_44, int8_t * p_45, int32_t  p_46)
{ 
    int16_t ***l_589 = &g_391[1];
    int16_t ****l_588 = &l_589;
    int16_t ***l_591[2];
    int16_t ****l_590 = &l_591[1];
    struct S0 l_592 = {-6L,0UL};
    uint64_t l_597 = 0xB86F7745285A51D9LL;
    uint8_t *l_598 = &g_114;
    int32_t l_601 = 0x7EDFD5D6L;
    int16_t *l_602 = &g_325[3][0][2];
    int16_t *l_603 = (void*)0;
    int16_t *l_604 = &g_605;
    uint32_t *l_606[3];
    const int64_t **l_607 = (void*)0;
    int32_t l_611 = 0x4BB363B7L;
    int32_t l_617 = (-1L);
    int32_t l_618[2];
    struct S1 ***l_629 = &g_173[6][3];
    int8_t l_665 = 1L;
    int32_t l_672[7] = {0x7B33763FL,0x7B33763FL,0x7B33763FL,0x7B33763FL,0x7B33763FL,0x7B33763FL,0x7B33763FL};
    uint32_t l_673[2];
    uint32_t *l_795 = &g_720;
    uint32_t **l_794 = &l_795;
    int8_t ***l_810 = &g_142;
    struct S0 *l_890 = &g_84[1][6];
    int16_t l_976 = 0L;
    union U2 l_980 = {0x390795DCL};
    const struct S1 l_995[2] = {{2061,60,255UL,356,4048},{2061,60,255UL,356,4048}};
    const int32_t l_998 = (-8L);
    uint64_t *l_1082 = (void*)0;
    uint64_t **l_1081 = &l_1082;
    int i;
    for (i = 0; i < 2; i++)
        l_591[i] = &g_391[1];
    for (i = 0; i < 3; i++)
        l_606[i] = &g_357;
    for (i = 0; i < 2; i++)
        l_618[i] = 0x7C0F8948L;
    for (i = 0; i < 2; i++)
        l_673[i] = 0x8C617591L;
lbl_1056:
    if ((((((g_31.f1 = ((safe_unary_minus_func_uint32_t_u((((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s((((*l_604) = ((safe_mul_func_int8_t_s_s(((*p_45) = ((+(safe_lshift_func_int16_t_s_u(((*l_602) &= (l_601 &= (safe_mod_func_int16_t_s_s((+((safe_rshift_func_uint8_t_u_u(((**g_383) &= (safe_sub_func_int32_t_s_s((((*l_590) = ((*l_588) = &g_391[0])) != (void*)0), ((void*)0 == &p_46)))), 4)) > (l_592 , (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_598) ^= l_597), (safe_div_func_uint8_t_u_u(p_46, l_592.f1)))) && l_592.f0), p_46))))), 0xB427L)))), 9))) | 0xF72AL)), l_592.f1)) ^ 0xBBL)) | l_592.f1))) || 255UL), 0x5BL)) & (*p_43)) < p_44.f4))) >= p_44.f2)) <= p_44.f3) ^ l_597) , l_601) != 0x1992L))
    { 
        const int64_t ***l_608 = &l_607;
        int32_t *l_609 = &g_5[1][2][1];
        int32_t **l_610 = &l_609;
        int32_t l_612 = 0x57D42884L;
        int32_t *l_613 = &g_53[1];
        int32_t *l_614 = &g_53[1];
        int32_t *l_615 = (void*)0;
        int32_t *l_616[6] = {&g_53[0],&g_53[0],&g_53[0],&g_53[0],&g_53[0],&g_53[0]};
        int32_t l_619 = (-8L);
        uint32_t l_620[2][3][1];
        struct S0 *l_626 = &g_84[0][0];
        struct S1 ** const *l_630 = &g_173[6][5];
        uint16_t *l_635 = &g_569;
        struct S1 *l_636 = &g_637;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_620[i][j][k] = 7UL;
            }
        }
        (*l_608) = l_607;
        (*l_610) = l_609;
        l_620[0][1][0]--;
        for (g_569 = 0; (g_569 == 21); g_569++)
        { 
            int32_t l_625 = 0xEE1B4F80L;
            return l_625;
        }
        if (((((*l_626) = g_84[0][0]) , (safe_add_func_uint16_t_u_u(((l_629 = &g_173[2][3]) != l_630), (safe_add_func_uint8_t_u_u(p_44.f4, 0x87L))))) , (p_44.f4 &= ((*p_45) , ((safe_rshift_func_uint8_t_u_u(((((*l_635) ^= g_258.f0) | p_46) ^ p_44.f2), (*g_384))) < (*g_86))))))
        { 
            p_44.f4 &= ((l_636 = &p_44) == (void*)0);
        }
        else
        { 
            (*l_613) = (safe_add_func_int64_t_s_s((!p_44.f4), (*p_43)));
        }
    }
    else
    { 
        int32_t l_649 = 6L;
        int32_t l_650[5];
        int32_t *l_658 = &l_611;
        int32_t l_661 = 0xCB4BE9FCL;
        struct S1 *l_714[4];
        struct S0 l_715 = {1L,0x02L};
        int8_t ****l_724[1];
        struct S1 ***l_855 = &g_173[4][4];
        int i;
        for (i = 0; i < 5; i++)
            l_650[i] = 1L;
        for (i = 0; i < 4; i++)
            l_714[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_724[i] = (void*)0;
    }
lbl_922:
    (*l_890) = g_84[0][0];
    if ((safe_lshift_func_int16_t_s_u(((*l_602) = ((safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((((((!p_44.f0) , l_597) != (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_672[4] |= p_46), (safe_lshift_func_int16_t_s_s((l_617 & (safe_lshift_func_int16_t_s_u((~(--(**g_383))), 2))), 9)))), 5))) , p_43) == (void*)0) < (safe_unary_minus_func_int8_t_s((safe_div_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((!0UL), l_601)) , l_618[0]) & p_44.f0), 1L))))) | g_258.f3), p_44.f2)) | p_44.f0), p_44.f0)) & p_44.f3), l_592.f1)) || 0xF9A4L) | 0x902109CCL), l_592.f0)) < l_665)), 2)))
    { 
        int32_t *l_921 = &l_611;
        struct S1 *l_929[3][3][5] = {{{(void*)0,&g_637,&g_637,(void*)0,(void*)0},{&g_637,&g_637,&g_637,&g_637,&g_637},{(void*)0,(void*)0,&g_637,&g_637,(void*)0}},{{&g_156,&g_637,&g_156,&g_637,&g_156},{(void*)0,&g_637,&g_637,(void*)0,(void*)0},{&g_637,&g_637,&g_637,&g_637,&g_637}},{{(void*)0,(void*)0,&g_637,&g_637,(void*)0},{&g_156,&g_637,&g_156,&g_637,&g_156},{(void*)0,&g_637,&g_637,(void*)0,(void*)0}}};
        struct S1 l_931[5][3] = {{{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926}},{{4903,53,250UL,194,-588},{4903,53,250UL,194,-588},{4903,53,250UL,194,-588}},{{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926}},{{4903,53,250UL,194,-588},{4903,53,250UL,194,-588},{4903,53,250UL,194,-588}},{{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926},{770,29,0x6AL,325,-4926}}};
        int i, j, k;
        for (p_46 = 0; (p_46 < (-18)); p_46 = safe_sub_func_uint16_t_u_u(p_46, 4))
        { 
            return p_44.f0;
        }
        (*l_921) = 1L;
        if ((*g_86))
        { 
            if (l_597)
                goto lbl_922;
        }
        else
        { 
            uint16_t *l_923 = &g_569;
            int32_t l_926 = (-5L);
            uint16_t l_939 = 9UL;
            (*l_921) = (p_44.f4 ^= (((*l_923)++) , l_926));
            for (l_665 = 23; (l_665 <= 22); --l_665)
            { 
                struct S1 **l_930 = &l_929[1][2][1];
                int32_t l_932 = 0x46E01B63L;
                int32_t l_953[1][4][4] = {{{(-2L),(-2L),0xCE6BF00DL,(-2L)},{(-2L),0xEDA28AF7L,0xEDA28AF7L,(-2L)},{0xEDA28AF7L,(-2L),0xEDA28AF7L,0xEDA28AF7L},{(-2L),(-2L),0xCE6BF00DL,(-2L)}}};
                struct S0 l_962 = {7L,0xDCL};
                union U2 l_970 = {0xCAEA6FB3L};
                int i, j, k;
                if (((((*l_930) = l_929[1][2][1]) != (l_931[0][0] , (void*)0)) && l_932))
                { 
                    struct S0 l_940 = {0x37A436FD2DAC14BFLL,0xB5L};
                    (*l_890) = ((safe_div_func_int8_t_s_s((((g_84[0][0] , (((void*)0 != &g_86) , ((safe_mod_func_int16_t_s_s(((void*)0 != (*l_930)), 65527UL)) && (safe_div_func_int64_t_s_s(((((((*l_921) = (g_53[0] <= 0x1A0DL)) , g_637.f4) == l_672[1]) <= (*p_45)) & (*p_43)), 18446744073709551611UL))))) ^ 0UL) > (*p_45)), l_939)) , l_940);
                    if ((*g_86))
                        continue;
                    if ((*l_921))
                        break;
                }
                else
                { 
                    uint64_t l_954 = 0x9DE7EA97D3177A7FLL;
                    int32_t *l_955 = &l_601;
                    uint64_t *l_963[1];
                    uint16_t *l_973 = &g_569;
                    struct S0 **l_977 = &l_890;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_963[i] = (void*)0;
                    (*l_955) = ((*l_921) = ((p_44 , (l_597 | ((((l_926 = ((**g_383) = 1UL)) , ((g_8[1] , (safe_sub_func_uint32_t_u_u((p_44.f3 , (g_881[2][1] < ((((safe_mod_func_uint32_t_u_u(((((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_44 , l_953[0][2][2]), p_44.f4)) , 0xDCF6L), 0xBD9BL)), (*p_45))) , p_44.f4) , l_954) , l_939) || 0xB1L) <= l_939), g_827)) | (-4L)) > g_156.f0) ^ (*p_43)))), l_954))) ^ l_939)) != (-4L)) != p_44.f1))) == 18446744073709551615UL));
                    if ((*g_86))
                        break;
                    (*l_890) = (((safe_sub_func_int64_t_s_s((p_44.f3 <= (*l_921)), (((((*g_384) , ((((safe_mul_func_uint16_t_u_u((g_344[1] = 0UL), p_46)) & ((*l_795) |= (p_44.f3 & (safe_add_func_uint16_t_u_u(g_827, p_44.f1))))) && p_44.f3) != l_939)) <= p_44.f3) , (*l_955)) , g_258.f0))) && g_156.f2) , l_962);
                    (*l_955) = ((((g_827 = (p_44 , g_344[1])) <= (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((*g_86), (g_31.f4 = (~((+(l_970 , ((safe_mod_func_uint16_t_u_u((&g_344[3] == l_973), (safe_sub_func_int64_t_s_s(((*p_43) = ((p_46 < l_976) , g_400)), 0xFDFA7126CB231698LL)))) != g_720))) > p_44.f3))))), 0x00B3D5A6C556472CLL))) || (**g_383)) != 0xF08DL);
                    (*l_977) = &g_84[3][3];
                }
            }
        }
    }
    else
    { 
        int32_t *l_978 = (void*)0;
        int32_t *l_979 = &l_672[4];
        union U2 *l_981 = &g_8[3];
        struct S0 l_982 = {0x5F736C9D4D5DB842LL,0x1DL};
        int8_t l_996 = 0x9FL;
        int8_t *** const *l_1053 = &g_723;
        int32_t l_1059 = (-1L);
        int32_t l_1061 = 1L;
        int32_t l_1063 = 1L;
        int32_t l_1064 = 0xD705C341L;
        int32_t l_1066 = 0L;
        int32_t l_1067 = 1L;
        int32_t l_1068 = 0x8D4E5995L;
        int32_t l_1069 = (-10L);
        int32_t l_1070 = 0x6284BFE2L;
        int32_t l_1071 = (-1L);
        int32_t l_1072 = (-1L);
        int32_t l_1073 = 0x99164C59L;
        int32_t l_1074 = (-2L);
        uint32_t l_1107 = 6UL;
        struct S1 * const l_1150 = &g_258;
        (*l_979) &= p_44.f0;
        (*l_890) = (*l_890);
lbl_1149:
        (*l_890) = (((*l_981) = l_980) , l_982);
        if ((0xF73F7124L > (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((p_44 , (((((((***l_590) != ((*g_86) , (((5UL == ((((safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_995[1] , (((void*)0 == l_979) && 0xE0BD160CL)), l_996)), 3L)), 0xAFF46DD0D3C63F21LL)) | 0UL) > p_44.f2), 15)) , g_53[1]) >= p_44.f2) | p_44.f3)) < (*p_45)) , (void*)0))) , &l_601) == l_978) | 0x2CF1L) && l_601) != p_44.f3)), g_637.f1)), p_44.f2))))
        { 
            struct S1 **l_1001 = (void*)0;
            int32_t l_1058[5] = {3L,3L,3L,3L,3L};
            int32_t l_1060 = 1L;
            uint32_t l_1075 = 0x8FD7131FL;
            struct S0 *l_1084[4][3] = {{&g_84[0][0],&g_84[0][0],(void*)0},{&g_84[0][0],&g_84[0][0],(void*)0},{&g_84[0][0],&g_84[0][0],(void*)0},{&g_84[0][0],&g_84[0][0],(void*)0}};
            union U2 *l_1088[5] = {&g_8[2],&g_8[2],&g_8[2],&g_8[2],&g_8[2]};
            int64_t l_1113 = 1L;
            uint64_t l_1118 = 0xE7E9A10EB739A435LL;
            int i, j;
            if (((+(l_998 > ((((*p_43) |= (safe_lshift_func_int8_t_s_u((((void*)0 == l_1001) > (safe_rshift_func_uint8_t_u_s((**g_383), 2))), ((l_611 , (**l_590)) == (void*)0)))) >= l_995[1].f1) , 0x74AE975FL))) & l_592.f0))
            { 
                struct S1 *** const *l_1006 = (void*)0;
                struct S0 l_1007 = {-1L,1UL};
                int16_t ****l_1008 = &l_589;
                const int8_t *l_1018 = (void*)0;
                const int8_t **l_1019 = (void*)0;
                const int8_t **l_1020 = &l_1018;
                uint64_t *l_1035 = (void*)0;
                uint64_t *l_1036 = &g_827;
                uint64_t *l_1037 = &l_597;
                int32_t l_1062 = (-5L);
                int32_t l_1065[5][2][7] = {{{0x3D936609L,0x9B26CA03L,0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L,0x3D936609L},{0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L}},{{0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L},{(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L)}},{{0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L},{0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L}},{{(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L)},{0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L,0x3D936609L,0x9B26CA03L,0x3D936609L}},{{0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L},{(-1L),0x3D936609L,(-1L),(-1L),0x3D936609L,(-1L),(-1L)}}};
                const int32_t *l_1087 = &l_1073;
                int i, j, k;
                (*l_890) = g_84[0][0];
                for (l_982.f1 = 0; (l_982.f1 > 17); l_982.f1++)
                { 
                    int16_t *****l_1009 = &l_588;
                    int16_t * const *l_1013 = (void*)0;
                    int16_t * const ** const l_1012 = &l_1013;
                    int16_t * const ** const *l_1011 = &l_1012;
                    int16_t * const ** const **l_1010 = &l_1011;
                    uint8_t *l_1016 = &l_1007.f1;
                    int32_t l_1017[4][3] = {{3L,3L,3L},{0x5C2E9B85L,0x5C2E9B85L,0x5C2E9B85L},{3L,3L,3L},{0x5C2E9B85L,0x5C2E9B85L,0x5C2E9B85L}};
                    int i, j;
                    (*l_979) = ((((l_1006 = (void*)0) != ((((*l_1009) = (l_1007 , l_1008)) == ((*l_1010) = (void*)0)) , (((0UL < ((((((safe_sub_func_uint8_t_u_u(l_1007.f1, ((**g_383) > 246UL))) , l_1016) == (void*)0) | 6L) >= l_1017[0][0]) | p_44.f2)) , (*l_979)) , (void*)0))) <= 0x8D11F3BF989790CDLL) , p_44.f2);
                    return (**g_383);
                }
                if ((((((*l_1020) = l_1018) != &l_996) | ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((-1L) ^ ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u(p_44.f4, ((-1L) ^ (g_135 = (safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((((*l_1037) = ((*l_1036) = g_357)) , (safe_rshift_func_uint16_t_u_s((p_43 == (void*)0), 10))), (**g_383))))))))))), p_46)) & p_46)), p_44.f1)) <= (-10L)), 255UL)) & (-10L)), (-4L))) || g_637.f4)) == 0L))
                { 
                    const uint32_t l_1054 = 0x9CDF8F4DL;
                    int32_t **l_1055 = &g_86;
                    if (g_720)
                        goto lbl_922;
                    (*l_979) ^= 6L;
                    (*l_979) |= (safe_add_func_int32_t_s_s(((l_995[1].f3 , (safe_sub_func_uint32_t_u_u(4294967295UL, ((*g_86) & p_44.f4)))) > 1UL), ((((((safe_mul_func_uint16_t_u_u(((((0xADL != ((safe_lshift_func_int16_t_s_u(((*l_602) = (+((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((-7L), p_44.f1)), l_995[1].f2)) != p_44.f0))), 13)) > (-2L))) , l_1053) != (void*)0) & l_1007.f0), 65529UL)) >= l_1054) < (*g_86)) & 0x30D1A7C1A2FE224DLL) > (*g_86)) || p_44.f4)));
                    p_44.f4 = (*g_86);
                    (*l_1055) = &l_601;
                }
                else
                { 
                    int32_t *l_1057[5];
                    int32_t **l_1078 = &l_1057[0];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1057[i] = &l_980.f2;
                    (*l_979) = (*g_86);
                    if (g_41)
                        goto lbl_1056;
                    l_1075++;
                    (*l_1078) = l_1057[2];
                }
                for (p_46 = 0; (p_46 != (-27)); p_46--)
                { 
                    uint64_t ***l_1083 = &l_1081;
                    struct S0 **l_1085 = &l_890;
                    int32_t **l_1086[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1086[i] = &g_86;
                }
            }
            else
            { 
                union U2 **l_1089 = &l_1088[2];
                (*l_1089) = l_1088[2];
                return p_44.f3;
            }
            if ((&l_592 != &l_982))
            { 
                const uint32_t l_1097 = 4294967291UL;
                int32_t l_1098[7] = {0L,0L,1L,0L,0L,1L,0L};
                int i;
                l_1098[0] = (safe_add_func_int16_t_s_s((~(g_156.f2 == (((safe_div_func_int8_t_s_s(((*p_45) <= ((safe_sub_func_int64_t_s_s((*p_43), (0xE0B0L ^ l_597))) >= 0UL)), ((1UL == 65527UL) | (-8L)))) & l_1097) & g_637.f2))), p_46));
            }
            else
            { 
                uint8_t l_1101[7][2] = {{0x3DL,0x3DL},{0x3DL,5UL},{1UL,0x1CL},{5UL,0x1CL},{1UL,5UL},{0x3DL,0x3DL},{0x3DL,5UL}};
                int32_t l_1106 = 1L;
                int32_t l_1140 = 0xAA454CB5L;
                int32_t l_1141 = 0x0A8DB1E8L;
                uint16_t l_1142 = 0x11E7L;
                int i, j;
                for (g_357 = 0; (g_357 <= 45); g_357++)
                { 
                    int32_t *l_1102 = &l_618[0];
                    int32_t *l_1103 = (void*)0;
                    int32_t *l_1104 = &l_618[0];
                    int32_t *l_1105[2];
                    struct S0 l_1110 = {0x59E081B0EA300AFALL,0xD9L};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1105[i] = (void*)0;
                    (*l_979) &= ((**g_383) || l_1101[3][1]);
                    --l_1107;
                    l_1110 = g_84[3][4];
                }
lbl_1121:
                for (l_1069 = 0; (l_1069 != (-16)); l_1069--)
                { 
                    int32_t *l_1114 = &l_1073;
                    int32_t *l_1115 = &l_672[6];
                    int32_t *l_1116 = &l_1106;
                    int32_t *l_1117 = &l_1064;
                    ++l_1118;
                    (*l_1115) = l_1113;
                    if (l_1107)
                        goto lbl_1121;
                }
                for (l_982.f0 = 0; (l_982.f0 == 11); l_982.f0 = safe_add_func_uint8_t_u_u(l_982.f0, 3))
                { 
                    int32_t *l_1124 = &l_1069;
                    int32_t *l_1125 = (void*)0;
                    int32_t *l_1126 = (void*)0;
                    int32_t *l_1127 = &l_1058[4];
                    int32_t *l_1128 = &l_1058[4];
                    int32_t *l_1129 = &l_618[0];
                    int32_t *l_1130 = &l_1067;
                    int32_t *l_1131 = &l_1072;
                    int32_t *l_1132 = &l_618[1];
                    int32_t *l_1133 = &l_601;
                    int32_t *l_1134 = &l_1072;
                    int32_t *l_1135 = &l_1070;
                    int32_t *l_1136 = (void*)0;
                    int32_t *l_1137 = &l_1068;
                    int32_t *l_1138 = &l_1058[4];
                    int32_t *l_1139[3];
                    uint32_t ****l_1145 = (void*)0;
                    uint32_t ***l_1147 = &l_794;
                    uint32_t ****l_1146 = &l_1147;
                    union U2 **l_1148 = &l_1088[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1139[i] = &g_33;
                    l_1142--;
                    (*l_1146) = (void*)0;
                    (*l_1148) = l_981;
                    if (l_976)
                        goto lbl_1149;
                    if (p_44.f2)
                        continue;
                }
                for (l_611 = 0; (l_611 <= 1); l_611 += 1)
                { 
                    struct S1 **l_1151 = &g_30[0][1];
                    (*l_1151) = l_1150;
                }
                return (**g_383);
            }
        }
        else
        { 
            uint16_t l_1152 = 1UL;
            return l_1152;
        }
    }
    l_672[3] = 0xA8A34F31L;
    return l_665;
}



static struct S1  func_47(int32_t * p_48, int32_t * p_49)
{ 
    int32_t l_55 = (-1L);
    int16_t l_57 = 0xDE22L;
    int32_t l_58 = 0xE0F7F7A3L;
    int32_t l_59 = 4L;
    int32_t l_60[4] = {0xFCDB2BF7L,0xFCDB2BF7L,0xFCDB2BF7L,0xFCDB2BF7L};
    int64_t l_62[3][2][1] = {{{1L},{0x10B645EBEAA1EDCFLL}},{{1L},{0x10B645EBEAA1EDCFLL}},{{1L},{0x10B645EBEAA1EDCFLL}}};
    int8_t l_63 = 0x06L;
    int32_t l_64 = 1L;
    struct S1 l_70 = {3498,46,0x98L,222,216};
    uint32_t l_79 = 7UL;
    uint8_t *l_94 = &g_84[0][0].f1;
    struct S1 l_117 = {910,86,0x8BL,4,6731};
    struct S1 *l_155 = &g_156;
    uint64_t *l_170[3][1];
    uint64_t l_204 = 18446744073709551615UL;
    int16_t l_233 = 4L;
    int32_t l_300 = 0x7FE72FF6L;
    int8_t ***l_363 = &g_142;
    int8_t ***l_364 = (void*)0;
    int32_t *l_375 = &g_9;
    int64_t l_405 = 1L;
    const int32_t l_427[3][7] = {{(-1L),1L,0x1E787CD8L,(-1L),0x1E787CD8L,1L,(-1L)},{(-1L),1L,0x1E787CD8L,(-1L),0x1E787CD8L,1L,(-1L)},{(-1L),1L,0x1E787CD8L,(-1L),0x1E787CD8L,1L,(-1L)}};
    struct S0 l_464 = {1L,2UL};
    uint16_t l_562 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_170[i][j] = &g_135;
    }
    for (g_33 = 0; (g_33 > 19); ++g_33)
    { 
        int32_t *l_52 = &g_53[1];
        int32_t *l_54 = &g_53[1];
        int32_t *l_56[3][3][5] = {{{&g_33,&g_53[1],&g_53[1],&g_33,&g_53[1]},{&g_53[1],&g_53[1],&g_53[0],&g_53[1],&g_53[1]},{&g_53[1],&g_33,&g_53[1],&g_53[1],&g_33}},{{&g_53[1],&g_5[1][2][1],&g_5[1][2][1],&g_53[1],&g_5[1][2][1]},{&g_33,&g_33,&g_2,&g_33,&g_33},{&g_5[1][2][1],&g_53[1],&g_5[1][2][1],&g_5[1][2][1],&g_53[1]}},{{&g_33,&g_53[1],&g_53[1],&g_33,&g_53[1]},{&g_53[1],&g_53[1],&g_53[0],&g_53[1],&g_53[1]},{&g_53[1],&g_33,&g_53[1],&g_53[1],&g_33}}};
        int8_t l_61 = 0x4AL;
        uint8_t l_65 = 255UL;
        uint8_t *l_76 = &l_65;
        struct S1 l_78 = {2791,76,0UL,45,-9457};
        struct S0 l_85 = {1L,0x7FL};
        uint32_t l_98 = 4294967295UL;
        int i, j, k;
        ++l_65;
        if ((safe_sub_func_uint32_t_u_u((0x268D07ABL & (((((*l_54) = (l_70 , ((!0xA5AB319EL) <= (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((g_21 || ((*l_76) = g_2)) >= (-9L)) , g_41), g_5[1][1][1])), 1L))))) <= g_31.f3) == 0x135FA0D3L) && 0xA7F400C7L)), g_31.f3)))
        { 
            int64_t l_77[4] = {1L,1L,1L,1L};
            int i;
            (*l_52) ^= l_77[0];
            return l_78;
        }
        else
        { 
            --l_79;
        }
        for (l_63 = 21; (l_63 > (-21)); l_63 = safe_sub_func_uint16_t_u_u(l_63, 9))
        { 
            uint64_t l_97 = 8UL;
            struct S1 **l_115 = (void*)0;
            const int32_t l_121 = (-8L);
            int64_t *l_145 = &l_62[2][0][0];
            int64_t l_146 = (-1L);
            int32_t l_147 = 0xE30AAAE0L;
            int32_t l_148 = 1L;
            int32_t l_149[4][2][1] = {{{0xB88E8A56L},{0x156F240AL}},{{0xB88E8A56L},{0x156F240AL}},{{0xB88E8A56L},{0x156F240AL}},{{0xB88E8A56L},{0x156F240AL}}};
            uint16_t l_150 = 0x7EE4L;
            int i, j, k;
            l_85 = g_84[0][0];
            for (l_61 = 0; (l_61 <= 3); l_61 += 1)
            { 
                int32_t **l_87 = (void*)0;
                int32_t **l_88 = (void*)0;
                int32_t **l_89[5][4][2] = {{{&l_52,&g_86},{&l_52,&l_54},{(void*)0,&l_52},{&l_54,(void*)0}},{{&l_56[2][2][4],&g_86},{&l_52,&l_56[2][2][4]},{&g_86,(void*)0},{(void*)0,(void*)0}},{{&l_52,(void*)0},{(void*)0,(void*)0},{&g_86,&l_56[2][2][4]},{&l_52,&g_86}},{{&l_56[2][2][4],(void*)0},{&l_56[2][2][4],&g_86},{&l_52,&l_56[2][2][4]},{&g_86,(void*)0}},{{(void*)0,(void*)0},{&l_52,(void*)0},{(void*)0,(void*)0},{&g_86,&l_56[2][2][4]}}};
                uint8_t *l_95[7] = {(void*)0,&g_84[0][0].f1,(void*)0,(void*)0,&g_84[0][0].f1,(void*)0,(void*)0};
                int16_t l_96 = 0x0AD1L;
                struct S1 l_129 = {4372,51,0x61L,29,-11421};
                struct S0 l_138 = {0xDDE49BDA0E256200LL,2UL};
                int i, j, k;
                g_86 = g_86;
                if ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(g_2, (4L | ((&g_5[1][2][1] == (p_49 = &l_60[3])) , 248UL)))) < ((0L <= (l_94 == l_95[1])) , l_96)), 3)))
                { 
                    int8_t *l_106[6] = {&g_21,&g_21,&g_21,&g_21,&g_21,&g_21};
                    uint64_t *l_113[2][6][2] = {{{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97}},{{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97},{&l_97,&l_97}}};
                    int i, j, k;
                    l_60[l_61] = (l_97 & 0xFCEAL);
                    (*g_86) |= l_98;
                    (*g_86) |= (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(0xCCD3L)), (safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((g_21 = (l_95[4] == l_95[4])), (safe_div_func_int64_t_s_s(g_84[0][0].f0, (g_114 = (safe_add_func_int16_t_s_s(g_2, ((g_84[0][0].f1 && (safe_lshift_func_uint16_t_u_s((l_70 , 0UL), 14))) > g_31.f2)))))))) ^ (*p_49)), 0x6FL))));
                    l_115 = &g_30[2][0];
                }
                else
                { 
                    uint8_t l_120 = 1UL;
                    uint32_t *l_122 = (void*)0;
                    uint32_t *l_123 = &l_98;
                    int32_t *l_127 = &l_64;
                    int32_t *l_128 = &l_59;
                    int16_t *l_132 = &l_96;
                    struct S0 *l_133 = &g_84[1][2];
                    (*p_49) = (l_79 > (safe_unary_minus_func_uint32_t_u(((*l_123) = ((0UL | g_53[1]) ^ (((((l_117 , (1UL & 0L)) , ((safe_lshift_func_int8_t_s_s((((((l_54 != p_48) < l_97) < (*g_86)) ^ l_120) >= l_70.f3), 6)) & l_121)) <= l_97) || (*l_52)) == l_120))))));
                    (*l_54) = ((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(((void*)0 != &g_114))), 4)) <= 5UL);
                    p_49 = (((*l_127) = 0x5EBD3B7CL) , p_48);
                    l_128 = p_48;
                    g_135 ^= ((-1L) > ((*g_86) = (l_129 , ((((*l_133) = ((safe_lshift_func_int8_t_s_s((l_59 >= (g_41 , ((*l_132) = l_62[2][0][0]))), 0)) , g_84[0][0])) , ((*l_123) = (!(*l_52)))) | (*g_86)))));
                }
                for (g_135 = 0; (g_135 <= 2); g_135 += 1)
                { 
                    struct S0 *l_139 = &g_84[3][0];
                    int i, j, k;
                    if ((*g_86))
                        break;
                    (*l_52) = (safe_rshift_func_uint8_t_u_s((((void*)0 == g_86) != (((*l_139) = l_138) , g_53[1])), 3));
                }
                return l_70;
            }
            for (g_21 = 0; (g_21 == 14); g_21 = safe_add_func_uint8_t_u_u(g_21, 1))
            { 
                int8_t ***l_144 = &g_142;
                (*l_52) &= (*p_49);
                (*l_144) = g_142;
                (*g_86) = (l_145 == &g_41);
                if (l_146)
                    continue;
                (*l_54) = 0x54AE1B38L;
            }
            --l_150;
        }
    }
    for (g_114 = 0; (g_114 <= 3); g_114 += 1)
    { 
        struct S1 **l_153 = (void*)0;
        struct S1 **l_154[4] = {&g_30[2][0],&g_30[2][0],&g_30[2][0],&g_30[2][0]};
        int i;
        l_60[g_114] = 0xFFB02C8CL;
        l_155 = &g_31;
        for (l_64 = 0; (l_64 <= 1); l_64 += 1)
        { 
            for (g_21 = 1; (g_21 >= 0); g_21 -= 1)
            { 
                int i;
                l_60[g_114] = (-8L);
                for (l_79 = 0; (l_79 <= 3); l_79 += 1)
                { 
                    struct S1 l_157[7] = {{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656},{4519,22,0x02L,85,-4656}};
                    int i;
                    return l_157[4];
                }
            }
        }
    }
    (*g_86) = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_63 && (safe_div_func_int32_t_s_s((l_62[2][0][0] == (((l_117.f4 = ((safe_mod_func_int32_t_s_s((0L & ((void*)0 != &g_86)), l_117.f1)) <= (safe_add_func_uint8_t_u_u((4L && (-1L)), l_70.f4)))) , l_63) >= (*p_49))), 1L))), g_31.f3)), l_70.f2));
    if ((l_70.f1 <= (&g_41 != (void*)0)))
    { 
        struct S1 **l_171 = &g_30[2][0];
        struct S1 ***l_172[6] = {&l_171,(void*)0,&l_171,&l_171,(void*)0,&l_171};
        uint8_t **l_174 = &l_94;
        int32_t *l_181 = &g_33;
        int32_t *l_182 = &l_58;
        int32_t *l_183 = &l_60[3];
        int32_t *l_184[1];
        uint64_t l_186[4] = {0x610EA4464BCB6380LL,0x610EA4464BCB6380LL,0x610EA4464BCB6380LL,0x610EA4464BCB6380LL};
        int16_t l_227 = 0x85C1L;
        int32_t l_255 = 9L;
        int i;
        for (i = 0; i < 1; i++)
            l_184[i] = &l_55;
        (*p_49) &= ((((g_173[4][4] = l_171) == &l_155) >= (((*l_174) = ((*l_155) , &g_114)) != (void*)0)) , ((((safe_div_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(0UL, g_53[1])) || (-1L)), l_62[2][0][0])), 0x78CEF9958F310181LL)) & l_62[2][0][0]) | l_70.f2) > g_31.f2));
        l_186[0]++;
        for (g_21 = 0; (g_21 != (-26)); g_21 = safe_sub_func_int32_t_s_s(g_21, 1))
        { 
            uint32_t l_197[6] = {0xF0B4FE36L,0xF0B4FE36L,0xF0B4FE36L,0xF0B4FE36L,0xF0B4FE36L,0xF0B4FE36L};
            int64_t *l_205[3][7][7] = {{{&l_62[2][0][0],&l_62[2][0][0],(void*)0,&l_62[1][0][0],(void*)0,&l_62[1][0][0],(void*)0},{(void*)0,(void*)0,&l_62[2][1][0],&g_84[0][0].f0,&g_84[0][0].f0,(void*)0,&l_62[1][0][0]},{(void*)0,&g_84[0][0].f0,&l_62[2][0][0],(void*)0,&l_62[2][0][0],&l_62[2][0][0],&l_62[2][0][0]},{(void*)0,&l_62[2][0][0],(void*)0,&g_41,&g_84[0][0].f0,&l_62[2][1][0],&g_84[0][0].f0},{(void*)0,&l_62[2][0][0],&l_62[2][0][0],(void*)0,(void*)0,&l_62[1][1][0],&g_41},{&g_41,(void*)0,&l_62[2][0][0],(void*)0,(void*)0,&l_62[1][0][0],&g_84[0][0].f0},{(void*)0,&l_62[2][0][0],&g_84[0][0].f0,(void*)0,(void*)0,&g_41,&g_41}},{{&g_84[0][0].f0,&l_62[2][1][0],(void*)0,(void*)0,&l_62[2][1][0],&g_84[0][0].f0,&g_84[0][0].f0},{&l_62[1][0][0],(void*)0,&l_62[2][0][0],&l_62[2][0][0],(void*)0,&g_41,&l_62[2][0][0]},{&g_84[0][0].f0,&g_84[0][0].f0,&g_84[0][0].f0,&g_84[0][0].f0,&g_41,&g_84[0][0].f0,&l_62[1][0][0]},{&g_41,(void*)0,(void*)0,&l_62[0][1][0],&l_62[0][1][0],(void*)0,(void*)0},{(void*)0,&l_62[2][1][0],&l_62[2][0][0],&g_84[0][0].f0,&g_41,&g_84[0][0].f0,&l_62[1][0][0]},{(void*)0,&l_62[2][0][0],&l_62[2][0][0],&g_41,&l_62[1][1][0],(void*)0,&l_62[2][0][0]},{&l_62[2][0][0],(void*)0,&l_62[1][0][0],&l_62[2][0][0],&l_62[2][1][0],&l_62[2][1][0],&l_62[2][0][0]}},{{(void*)0,&l_62[0][1][0],(void*)0,&g_41,(void*)0,(void*)0,&g_41},{&g_41,&l_62[2][1][0],&g_84[0][0].f0,&g_41,&l_62[2][0][0],&g_84[0][0].f0,&g_84[0][0].f0},{&l_62[0][1][0],&l_62[1][0][0],&l_62[2][0][0],&g_41,&l_62[1][1][0],(void*)0,(void*)0},{(void*)0,&g_41,&g_41,&g_41,(void*)0,&l_62[2][1][0],&g_84[0][0].f0},{(void*)0,&l_62[2][0][0],&l_62[2][0][0],&l_62[2][0][0],(void*)0,&l_62[2][0][0],&g_84[0][0].f0},{&l_62[1][0][0],&l_62[2][1][0],&g_41,&l_62[1][0][0],(void*)0,(void*)0,&l_62[0][1][0]},{(void*)0,&l_62[2][0][0],&g_41,&g_41,&g_41,&l_62[2][0][0],(void*)0}}};
            int32_t l_206 = 1L;
            int i, j, k;
        }
        for (l_55 = 15; (l_55 != 13); l_55--)
        { 
            union U2 l_219 = {0xEEC03077L};
            int32_t l_226 = (-10L);
            int32_t l_229 = (-1L);
            int32_t l_231[6][5] = {{0x2BCE109FL,(-1L),0x52178676L,0x2BCE109FL,1L},{(-8L),(-1L),0xA8BBA517L,(-8L),1L},{0x2BCE109FL,0xA8BBA517L,0xA8BBA517L,0x2BCE109FL,0x7F4F738CL},{0x2BCE109FL,(-1L),0x52178676L,0x2BCE109FL,1L},{(-8L),(-1L),0xA8BBA517L,(-8L),1L},{0x2BCE109FL,0xA8BBA517L,0xA8BBA517L,0x2BCE109FL,0x7F4F738CL}};
            uint32_t l_234 = 0x27D45002L;
            struct S1 l_251 = {366,66,2UL,40,7878};
            struct S1 **l_252 = &g_30[6][1];
            int16_t *l_253 = (void*)0;
            int16_t *l_254 = &l_233;
            uint8_t l_269[6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_269[i] = 1UL;
        }
    }
    else
    { 
        uint32_t l_280[3];
        int8_t *l_289 = (void*)0;
        int16_t l_298 = (-1L);
        int32_t l_302 = 0L;
        int32_t l_303 = 0x61525A97L;
        int32_t l_306 = 1L;
        int32_t l_309 = (-1L);
        int32_t l_310 = (-1L);
        int32_t l_315 = 0xBB220442L;
        int32_t l_318 = (-6L);
        int32_t l_319 = (-4L);
        int32_t l_322[6][4] = {{0xDD89D095L,0x4AEC5BDDL,0L,0x4AEC5BDDL},{0x4AEC5BDDL,0L,6L,0x4AEC5BDDL},{6L,0x4AEC5BDDL,0x00C7A5CEL,0x00C7A5CEL},{0xE9C0B0BBL,0xE9C0B0BBL,0L,0xDD89D095L},{0xE9C0B0BBL,0L,0x00C7A5CEL,0xE9C0B0BBL},{6L,0xDD89D095L,6L,0x00C7A5CEL}};
        struct S1 l_331 = {3607,87,0xC9L,122,-6638};
        struct S0 l_367[1] = {{0x355B149D69E251FCLL,0xF3L}};
        int16_t **l_393 = &g_392[3];
        int8_t * const *l_434 = &g_143;
        int8_t * const **l_433[2][3] = {{&l_434,&l_434,&l_434},{&l_434,&l_434,&l_434}};
        int8_t * const ***l_435 = &l_433[0][1];
        int8_t ****l_436 = &l_363;
        uint16_t *l_437 = &g_344[1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_280[i] = 18446744073709551615UL;
        for (l_79 = 24; (l_79 != 40); l_79++)
        { 
            int8_t l_288 = 0xE3L;
            int32_t l_304 = 0x7FEB5254L;
            int32_t l_305 = 0x21088134L;
            int32_t l_311 = 0xB3881E75L;
            int32_t l_313 = (-5L);
            int32_t l_316 = 0L;
            int32_t l_317 = 0x5EF49172L;
            int32_t l_320 = 0xA59BBE5DL;
            int32_t l_323[3][2][3] = {{{2L,0x2FB70995L,0x2FB70995L},{5L,0x58F24F34L,0x58F24F34L}},{{2L,0x2FB70995L,0x2FB70995L},{5L,0x58F24F34L,0x58F24F34L}},{{2L,0x2FB70995L,0x2FB70995L},{5L,0x58F24F34L,0x58F24F34L}}};
            struct S1 l_330 = {638,13,0x8EL,352,8843};
            uint8_t ***l_382 = (void*)0;
            int64_t *l_395[3][6][6] = {{{&l_62[0][1][0],&l_62[2][0][0],(void*)0,&l_62[2][0][0],&g_84[0][0].f0,(void*)0},{&g_41,&l_62[0][1][0],(void*)0,&l_62[2][0][0],&g_84[0][0].f0,&l_62[2][0][0]},{(void*)0,&l_62[2][0][0],(void*)0,&g_41,&l_367[0].f0,&l_62[1][1][0]},{&g_41,&l_367[0].f0,&l_62[1][1][0],&g_84[0][0].f0,&l_62[1][0][0],&l_367[0].f0},{&g_84[0][0].f0,&l_62[1][1][0],&g_41,&g_84[0][0].f0,&g_41,&g_41},{&g_41,&l_62[2][1][0],&l_62[2][1][0],&g_41,&l_62[0][1][0],&l_62[2][0][0]}},{{(void*)0,&g_84[0][0].f0,&l_367[0].f0,&l_62[2][0][0],&g_41,(void*)0},{&g_41,&g_84[0][0].f0,&g_84[0][0].f0,&l_62[2][0][0],&g_41,&l_367[0].f0},{&l_62[0][1][0],&g_84[0][0].f0,&g_41,&g_84[0][0].f0,&l_62[0][1][0],&l_62[2][0][0]},{&g_84[0][0].f0,&l_62[2][1][0],&g_41,&l_62[2][0][0],(void*)0,&g_41},{&g_41,&l_62[2][0][0],&g_84[0][0].f0,&g_84[0][0].f0,&l_62[2][0][0],&g_41},{&g_41,&g_84[0][0].f0,&g_41,&g_41,&g_84[0][0].f0,&g_41}},{{&l_62[2][0][0],&l_62[1][1][0],(void*)0,&g_41,&g_41,&g_84[0][0].f0},{&l_62[1][1][0],&g_84[0][0].f0,&g_41,&l_62[0][1][0],(void*)0,&l_62[2][0][0]},{&l_62[1][1][0],&l_367[0].f0,&l_62[0][1][0],&g_41,&l_62[0][1][0],&l_367[0].f0},{&l_62[2][0][0],&g_41,&g_84[0][0].f0,&g_41,&l_367[0].f0,(void*)0},{&g_41,&l_62[1][0][0],&g_41,&g_84[0][0].f0,&g_41,&l_62[0][1][0]},{&g_41,&l_62[1][0][0],&l_62[2][0][0],&l_367[0].f0,&l_367[0].f0,&l_62[2][0][0]}}};
            int8_t l_399 = 0L;
            int i, j, k;
        }
        (*g_86) ^= ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_427[1][2], (((*l_437) = (((safe_add_func_int8_t_s_s(((*l_375) != ((*l_375) & (safe_sub_func_uint8_t_u_u((g_41 >= ((~(((*l_435) = l_433[1][1]) == ((*l_436) = &g_142))) & ((((l_322[1][1] <= 0x69L) != g_5[1][2][1]) >= l_298) && 0x072BL))), 0xA1L)))), 0L)) | 0xDE05455FL) && (*l_375))) < 0x0170L))), (*l_375))) | 0x06L);
        if ((*p_49))
        { 
            uint32_t l_444 = 7UL;
            uint8_t *l_454[4][7] = {{&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1},{&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1},{&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1,&l_367[0].f1},{&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1,&g_84[0][0].f1}};
            int i, j;
            if ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_444 <= (((safe_unary_minus_func_uint8_t_u(((((-4L) != ((*l_437) = (safe_rshift_func_int16_t_s_u(l_444, (*l_375))))) , (&g_392[2] != ((((safe_rshift_func_int8_t_s_u(g_156.f2, l_444)) & 0x0919L) == 7UL) , (void*)0))) && (*l_375)))) <= l_444) > l_444)), g_408)), 6)), l_444)))
            { 
                int16_t l_459 = 2L;
                struct S0 l_479[7] = {{-4L,4UL},{-4L,4UL},{-4L,4UL},{-4L,4UL},{-4L,4UL},{-4L,4UL},{-4L,4UL}};
                int i;
                g_258.f4 |= ((*p_49) = (+(((((*g_86) , (((((safe_mul_func_uint8_t_u_u(((l_454[0][1] = ((l_444 & (+0xECDA86C9L)) , (*g_383))) != (l_331.f2 , l_289)), (safe_div_func_uint16_t_u_u(((l_459 ^= (safe_add_func_int32_t_s_s(0xE4E69B18L, 0xD49C7E69L))) && l_444), l_302)))) | g_31.f4) || l_444) , (*l_375)) , l_367[0].f0)) , (void*)0) == (*g_383)) & 0UL)));
                if (((((*g_384) && l_444) <= (((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(g_114, (l_444 ^ ((l_331.f4 |= 0x23EB6ABD14B63FBBLL) || ((l_464 , (((safe_rshift_func_int16_t_s_u(l_459, 12)) < g_258.f0) , (*g_86))) && l_459))))), 0x1659L)) , l_459) , (*l_375))) == (*l_375)))
                { 
                    uint32_t l_473[1][4][7] = {{{0x477534E0L,0x477534E0L,0x89349D45L,0x477534E0L,0x477534E0L,0x89349D45L,0x477534E0L},{0x477534E0L,0xCC50F365L,0xCC50F365L,0x477534E0L,0xCC50F365L,0xCC50F365L,0x477534E0L},{0xCC50F365L,0x477534E0L,0xCC50F365L,0xCC50F365L,0x477534E0L,0xCC50F365L,0xCC50F365L},{0x477534E0L,0x477534E0L,0x89349D45L,0x477534E0L,0x477534E0L,0x89349D45L,0x477534E0L}}};
                    struct S0 *l_480 = &l_464;
                    int32_t **l_481 = &l_375;
                    struct S1 l_482 = {4889,8,252UL,20,8051};
                    int i, j, k;
                    (*g_86) |= ((*g_384) , (safe_mod_func_uint32_t_u_u(8UL, (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_473[0][2][2], g_31.f4)), (((safe_lshift_func_uint8_t_u_u((p_48 == ((+((safe_mod_func_uint32_t_u_u(g_135, (2UL || (*l_375)))) && l_444)) , (void*)0)), l_280[0])) != l_473[0][3][3]) | l_331.f0))))));
                    (*l_480) = (l_479[0] = g_84[0][0]);
                    (*l_481) = p_49;
                    return l_482;
                }
                else
                { 
                    (*p_49) = 0L;
                    return (*l_155);
                }
            }
            else
            { 
                uint64_t l_489 = 0x190ACEAA2F22B173LL;
                struct S1 l_490 = {1640,76,255UL,97,-4383};
                for (l_57 = 0; (l_57 < 25); ++l_57)
                { 
                    int32_t **l_485 = &g_86;
                    int32_t **l_486 = &l_375;
                    int32_t *l_488 = &l_60[3];
                    int32_t **l_487 = &l_488;
                    (*l_487) = ((*l_486) = ((*l_485) = &g_53[1]));
                    if ((*p_49))
                        break;
                    if (l_489)
                        break;
                }
                (*p_49) &= (g_8[3] , 0x084C4120L);
                return l_490;
            }
        }
        else
        { 
            int16_t l_491 = 0xDDCBL;
            struct S1 *l_500 = &l_331;
            struct S0 l_506 = {0x50C6FBDD32566170LL,0x35L};
            union U2 l_536[2] = {{0x34B0ED82L},{0x34B0ED82L}};
            int32_t l_548[4][7] = {{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL,0x97F4683FL}};
            int i, j;
lbl_538:
            (*g_86) = 0x3ED5986CL;
            if ((((-3L) >= l_491) < l_280[1]))
            { 
                uint8_t l_497 = 0x2BL;
                int64_t *l_504 = &l_367[0].f0;
                int32_t l_535 = 1L;
                if ((*g_86))
                { 
                    int32_t *l_492 = &l_322[3][0];
                    int32_t *l_493 = &l_59;
                    int32_t *l_494 = &l_55;
                    int32_t *l_495 = &g_33;
                    int32_t *l_496[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_496[i] = &l_310;
                    l_497--;
                    (*g_86) = (*g_86);
                }
                else
                { 
                    struct S1 **l_501 = &l_155;
                    int64_t **l_505 = &l_504;
                    uint32_t *l_513 = &g_357;
                    int32_t l_518 = 0x493E61D0L;
                    int16_t l_519 = 0x08B2L;
                    uint8_t *l_532 = (void*)0;
                    uint8_t *l_533 = &l_497;
                    int64_t *l_534 = &l_405;
                    (*g_86) |= (*p_49);
                    (*l_501) = l_500;
                    if (l_70.f2)
                        goto lbl_520;
lbl_520:
                    (*g_86) = ((safe_div_func_uint16_t_u_u((((*l_505) = l_504) == (l_506 , ((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((*l_375) >= ((((safe_div_func_uint8_t_u_u(((&g_84[0][4] == (void*)0) , (((*l_513) = (*l_375)) && (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_31.f2, 4294967295UL)) , l_506.f1), l_497)))), l_331.f2)) == l_518) == l_280[1]) || l_519)) || 0xD47FL), (*p_49))), (*l_375))) , (void*)0))), l_519)) < l_491);
                    (*p_49) = (((*l_513) &= l_280[1]) == ((safe_add_func_uint64_t_u_u((l_518 ^= (safe_sub_func_int8_t_s_s(1L, (((~((*l_534) = ((*l_504) |= ((safe_mul_func_uint16_t_u_u(((*l_437) = (((((*l_94) = l_303) < ((*l_533) = (8L > (safe_sub_func_uint8_t_u_u(0xDBL, (g_21 ^= 0x82L)))))) && g_344[1]) == l_306)), 3UL)) == 0x948DL)))) >= l_535) , l_497)))), g_156.f2)) != g_408));
                }
            }
            else
            { 
                (*p_49) = (l_536[1] , (+(l_536[1].f2 <= (*l_375))));
                if (g_408)
                    goto lbl_538;
                for (l_319 = 0; (l_319 <= (-27)); --l_319)
                { 
                    int32_t **l_541 = (void*)0;
                    int32_t **l_542 = &g_86;
                    (*l_542) = &g_5[2][1][1];
                }
            }
            for (l_303 = (-21); (l_303 > 26); l_303 = safe_add_func_uint32_t_u_u(l_303, 6))
            { 
                uint32_t l_559 = 4UL;
                for (l_298 = 4; (l_298 >= 0); l_298 -= 1)
                { 
                    int32_t *l_545 = &l_319;
                    int32_t *l_546 = &g_33;
                    int32_t *l_547 = &l_59;
                    int32_t *l_549 = &l_322[4][0];
                    int32_t *l_550 = &l_58;
                    int32_t *l_551 = &g_53[1];
                    int32_t *l_552 = &l_302;
                    int32_t *l_553 = &g_53[1];
                    int32_t *l_554 = &g_33;
                    int32_t *l_555 = &l_315;
                    int32_t *l_556 = &l_60[3];
                    int32_t *l_557 = &g_33;
                    int32_t *l_558[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_558[i] = (void*)0;
                    ++l_559;
                }
            }
            return l_331;
        }
    }
    ++l_562;
    return (*l_155);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);
        transparent_crc(g_8[i].f1, "g_8[i].f1", print_hash_value);
        transparent_crc(g_8[i].f2, "g_8[i].f2", print_hash_value);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_31.f2, "g_31.f2", print_hash_value);
    transparent_crc(g_31.f3, "g_31.f3", print_hash_value);
    transparent_crc(g_31.f4, "g_31.f4", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_84[i][j].f0, "g_84[i][j].f0", print_hash_value);
            transparent_crc(g_84[i][j].f1, "g_84[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_156.f0, "g_156.f0", print_hash_value);
    transparent_crc(g_156.f1, "g_156.f1", print_hash_value);
    transparent_crc(g_156.f2, "g_156.f2", print_hash_value);
    transparent_crc(g_156.f3, "g_156.f3", print_hash_value);
    transparent_crc(g_156.f4, "g_156.f4", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_258.f4, "g_258.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_325[i][j][k], "g_325[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_344[i], "g_344[i]", print_hash_value);

    }
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_637.f0, "g_637.f0", print_hash_value);
    transparent_crc(g_637.f1, "g_637.f1", print_hash_value);
    transparent_crc(g_637.f2, "g_637.f2", print_hash_value);
    transparent_crc(g_637.f3, "g_637.f3", print_hash_value);
    transparent_crc(g_637.f4, "g_637.f4", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_881[i][j], "g_881[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1637, "g_1637", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1697[i].f0, "g_1697[i].f0", print_hash_value);
        transparent_crc(g_1697[i].f1, "g_1697[i].f1", print_hash_value);
        transparent_crc(g_1697[i].f2, "g_1697[i].f2", print_hash_value);
        transparent_crc(g_1697[i].f3, "g_1697[i].f3", print_hash_value);
        transparent_crc(g_1697[i].f4, "g_1697[i].f4", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1768[i][j], "g_1768[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1787, "g_1787", print_hash_value);
    transparent_crc(g_1859, "g_1859", print_hash_value);
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    transparent_crc(g_1971, "g_1971", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2058[i], "g_2058[i]", print_hash_value);

    }
    transparent_crc(g_2061, "g_2061", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2125[i].f0, "g_2125[i].f0", print_hash_value);
        transparent_crc(g_2125[i].f1, "g_2125[i].f1", print_hash_value);
        transparent_crc(g_2125[i].f2, "g_2125[i].f2", print_hash_value);
        transparent_crc(g_2125[i].f3, "g_2125[i].f3", print_hash_value);
        transparent_crc(g_2125[i].f4, "g_2125[i].f4", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2173[i][j].f0, "g_2173[i][j].f0", print_hash_value);
            transparent_crc(g_2173[i][j].f1, "g_2173[i][j].f1", print_hash_value);
            transparent_crc(g_2173[i][j].f2, "g_2173[i][j].f2", print_hash_value);
            transparent_crc(g_2173[i][j].f3, "g_2173[i][j].f3", print_hash_value);
            transparent_crc(g_2173[i][j].f4, "g_2173[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_2342, "g_2342", print_hash_value);
    transparent_crc(g_2356, "g_2356", print_hash_value);
    transparent_crc(g_2415, "g_2415", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2416[i], "g_2416[i]", print_hash_value);

    }
    transparent_crc(g_2441, "g_2441", print_hash_value);
    transparent_crc(g_2450, "g_2450", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2573[i][j][k].f0, "g_2573[i][j][k].f0", print_hash_value);
                transparent_crc(g_2573[i][j][k].f1, "g_2573[i][j][k].f1", print_hash_value);
                transparent_crc(g_2573[i][j][k].f2, "g_2573[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_2741, "g_2741", print_hash_value);
    transparent_crc(g_2755.f0, "g_2755.f0", print_hash_value);
    transparent_crc(g_2755.f1, "g_2755.f1", print_hash_value);
    transparent_crc(g_2755.f2, "g_2755.f2", print_hash_value);
    transparent_crc(g_2755.f3, "g_2755.f3", print_hash_value);
    transparent_crc(g_2755.f4, "g_2755.f4", print_hash_value);
    transparent_crc(g_2933.f0, "g_2933.f0", print_hash_value);
    transparent_crc(g_2933.f1, "g_2933.f1", print_hash_value);
    transparent_crc(g_2986, "g_2986", print_hash_value);
    transparent_crc(g_2999.f0, "g_2999.f0", print_hash_value);
    transparent_crc(g_2999.f1, "g_2999.f1", print_hash_value);
    transparent_crc(g_2999.f2, "g_2999.f2", print_hash_value);
    transparent_crc(g_2999.f3, "g_2999.f3", print_hash_value);
    transparent_crc(g_2999.f4, "g_2999.f4", print_hash_value);
    transparent_crc(g_3047.f0, "g_3047.f0", print_hash_value);
    transparent_crc(g_3047.f1, "g_3047.f1", print_hash_value);
    transparent_crc(g_3060, "g_3060", print_hash_value);
    transparent_crc(g_3163, "g_3163", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
