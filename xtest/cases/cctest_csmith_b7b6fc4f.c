// SPDX-License-Identifier: MIT
// cctest_csmith_b7b6fc4f.c --- cctest case csmith_b7b6fc4f (csmith seed 3082222671)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x954f2f9e */

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

// Options:   -s 3082222671 -o /tmp/csmith_gen_ih2kiaxk/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   const uint32_t  f4;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   const int8_t * f1;
   int32_t  f2;
   int64_t  f3;
   struct S0  f4;
};


static int32_t g_2 = 0x950BA1BFL;
static int32_t g_6[7] = {0x7865925EL,0x7865925EL,0x7865925EL,0x7865925EL,0x7865925EL,0x7865925EL,0x7865925EL};
static int16_t g_20 = 6L;
static uint16_t g_45 = 0x9329L;
static int32_t g_67 = 0L;
static uint32_t g_70[1] = {0xEC6B039BL};
static int32_t g_74[2] = {0x8E0D3184L,0x8E0D3184L};
static int32_t *g_75[7][7][3] = {{{(void*)0,&g_74[0],&g_2},{&g_2,(void*)0,&g_6[5]},{&g_74[0],&g_2,&g_74[0]},{&g_74[0],&g_74[0],(void*)0},{&g_74[0],&g_74[1],&g_74[0]},{&g_74[0],&g_74[1],&g_2},{&g_6[6],&g_74[0],&g_74[0]}},{{&g_6[0],&g_2,&g_74[0]},{(void*)0,(void*)0,&g_6[6]},{&g_74[0],&g_74[0],(void*)0},{&g_2,&g_74[0],&g_74[1]},{&g_74[0],&g_74[0],(void*)0},{(void*)0,&g_74[0],&g_6[2]},{&g_74[0],(void*)0,&g_6[6]}},{{&g_74[1],&g_74[1],(void*)0},{&g_74[0],&g_74[0],&g_6[2]},{(void*)0,&g_6[2],&g_6[4]},{&g_6[2],&g_6[4],(void*)0},{&g_74[0],&g_2,&g_2},{&g_74[0],&g_74[0],(void*)0},{&g_6[2],&g_74[0],(void*)0}},{{(void*)0,(void*)0,(void*)0},{&g_74[0],&g_74[0],&g_6[2]},{&g_74[1],&g_74[0],&g_6[0]},{&g_74[0],&g_74[0],&g_6[0]},{(void*)0,&g_2,&g_6[2]},{&g_6[2],&g_74[0],&g_74[0]},{&g_74[0],&g_74[0],&g_2}},{{&g_6[4],&g_74[0],&g_2},{&g_6[6],(void*)0,&g_74[1]},{(void*)0,&g_74[0],&g_2},{(void*)0,&g_74[0],&g_2},{&g_74[0],&g_2,&g_2},{&g_6[2],&g_6[4],&g_2},{&g_74[0],&g_6[2],&g_74[1]}},{{&g_2,&g_74[0],&g_2},{(void*)0,&g_74[1],&g_2},{&g_2,(void*)0,&g_74[0]},{&g_74[1],&g_74[0],&g_6[2]},{&g_74[0],&g_2,&g_6[0]},{&g_74[1],&g_6[2],&g_6[0]},{&g_2,&g_2,&g_6[2]}},{{(void*)0,&g_6[6],(void*)0},{&g_2,&g_6[2],(void*)0},{&g_74[0],&g_74[0],(void*)0},{&g_6[2],&g_2,&g_2},{&g_74[0],&g_2,(void*)0},{(void*)0,&g_74[0],&g_6[4]},{(void*)0,&g_6[2],&g_6[2]}}};
static int32_t g_76 = 0x01FE44AAL;
static union U1 g_108 = {0x6CC6058BL};
static uint8_t g_127[3] = {0UL,0UL,0UL};
static uint8_t g_129 = 0xA3L;
static const uint16_t *g_152 = &g_45;
static const uint16_t **g_151 = &g_152;
static struct S0 g_154 = {0xD269L,7L,0xC4599D9CL,0L,5UL};
static uint64_t g_163[7] = {0x7419D225D925F0FALL,0x7419D225D925F0FALL,0x7419D225D925F0FALL,0x7419D225D925F0FALL,0x7419D225D925F0FALL,0x7419D225D925F0FALL,0x7419D225D925F0FALL};
static int64_t g_175 = 0x272BE81AA5684FDDLL;
static uint16_t *g_178 = &g_154.f0;
static uint16_t *g_180 = &g_108.f4.f0;
static int16_t g_218 = (-9L);
static union U1 *g_245 = &g_108;
static union U1 **g_244[2] = {&g_245,&g_245};
static uint64_t g_263[6] = {0x31D98C76D83F59F7LL,0x31D98C76D83F59F7LL,0UL,0x31D98C76D83F59F7LL,0x31D98C76D83F59F7LL,0UL};
static uint8_t *g_360 = &g_129;
static uint8_t **g_359 = &g_360;
static int16_t g_424 = 0x08A8L;
static uint32_t g_504 = 0xCE34376CL;
static uint32_t g_513[2] = {18446744073709551615UL,18446744073709551615UL};
static int32_t ****g_522 = (void*)0;
static int32_t *****g_521 = &g_522;
static uint64_t *g_558 = &g_163[5];
static uint16_t ** const g_559 = (void*)0;
static int16_t g_637[4][2] = {{0x7508L,0x7508L},{0x7508L,0x7508L},{0x7508L,0x7508L},{0x7508L,0x7508L}};
static uint16_t g_647 = 0xCCEDL;
static int8_t g_654 = 5L;
static int32_t *g_833[6][4] = {{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2},{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2},{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2},{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2},{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2},{&g_108.f2,&g_108.f2,&g_108.f2,&g_108.f2}};
static int32_t **g_890 = &g_75[2][0][1];
static int32_t ***g_889 = &g_890;
static int32_t ****g_888 = &g_889;
static int32_t ****g_891 = &g_889;
static const uint8_t *g_922 = &g_127[2];
static const uint8_t **g_921 = &g_922;
static const uint8_t ***g_920[6] = {(void*)0,&g_921,&g_921,(void*)0,&g_921,&g_921};
static uint32_t ***g_1052 = (void*)0;
static int64_t g_1096[4] = {6L,6L,6L,6L};
static int32_t *g_1188 = (void*)0;
static int32_t **g_1187 = &g_1188;
static int32_t ***g_1186 = &g_1187;
static int32_t ****g_1185[5] = {&g_1186,&g_1186,&g_1186,&g_1186,&g_1186};
static const struct S0 g_1197 = {65535UL,0xB7F5A499L,18446744073709551615UL,0xE94CA03BL,4UL};
static uint8_t **g_1212 = (void*)0;
static int32_t *****g_1224 = &g_888;
static uint8_t ****g_1323 = (void*)0;
static int8_t g_1437[3][2][4] = {{{8L,(-1L),(-1L),8L},{8L,(-1L),(-1L),8L}},{{8L,(-1L),(-1L),8L},{8L,(-1L),(-1L),8L}},{{8L,(-1L),(-1L),8L},{8L,(-1L),(-1L),8L}}};
static int8_t g_1472 = 4L;
static struct S0 g_1477 = {0x6439L,0L,0x5C2A8581L,1L,0xCBF65692L};
static struct S0 *g_1476 = &g_1477;
static int8_t *g_1494 = &g_1437[0][0][2];
static int8_t **g_1493[7][3][6] = {{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}},{{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494},{&g_1494,&g_1494,&g_1494,&g_1494,&g_1494,&g_1494}}};
static int8_t g_1498 = (-1L);
static uint8_t g_1598 = 0x2AL;
static const int32_t *g_1600[5][1] = {{&g_108.f2},{&g_74[0]},{&g_108.f2},{&g_74[0]},{&g_108.f2}};
static uint64_t g_1615 = 1UL;
static int32_t g_1618 = 0x4B77A152L;
static int64_t g_1668 = 0x0BF9DCC5940C28FCLL;
static int8_t g_1702[6][6][1] = {{{(-9L)},{(-9L)},{0xC3L},{(-1L)},{(-7L)},{1L}},{{0x18L},{0xBDL},{(-6L)},{9L},{(-6L)},{0xBDL}},{{0x18L},{1L},{(-7L)},{(-1L)},{0xC3L},{(-9L)}},{{(-9L)},{0xC3L},{(-1L)},{(-7L)},{1L},{0x18L}},{{0xBDL},{(-6L)},{9L},{(-6L)},{0xBDL},{0x18L}},{{1L},{(-7L)},{(-1L)},{0xC3L},{(-9L)},{(-9L)}}};
static uint8_t g_1703 = 0UL;
static uint64_t g_1736 = 0x637F256DA865B3CALL;
static uint16_t g_1746[2][7][3] = {{{65531UL,65531UL,0x6B4AL},{0x1F80L,1UL,0x662AL},{0xBD39L,0x2342L,0x6B4AL},{0x2DBFL,0x2DBFL,0x662AL},{1UL,5UL,65531UL},{0x447EL,0x5EB6L,0x2DBFL},{0xD046L,0xD046L,65531UL}},{{0x5EB6L,0x447EL,0x2DBFL},{5UL,1UL,65531UL},{0UL,0UL,0x2DBFL},{1UL,5UL,65531UL},{0x447EL,0x5EB6L,0x2DBFL},{0xD046L,0xD046L,65531UL},{0x5EB6L,0x447EL,0x2DBFL}}};
static int8_t g_1773 = 0x97L;



static uint32_t  func_1(void);
static struct S0  func_9(union U1  p_10, int32_t  p_11);
static union U1  func_12(uint8_t  p_13, uint8_t  p_14, const struct S0  p_15, const int32_t * p_16, int32_t * p_17);
static union U1  func_21(int32_t * p_22, uint8_t  p_23, uint8_t  p_24);
static int32_t * func_25(int32_t * p_26, const uint64_t  p_27, uint64_t  p_28, int8_t * p_29, uint64_t  p_30);
static int32_t * func_31(int64_t  p_32, int16_t  p_33);
static uint8_t  func_38(int8_t  p_39);
static uint8_t  func_55(int32_t  p_56, const uint16_t * p_57, int32_t * p_58, int16_t  p_59);




static uint32_t  func_1(void)
{ 
    uint64_t l_838 = 0xC7C02EDFA5023635LL;
    int8_t **l_1633 = &g_1494;
    int32_t *l_1638[6] = {&g_74[0],&g_74[0],&g_74[0],&g_74[0],&g_74[0],&g_74[0]};
    int16_t l_1639 = 0x80CEL;
    uint32_t *l_1640 = &g_70[0];
    uint32_t l_1641[2][2][3] = {{{0xF949FF09L,0xF949FF09L,0xF949FF09L},{0x9DE7B33EL,0x9DE7B33EL,0x9DE7B33EL}},{{0xF949FF09L,0xF949FF09L,0xF949FF09L},{0x9DE7B33EL,0x9DE7B33EL,0x9DE7B33EL}}};
    uint32_t l_1642 = 0x9A38A5C0L;
    int32_t l_1643[1][3][6] = {{{0x5EE89A3DL,0x5EE89A3DL,0x66142177L,0x5EE89A3DL,0x5EE89A3DL,0x66142177L},{0x5EE89A3DL,0x5EE89A3DL,0x66142177L,0x5EE89A3DL,0x5EE89A3DL,0x66142177L},{0x5EE89A3DL,0x5EE89A3DL,0x66142177L,0x5EE89A3DL,0x5EE89A3DL,0x66142177L}}};
    union U1 **l_1653[1][6];
    int64_t l_1671[3][7];
    uint8_t **l_1681 = &g_360;
    int64_t l_1699 = 0x856A759F32F520A0LL;
    uint64_t l_1706 = 8UL;
    int8_t l_1734 = 1L;
    int16_t l_1738 = (-6L);
    int8_t *l_1744 = &g_1702[3][5][0];
    int64_t l_1745 = 0L;
    struct S0 l_1747 = {0x6A14L,0x61C1CC91L,18446744073709551611UL,-5L,0xA15C47ABL};
    uint8_t ***l_1766 = &g_1212;
    uint8_t ****l_1765 = &l_1766;
    int32_t l_1769[4][3];
    int32_t l_1772 = 0xCE61BCC1L;
    const int8_t l_1774 = (-1L);
    int8_t l_1775 = 5L;
    int64_t l_1776 = 0x29F1C35A1D51EC3CLL;
    uint32_t l_1777[2][7][4] = {{{18446744073709551614UL,18446744073709551614UL,0x62DB80F2L,0xB6A1989BL},{1UL,18446744073709551614UL,18446744073709551614UL,1UL},{18446744073709551614UL,1UL,18446744073709551614UL,0UL},{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,0x62DB80F2L},{1UL,0UL,0x62DB80F2L,0x62DB80F2L},{18446744073709551614UL,18446744073709551614UL,0xB6A1989BL,0UL},{0UL,1UL,0xB6A1989BL,1UL}},{{18446744073709551614UL,18446744073709551614UL,0x62DB80F2L,0xB6A1989BL},{1UL,18446744073709551614UL,18446744073709551614UL,1UL},{18446744073709551614UL,1UL,18446744073709551614UL,0UL},{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,0x62DB80F2L},{1UL,0UL,0x62DB80F2L,0x62DB80F2L},{18446744073709551614UL,18446744073709551614UL,0xB6A1989BL,0UL},{0UL,1UL,0xB6A1989BL,1UL}}};
    uint16_t l_1778 = 1UL;
    uint64_t l_1779 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1653[i][j] = &g_245;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_1671[i][j] = 0x4D982A4D9DBDB730LL;
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_1769[i][j] = 0x29614939L;
    }
    for (g_2 = 0; (g_2 > 9); g_2++)
    { 
        int32_t *l_5 = &g_6[2];
        uint16_t *l_44 = &g_45;
        uint32_t l_1196 = 4294967294UL;
        int32_t *l_1617[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1617[i] = &g_1618;
        (*l_5) = g_2;
    }
    if ((((safe_lshift_func_int8_t_s_u((l_838 , (safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((-1L), (safe_div_func_int32_t_s_s((l_1643[0][2][2] = ((((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((*g_1476) , (safe_div_func_uint32_t_u_u(((*l_1640) = (l_1633 == (((safe_mod_func_int16_t_s_s((((safe_div_func_int32_t_s_s((l_838 || (**g_151)), (l_1639 ^= ((((((*g_890) = (void*)0) != l_1638[1]) , (void*)0) == (void*)0) > g_67)))) || g_74[0]) , g_1197.f2), g_127[1])) && 0xDFCAL) , (void*)0))), l_1641[0][1][0]))) > 0xB8A6A804L), l_1642)), 0x6CL)) > 0x0F91BDB0L) & (*g_152)) != g_513[0])), (-3L))))), (**g_921)))), 4)) >= 0xC929L) & (*g_558)))
    { 
        int16_t l_1644 = 1L;
        int32_t l_1645 = 0xFD28F0FDL;
        union U1 **l_1654 = &g_245;
        int8_t **l_1657 = &g_1494;
        int32_t l_1662[1][3];
        int8_t l_1665 = 0xB3L;
        int16_t l_1687 = 4L;
        uint8_t l_1694 = 0xBDL;
        int32_t l_1697 = 5L;
        int16_t l_1698 = 1L;
        const uint16_t **** const l_1727 = (void*)0;
        uint32_t l_1733[6];
        int8_t l_1735 = (-1L);
        int8_t l_1737 = 1L;
        uint8_t l_1740[7] = {3UL,0x41L,3UL,3UL,0x41L,3UL,3UL};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1662[i][j] = (-3L);
        }
        for (i = 0; i < 6; i++)
            l_1733[i] = 0xEA40FDB0L;
        l_1645 ^= l_1644;
        if ((safe_add_func_int16_t_s_s(g_154.f4, ((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((l_1645 , ((safe_sub_func_int16_t_s_s(((l_1653[0][2] == l_1654) > l_1644), (((((safe_sub_func_uint8_t_u_u(((*g_1476) , (*g_922)), 0xCCL)) && l_1644) != l_1644) , l_1657) == l_1633))) , 0x9443B896L)))) , l_1644), (**g_359))) , 7UL))))
        { 
            uint16_t l_1658 = 0xADC3L;
            int32_t l_1661[5][5][7] = {{{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L}},{{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L}},{{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L}},{{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L}},{{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L},{0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L,0x5E45DC6AL,0x6F9D52E2L},{0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L,0xA8958B13L}}};
            int16_t l_1672 = 0x552BL;
            uint8_t l_1673 = 0UL;
            const uint8_t **l_1680[4][6] = {{&g_922,(void*)0,&g_922,(void*)0,&g_922,&g_922},{&g_922,(void*)0,(void*)0,&g_922,(void*)0,&g_922},{&g_922,(void*)0,&g_922,(void*)0,(void*)0,&g_922},{&g_922,&g_922,(void*)0,&g_922,(void*)0,&g_922}};
            int i, j, k;
            for (g_1618 = 0; (g_1618 <= 1); g_1618 += 1)
            { 
                int32_t l_1663 = 4L;
                int32_t l_1664 = (-3L);
                int16_t l_1666 = (-1L);
                int32_t l_1667 = 1L;
                int32_t l_1669 = 0x4FE71D50L;
                int32_t l_1670 = (-1L);
                int i;
                l_1658--;
                if (g_127[g_1618])
                    break;
                l_1673++;
                if (g_127[g_1618])
                    break;
            }
            l_1661[1][4][3] ^= ((g_76 <= ((*g_180) = (((safe_mod_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((l_1680[3][5] == l_1681) && (&l_1671[0][3] == &g_175)), (((**g_359) , l_1645) && 9UL))) || g_6[2]), l_1644)) > l_1672) != l_1665))) || 0xAE21041A33A9C7C4LL);
            l_1661[3][0][6] = ((*g_1494) , 1L);
        }
        else
        { 
            int64_t l_1682 = 0xB014605BA9C7A6DBLL;
            int32_t l_1683 = (-5L);
            int32_t l_1684 = 0xA8A88BB6L;
            int32_t l_1685 = 8L;
            int32_t l_1686 = 0xB0A4BFADL;
            int32_t l_1688 = 0x5012447DL;
            int32_t l_1689 = 0x4E38A912L;
            int32_t l_1690 = 0x3FE64B20L;
            int32_t l_1691 = 0xD4755A3DL;
            int32_t l_1692 = (-1L);
            int32_t l_1693 = 0L;
            int32_t l_1700[4];
            int32_t l_1701 = (-2L);
            uint16_t **l_1730 = &g_180;
            uint16_t ***l_1729 = &l_1730;
            uint16_t **** const l_1728 = &l_1729;
            int8_t l_1739[3][6] = {{4L,(-9L),(-9L),4L,(-9L),(-9L)},{4L,(-9L),(-9L),4L,(-9L),(-9L)},{4L,(-9L),(-9L),4L,(-9L),(-9L)}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1700[i] = 0x0D5DD215L;
            l_1694++;
            ++g_1703;
            g_1736 |= ((l_1706 > ((((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((((safe_sub_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_1727 != (l_1694 , l_1728)), l_1688)), (safe_rshift_func_int16_t_s_u(l_1733[1], l_1686)))), l_1685)) , l_1689) != (-10L)) == l_1694), l_1734)) , 0L) >= l_1697), l_1689)), l_1688)) & l_1694), l_1735)), l_1683)) , 0x6AE3L), (*g_152))), l_1694)) == 0xC4CEA799L) != l_1701) <= l_1735)) < l_1694);
            l_1740[0]--;
            l_1645 &= (safe_unary_minus_func_uint8_t_u(((l_1747 , &g_245) != (void*)0)));
        }
    }
    else
    { 
        int8_t l_1761 = 0x99L;
        int16_t *l_1762[4][6][4] = {{{&g_218,(void*)0,&l_1738,(void*)0},{&l_1738,(void*)0,&l_1639,&l_1738},{&g_20,(void*)0,&g_637[2][0],(void*)0},{(void*)0,(void*)0,&l_1738,&l_1639},{&g_637[2][0],&g_20,&l_1639,&l_1738},{&g_218,&g_637[1][1],&g_637[2][1],(void*)0}},{{&g_218,&l_1639,&l_1639,&g_218},{&g_637[2][0],(void*)0,&l_1738,&l_1639},{(void*)0,&g_637[1][1],&g_637[2][0],&l_1639},{&l_1639,&g_424,&g_637[2][1],(void*)0},{&g_637[2][0],&g_637[2][0],&g_637[2][0],&g_637[2][1]},{&l_1738,&l_1738,&g_218,&l_1738}},{{&l_1639,&g_637[2][1],&g_637[0][0],&l_1738},{&g_637[2][1],&g_637[2][0],&g_637[0][0],&g_637[0][0]},{&l_1639,&l_1639,&g_218,(void*)0},{&l_1738,&l_1639,&g_637[2][0],&l_1738},{&g_637[2][0],&l_1738,&g_637[2][1],&g_637[2][0]},{&l_1639,&l_1738,&g_637[1][1],&l_1738}},{{&l_1738,&l_1639,&g_637[0][0],(void*)0},{&g_424,&l_1639,&g_637[2][1],&g_637[0][0]},{&l_1738,&g_637[2][0],&l_1639,&l_1738},{&l_1738,&g_637[2][1],&g_637[2][1],&l_1738},{&g_424,&l_1738,&g_637[0][0],&g_637[2][1]},{&l_1738,&g_637[2][0],&g_637[1][1],(void*)0}}};
        int16_t l_1763 = 0x31AFL;
        int32_t l_1764 = 0x4B0E1CB3L;
        int i, j, k;
        l_1764 = ((safe_rshift_func_uint16_t_u_s((0x09B0CDC4L | ((((*g_245) , (+(*g_558))) > (safe_mul_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(l_1761, l_1761)) , (g_20 |= g_163[5])), 14)) , (*g_922)) >= l_1761), l_1763)) == (**g_921)), 0x87L)), 0UL))) | (*g_922))), 11)) != (*g_558));
    }
    l_1778 = ((((9L ^ (((&l_1747 == (((((*g_360) <= (l_1765 == &l_1766)) && (((((((safe_rshift_func_int16_t_s_s(l_1769[1][1], (safe_mod_func_uint8_t_u_u(0xCFL, (*g_360))))) | 8L) > l_1772) == g_1773) || 6UL) & (*g_360)) || (*g_1494))) || 0x692C9271L) , (void*)0)) ^ (*g_1494)) > l_1774)) <= l_1775) ^ l_1776) , l_1777[0][4][0]);
    return l_1779;
}



static struct S0  func_9(union U1  p_10, int32_t  p_11)
{ 
    int64_t l_1236 = 0xDEB73040BE860A95LL;
    int32_t l_1247 = (-4L);
    struct S0 l_1257 = {6UL,0x56DDC3A4L,18446744073709551615UL,1L,18446744073709551613UL};
    int32_t l_1262[4];
    uint8_t ***l_1287[4] = {&g_359,&g_359,&g_359,&g_359};
    uint8_t ****l_1286[3][7];
    uint8_t *****l_1285 = &l_1286[1][4];
    uint32_t *l_1319[4][6][1] = {{{&g_504},{(void*)0},{&g_504},{(void*)0},{&g_504},{&g_504}},{{(void*)0},{&g_504},{(void*)0},{&g_504},{&g_504},{(void*)0}},{{&g_504},{(void*)0},{&g_504},{&g_504},{(void*)0},{&g_504}},{{(void*)0},{&g_504},{&g_504},{(void*)0},{&g_504},{(void*)0}}};
    const int32_t ***l_1358 = (void*)0;
    const int32_t ****l_1357[1][3];
    int32_t l_1389 = 5L;
    int8_t l_1391 = 0xF8L;
    uint16_t **l_1409 = &g_178;
    uint16_t ***l_1408 = &l_1409;
    uint16_t ****l_1407 = &l_1408;
    int16_t l_1432 = 0x7C22L;
    uint64_t *l_1466 = (void*)0;
    union U1 l_1470[6][1] = {{{0x8A91CD84L}},{{0x8A91CD84L}},{{0x8A91CD84L}},{{0x8A91CD84L}},{{0x8A91CD84L}},{{0x8A91CD84L}}};
    uint32_t l_1508[1];
    uint64_t l_1528[5][2];
    int8_t *l_1534 = &g_1472;
    uint16_t l_1576 = 0UL;
    uint64_t l_1583 = 0UL;
    int64_t l_1603 = 0x4FC88F92D5D31DF3LL;
    int32_t l_1616 = 0xF0545404L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1262[i] = 0x549B52C8L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_1286[i][j] = &l_1287[3];
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1357[i][j] = &l_1358;
    }
    for (i = 0; i < 1; i++)
        l_1508[i] = 0xAA5C4B95L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_1528[i][j] = 0x18B61791F21EC202LL;
    }
    if ((((*g_558) &= (l_1236 <= (p_10.f2 == ((safe_rshift_func_uint16_t_u_u(0xE994L, (safe_mul_func_int8_t_s_s(l_1236, (p_10.f0 , ((safe_mod_func_uint16_t_u_u(l_1236, (safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(p_10.f0, l_1247)) , 1L), l_1236)))) & 0x98D09C83D2356BA2LL)))))) && 0x37L)))) || g_154.f3))
    { 
        int16_t l_1256 = (-10L);
        int32_t l_1260 = 5L;
        for (g_218 = 0; (g_218 >= 0); g_218 -= 1)
        { 
            uint32_t *l_1259[7] = {&g_70[g_218],&g_70[g_218],&g_70[g_218],&g_70[g_218],&g_70[g_218],&g_70[g_218],&g_70[g_218]};
            int16_t *l_1261 = &g_637[3][0];
            int i;
            for (g_154.f1 = 0; g_154.f1 < 2; g_154.f1 += 1)
            {
                g_244[g_154.f1] = &g_245;
            }
            l_1262[0] ^= ((g_70[g_218] < ((*l_1261) = (safe_lshift_func_uint16_t_u_s(((l_1260 |= (((safe_rshift_func_uint8_t_u_u(0xD3L, 0)) != 0x453C7440FF156800LL) != ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_1256, (l_1257 , p_10.f2))) & (safe_unary_minus_func_uint64_t_u(0xA2A5A7B3377AA090LL))), p_10.f2)) >= p_10.f2))) , (**g_151)), g_129)))) > l_1256);
        }
        return l_1257;
    }
    else
    { 
        int16_t l_1277 = 1L;
        int32_t l_1293 = 0L;
        int32_t l_1300 = 3L;
        int32_t l_1301 = 0xF60D7958L;
        int32_t l_1303[7] = {0x42D5A9C1L,0x42D5A9C1L,0x42D5A9C1L,0x42D5A9C1L,0x42D5A9C1L,0x42D5A9C1L,0x42D5A9C1L};
        struct S0 l_1307 = {0x10DBL,-10L,0UL,0x66B8AB6DL,0x72C88E29L};
        uint8_t l_1310 = 0x2FL;
        uint32_t *l_1314 = &g_70[0];
        const uint64_t l_1317 = 0x98A58FEEB5602AB7LL;
        int8_t *l_1318 = (void*)0;
        uint8_t l_1344 = 0xFEL;
        int8_t l_1356[5][5][4] = {{{0x66L,0xCAL,(-4L),0L},{1L,1L,(-6L),(-1L)},{0xDFL,1L,0xDFL,(-1L)},{(-4L),(-3L),0x04L,1L},{0L,0xDFL,(-1L),(-3L)}},{{0xB2L,0L,(-1L),0xCAL},{0L,0L,0x04L,0x04L},{(-4L),(-4L),0xDFL,0xB2L},{0xDFL,0xB2L,(-6L),1L},{1L,0x6AL,(-4L),(-6L)}},{{0x66L,0x6AL,0x82L,1L},{0x6AL,0xB2L,(-1L),0xB2L},{1L,(-4L),(-3L),0x04L},{(-1L),0L,0L,0xCAL},{0x04L,0L,0x6AL,(-3L)}},{{0x04L,0xDFL,0L,1L},{(-1L),(-3L),(-3L),(-1L)},{1L,1L,(-1L),(-1L)},{0x6AL,1L,0x82L,0L},{0x66L,0xCAL,(-4L),0L}},{{1L,1L,(-6L),0x04L},{1L,0L,1L,0xDFL},{0x66L,(-4L),(-1L),(-6L)},{(-1L),1L,0x04L,(-4L)},{(-3L),0L,0x04L,0x82L}}};
        int32_t ****l_1374 = (void*)0;
        uint8_t * const *l_1424 = (void*)0;
        uint8_t * const **l_1423 = &l_1424;
        uint8_t * const ** const *l_1422 = &l_1423;
        uint8_t * const ** const **l_1421 = &l_1422;
        int32_t l_1451 = 5L;
        union U1 *l_1525 = (void*)0;
        uint32_t l_1590[7];
        uint32_t l_1604[5];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1590[i] = 0xD9ADE70BL;
        for (i = 0; i < 5; i++)
            l_1604[i] = 0xBB469BC0L;
lbl_1308:
        l_1262[0] = l_1257.f3;
        for (l_1236 = 0; (l_1236 >= (-1)); l_1236--)
        { 
            int32_t l_1276[4][1][5] = {{{0L,0L,0L,(-1L),0L}},{{0x26FE699EL,0xD324DB35L,(-1L),0x26FE699EL,(-1L)}},{{0x26FE699EL,0x26FE699EL,(-1L),0L,1L}},{{0L,1L,(-1L),(-1L),1L}}};
            int32_t *l_1309[1];
            uint32_t l_1333 = 0xFF11A46AL;
            const union U1 *l_1353[3];
            const union U1 **l_1352 = &l_1353[1];
            const union U1 ***l_1351 = &l_1352;
            int32_t l_1378[3][6] = {{0x8AF584DEL,1L,1L,0x8AF584DEL,0xEF4E92CEL,0x8AF584DEL},{0x8AF584DEL,0xEF4E92CEL,0x8AF584DEL,1L,1L,0x8AF584DEL},{9L,9L,1L,6L,1L,9L}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1309[i] = &g_74[0];
            for (i = 0; i < 3; i++)
                l_1353[i] = &g_108;
            if ((((l_1257.f2 || (18446744073709551607UL == ((safe_lshift_func_uint16_t_u_u(0x56EAL, 6)) == (safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(0x33L, 255UL)) <= ((safe_lshift_func_uint8_t_u_s(((+p_11) && (p_11 & l_1257.f3)), l_1276[2][0][4])) < 0x02B0150A831AF828LL)), (**g_359))) > l_1277), l_1257.f1))))) < l_1277) , p_11))
            { 
                int32_t l_1284[7];
                uint8_t ** const *l_1290[6][4][1] = {{{&g_1212},{(void*)0},{&g_1212},{(void*)0}},{{&g_1212},{(void*)0},{&g_1212},{(void*)0}},{{&g_1212},{(void*)0},{&g_1212},{(void*)0}},{{&g_1212},{(void*)0},{&g_1212},{(void*)0}},{{&g_1212},{(void*)0},{&g_1212},{(void*)0}},{{&g_1212},{(void*)0},{&g_1212},{(void*)0}}};
                uint8_t ** const **l_1289 = &l_1290[1][1][0];
                uint8_t ** const ***l_1288 = &l_1289;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1284[i] = 0x9220FA34L;
                l_1262[0] &= (p_10.f2 , (((safe_sub_func_uint64_t_u_u(0x980BE060770BD353LL, (p_11 > g_1197.f0))) < (safe_rshift_func_int16_t_s_u((0L || (((((((safe_lshift_func_uint8_t_u_s((l_1276[2][0][4] != g_127[1]), 3)) ^ l_1277) >= l_1284[3]) , l_1285) != l_1288) >= 0UL) <= l_1276[0][0][4])), 10))) >= p_10.f2));
                return g_154;
            }
            else
            { 
                int8_t l_1302 = (-1L);
                if (l_1276[1][0][2])
                { 
                    int32_t *l_1291 = &l_1262[0];
                    int32_t *l_1292 = &g_6[1];
                    int32_t *l_1294 = &g_74[0];
                    int32_t *l_1295 = &l_1276[1][0][4];
                    int32_t *l_1296 = &g_74[0];
                    int32_t *l_1297 = &g_74[0];
                    int32_t *l_1298[1];
                    int16_t l_1299 = 0xF3C2L;
                    uint64_t l_1304 = 18446744073709551615UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1298[i] = &g_108.f2;
                    l_1304--;
                }
                else
                { 
                    return l_1307;
                }
            }
            if (l_1307.f2)
                goto lbl_1308;
            ++l_1310;
            if ((((+(l_1257 , l_1307.f1)) , l_1314) != ((p_10.f0 == p_11) , l_1319[1][2][0])))
            { 
                uint8_t ****l_1325 = &l_1287[3];
                int32_t l_1326 = 1L;
                int32_t l_1327 = (-1L);
                int32_t l_1328 = 0x661D1A84L;
                int32_t l_1329 = (-9L);
                int32_t l_1330 = 0xA026A669L;
                int32_t l_1331 = 6L;
                int32_t l_1332[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1332[i] = (-3L);
                for (l_1293 = 16; (l_1293 < (-7)); --l_1293)
                { 
                    int16_t l_1322 = 0x7845L;
                    uint8_t *****l_1324[2][6] = {{(void*)0,&g_1323,&g_1323,(void*)0,&g_1323,&g_1323},{(void*)0,&g_1323,&g_1323,(void*)0,&g_1323,&g_1323}};
                    int i, j;
                    l_1262[0] = ((l_1322 , p_10.f0) , p_10.f0);
                    l_1325 = ((*l_1285) = g_1323);
                }
                l_1333--;
                return g_154;
            }
            else
            { 
                uint32_t l_1339 = 0UL;
                int32_t l_1340 = 0xC8E302B6L;
                uint32_t l_1341 = 18446744073709551613UL;
                const uint32_t l_1368 = 4294967295UL;
                const struct S0 l_1370[3][7][3] = {{{{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{0x95C9L,-1L,0x64B5B340L,0xDFE6EC2BL,0x12CC371DL}},{{65535UL,1L,0xB4606141L,0x66D2A4C9L,0xA1A38C57L},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{65531UL,5L,0xADE89938L,0L,0UL}},{{0x0E0AL,-7L,0UL,7L,18446744073709551613UL},{1UL,0L,0x4754EED7L,0xC1EBBB60L,18446744073709551613UL},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L}},{{0x8B0FL,-1L,7UL,0xC2B87643L,0UL},{0UL,-5L,0UL,0x71ED7AAEL,3UL},{0UL,1L,0x8F61A505L,0x9480C1D7L,0x5EF68F7AL}},{{0x5D0AL,-10L,0xD138D96FL,-4L,0UL},{0x0E0AL,-7L,0UL,7L,18446744073709551613UL},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L}},{{65529UL,0xBDB981EBL,0xCB63F51BL,0x66F182DCL,0x9C987A08L},{65531UL,5L,0xADE89938L,0L,0UL},{65531UL,5L,0xADE89938L,0L,0UL}},{{65535UL,0xC732B300L,18446744073709551608UL,-1L,0x6B5C1082L},{0x2DBEL,0L,18446744073709551615UL,0x706AB6BEL,0UL},{0x95C9L,-1L,0x64B5B340L,0xDFE6EC2BL,0x12CC371DL}}},{{{65535UL,0xC732B300L,18446744073709551608UL,-1L,0x6B5C1082L},{0x95C9L,-1L,0x64B5B340L,0xDFE6EC2BL,0x12CC371DL},{0x5D0AL,-10L,0xD138D96FL,-4L,0UL}},{{65529UL,0xBDB981EBL,0xCB63F51BL,0x66F182DCL,0x9C987A08L},{65535UL,1L,0xB4606141L,0x66D2A4C9L,0xA1A38C57L},{0UL,6L,1UL,0xADFC2A3FL,0x471729C2L}},{{0x5D0AL,-10L,0xD138D96FL,-4L,0UL},{0x8B0FL,-1L,7UL,0xC2B87643L,0UL},{0xA9A8L,-7L,0x3171164AL,1L,18446744073709551615UL}},{{0x8B0FL,-1L,7UL,0xC2B87643L,0UL},{65535UL,1L,0xB4606141L,0x66D2A4C9L,0xA1A38C57L},{0xCDB4L,1L,18446744073709551615UL,0L,1UL}},{{0x0E0AL,-7L,0UL,7L,18446744073709551613UL},{0x95C9L,-1L,0x64B5B340L,0xDFE6EC2BL,0x12CC371DL},{0x0E0AL,-7L,0UL,7L,18446744073709551613UL}},{{65535UL,1L,0xB4606141L,0x66D2A4C9L,0xA1A38C57L},{0x2DBEL,0L,18446744073709551615UL,0x706AB6BEL,0UL},{0x0E0AL,-7L,0UL,7L,18446744073709551613UL}},{{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{65531UL,5L,0xADE89938L,0L,0UL},{0xCDB4L,1L,18446744073709551615UL,0L,1UL}}},{{{0xCDB4L,1L,18446744073709551615UL,0L,1UL},{0x0E0AL,-7L,0UL,7L,18446744073709551613UL},{0xA9A8L,-7L,0x3171164AL,1L,18446744073709551615UL}},{{0x2DBEL,0L,18446744073709551615UL,0x706AB6BEL,0UL},{0UL,-5L,0UL,0x71ED7AAEL,3UL},{0UL,6L,1UL,0xADFC2A3FL,0x471729C2L}},{{0xCDB4L,1L,18446744073709551615UL,0L,1UL},{1UL,0L,0x4754EED7L,0xC1EBBB60L,18446744073709551613UL},{0x5D0AL,-10L,0xD138D96FL,-4L,0UL}},{{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{0x95C9L,-1L,0x64B5B340L,0xDFE6EC2BL,0x12CC371DL}},{{65535UL,1L,0xB4606141L,0x66D2A4C9L,0xA1A38C57L},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L},{65531UL,5L,0xADE89938L,0L,0UL}},{{0x0E0AL,-7L,0UL,7L,18446744073709551613UL},{1UL,0L,0x4754EED7L,0xC1EBBB60L,18446744073709551613UL},{0xFA12L,0x024B19A1L,0x61E67598L,-1L,0x31F0ECA4L}},{{0x8B0FL,-1L,7UL,0xC2B87643L,0UL},{0UL,-5L,0UL,0x71ED7AAEL,3UL},{0UL,1L,0x8F61A505L,0x9480C1D7L,0x5EF68F7AL}}}};
                const int32_t *l_1372[1][6];
                const int32_t **l_1371 = &l_1372[0][3];
                int32_t l_1375 = 0L;
                int8_t l_1377[4][4][5] = {{{0xC3L,0xB9L,0xB2L,0xC3L,0x20L},{0x23L,7L,0x45L,7L,0x23L},{0xB2L,0x3CL,0xB9L,0x20L,0x3CL},{0x23L,0x37L,0xEEL,0x7FL,0x51L}},{{0xC3L,(-2L),(-9L),0x3CL,0x3CL},{(-1L),0x7FL,(-1L),0x77L,0x23L},{0x3CL,0xB9L,0x20L,0x3CL,0x20L},{5L,0xEEL,5L,0x37L,0x51L}},{{7L,0x20L,0x27L,0x27L,0x20L},{0x51L,0xFBL,1L,0x77L,0xB2L},{0xB9L,0x20L,0x3CL,0x20L,0xB9L},{1L,0xEEL,0x45L,0x59L,(-1L)}},{{0xB9L,(-9L),(-9L),0xB9L,0x27L},{0x51L,0x37L,5L,0xEEL,(-1L)},{7L,0xB9L,7L,0x27L,0xB9L},{(-1L),0xFBL,0xB2L,0xEEL,0xB2L}}};
                int64_t l_1380[6] = {(-1L),(-1L),0L,(-1L),(-1L),0L};
                int32_t l_1381 = 0x7BD7F507L;
                int32_t l_1383 = 0xF4E91E4DL;
                int32_t l_1385 = 0x303E8D1AL;
                int32_t l_1386 = 0x756F8147L;
                int32_t l_1387[7] = {0x4286122EL,0x4286122EL,0xC704EBE8L,0x4286122EL,0x4286122EL,0xC704EBE8L,0x4286122EL};
                int32_t l_1388 = 0xB4370A6CL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1372[i][j] = &g_76;
                }
                if (l_1236)
                { 
                    uint64_t l_1336 = 18446744073709551611UL;
                    ++l_1336;
                    if (l_1307.f3)
                        goto lbl_1308;
                    l_1339 = (-6L);
                }
                else
                { 
                    union U1 ***l_1350 = &g_244[0];
                    l_1341++;
                    p_10.f0 = l_1344;
                    (*g_890) = func_31(((-3L) != (p_10.f0 || (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x2745L, (safe_unary_minus_func_int64_t_s(p_10.f0)))), (l_1350 == (l_1262[0] , l_1351)))))), g_1197.f4);
                }
                if ((l_1356[2][0][0] ^= (safe_sub_func_uint16_t_u_u((&l_1247 != &p_11), l_1341))))
                { 
                    int32_t **l_1369 = (void*)0;
                    int32_t l_1373 = (-1L);
                    int32_t *l_1376 = (void*)0;
                    int32_t l_1379 = 0x15744528L;
                    int32_t l_1382 = 0x94B5CEFAL;
                    int32_t l_1384[7] = {0x771DC728L,0x771DC728L,0x771DC728L,0x771DC728L,0x771DC728L,0x771DC728L,0x771DC728L};
                    int64_t l_1390 = 0x7C0C3FC117FEA73FLL;
                    uint16_t l_1392 = 1UL;
                    int i;
                    l_1375 ^= ((p_11 , l_1357[0][2]) == ((1L <= (+(safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_1368 && (((l_1369 == (((p_11 == (((l_1370[1][4][0] , g_6[1]) ^ 0xE7AF070307AE807ALL) > 0xB301L)) >= (**g_151)) , l_1371)) != g_6[2]) != p_11)), p_11)), (**l_1371))), 14)), l_1373)))) , l_1374));
                    (*g_890) = &l_1276[2][0][4];
                    l_1376 = &l_1276[2][0][4];
                    if (p_10.f0)
                        continue;
                    l_1392++;
                }
                else
                { 
                    struct S0 l_1395 = {0UL,0x625E0179L,0x01762FC4L,-1L,18446744073709551615UL};
                    return l_1395;
                }
            }
        }
        if ((p_10.f2 | g_1197.f3))
        { 
            int32_t * const l_1396 = (void*)0;
            int32_t **l_1397[3][4] = {{&g_833[4][3],&g_75[2][6][2],&g_833[4][3],&g_833[4][3]},{&g_75[2][6][2],&g_75[2][6][2],&g_833[1][0],&g_75[2][6][2]},{&g_75[2][6][2],&g_833[4][3],&g_833[4][3],&g_75[2][6][2]}};
            int32_t **l_1398 = (void*)0;
            int32_t **l_1399 = &g_833[4][3];
            int i, j;
            (*l_1399) = l_1396;
            return g_154;
        }
        else
        { 
            const uint64_t l_1402 = 18446744073709551613UL;
            int32_t l_1428 = 1L;
            int32_t l_1436 = 0xE224B90AL;
            int32_t l_1438 = 2L;
            int64_t l_1439 = 0xF427B8E3B64C02C1LL;
            int32_t l_1440 = 0xC123CADEL;
            int32_t l_1441[2];
            int32_t *l_1446[1][5] = {{&l_1262[0],&l_1262[0],&l_1262[0],&l_1262[0],&l_1262[0]}};
            struct S0 l_1447 = {65535UL,0xD1C28EACL,0UL,0L,18446744073709551610UL};
            uint32_t l_1469 = 0x99DF4144L;
            int64_t *l_1471 = &l_1439;
            int8_t * const * const l_1492[1][4][1] = {{{&l_1318},{&l_1318},{&l_1318},{&l_1318}}};
            uint8_t l_1503 = 0x14L;
            union U1 *l_1524 = &l_1470[3][0];
            uint64_t *l_1531 = &l_1528[1][1];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1441[i] = 0x69C115FAL;
            for (g_76 = 0; (g_76 != 9); g_76 = safe_add_func_int64_t_s_s(g_76, 3))
            { 
                uint8_t * const ** const **l_1425 = &l_1422;
                int32_t l_1427 = 0x30E25609L;
                int32_t l_1434 = 0x4627110AL;
                int32_t l_1435[7];
                uint8_t l_1442 = 0UL;
                uint16_t l_1452 = 0xE027L;
                struct S0 l_1455[6] = {{65535UL,4L,0x5CC2BB41L,3L,8UL},{0xDB19L,0L,0UL,0L,0x60E5A07BL},{65535UL,4L,0x5CC2BB41L,3L,8UL},{65535UL,4L,0x5CC2BB41L,3L,8UL},{0xDB19L,0L,0UL,0L,0x60E5A07BL},{65535UL,4L,0x5CC2BB41L,3L,8UL}};
                int i;
                for (i = 0; i < 7; i++)
                    l_1435[i] = (-1L);
                if (l_1402)
                { 
                    int64_t *l_1411 = (void*)0;
                    int64_t *l_1412 = &l_1236;
                    int32_t l_1419 = 0xB7640C1BL;
                    struct S0 l_1420 = {0xF5D8L,-4L,6UL,-1L,0xD8C397D5L};
                    int32_t *l_1426[2][1];
                    uint8_t l_1429 = 0xD3L;
                    int32_t l_1433 = 0x3DA672D5L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1426[i][j] = &l_1419;
                    }
                    l_1419 &= (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((void*)0 != l_1407), (~(((p_10.f0 , p_10.f2) || ((*l_1412) ^= 0x2E0A7C2C07D93BC6LL)) == (safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(((0xCE6A9E1CL >= g_108.f0) > p_10.f0), (*g_178))), p_10.f2)) < p_11), 0x80L)))))), 2));
                    p_10.f0 |= (((l_1420 , &g_1323) == (l_1425 = l_1421)) ^ p_11);
                    --l_1429;
                    ++l_1442;
                }
                else
                { 
                    int32_t *l_1445 = (void*)0;
                    l_1446[0][2] = l_1445;
                    p_10.f2 |= l_1427;
                    return l_1447;
                }
                for (g_154.f0 = 0; (g_154.f0 <= 12); g_154.f0++)
                { 
                    int32_t l_1450[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1450[i] = (-6L);
                    --l_1452;
                    return l_1455[1];
                }
            }
            l_1446[0][2] = ((**g_889) = &l_1262[3]);
            for (l_1440 = 0; (l_1440 <= 2); l_1440 += 1)
            { 
                uint16_t l_1479 = 4UL;
                int32_t l_1482 = 0x0F6077BEL;
                union U1 *l_1486 = &l_1470[0][0];
                uint32_t *l_1487 = &l_1257.f2;
                int32_t ****l_1491 = (void*)0;
                uint16_t l_1499 = 0x18D3L;
                int32_t l_1502 = 1L;
                int i;
                for (g_20 = 2; (g_20 >= 0); g_20 -= 1)
                { 
                    int32_t *l_1473 = (void*)0;
                    struct S0 *l_1475 = &g_154;
                    struct S0 **l_1474[7][1][1] = {{{(void*)0}},{{&l_1475}},{{&l_1475}},{{(void*)0}},{{&l_1475}},{{&l_1475}},{{(void*)0}}};
                    int32_t l_1478[7][2] = {{0xFC5D3156L,3L},{0x69E03E0BL,0x69E03E0BL},{3L,0xFC5D3156L},{0xAF0E0F16L,0xFC5D3156L},{3L,0x69E03E0BL},{0x69E03E0BL,3L},{0xFC5D3156L,0xAF0E0F16L}};
                    int i, j, k;
                    g_833[4][3] = ((**g_889) = l_1473);
                    g_1476 = &g_154;
                    p_10.f2 &= 0x992BD00AL;
                    ++l_1479;
                    p_10.f0 = g_127[g_20];
                }
                l_1482 ^= g_127[l_1440];
                if ((~((**g_151) , ((p_11 != (g_513[1] || (((((*g_558) = 0xA7D545BC46D44444LL) | (g_108.f0 , (safe_mod_func_int64_t_s_s((l_1257 , (((*l_1487) = ((((*g_1476) , l_1486) != &p_10) > 4294967286UL)) , g_67)), 0x31CE739B14D13755LL)))) , g_218) <= 3UL))) , g_127[l_1440]))))
                { 
                    int64_t l_1490 = 8L;
                    int32_t *l_1495 = &l_1307.f1;
                    int32_t l_1496 = 0xDFE7FE71L;
                    int32_t l_1497 = 1L;
                    l_1482 |= (safe_lshift_func_uint16_t_u_s(((((((((p_10.f2 <= l_1490) != (*g_558)) < ((((&l_1358 == l_1491) || p_11) , l_1492[0][2][0]) == g_1493[6][0][4])) , l_1490) < l_1490) , l_1495) != &p_11) | 0x3B923481B2D1B1B8LL), p_10.f0));
                    l_1499++;
                    if (p_11)
                        break;
                    l_1503++;
                }
                else
                { 
                    int64_t l_1506[6][5] = {{(-1L),0xC461FE6177191C57LL,0x8C605A35CDE83B1DLL,(-1L),0x9C240A22D1153ACALL},{0xCAB39FF5EBFA9AC3LL,0x8C605A35CDE83B1DLL,0x8C605A35CDE83B1DLL,0xCAB39FF5EBFA9AC3LL,0xFA7663B7217CBDD8LL},{0xCAB39FF5EBFA9AC3LL,0xC461FE6177191C57LL,0x60E9185466AEC197LL,0xCAB39FF5EBFA9AC3LL,0x9C240A22D1153ACALL},{(-1L),0xC461FE6177191C57LL,0x8C605A35CDE83B1DLL,(-1L),0x9C240A22D1153ACALL},{0xCAB39FF5EBFA9AC3LL,0x8C605A35CDE83B1DLL,0x8C605A35CDE83B1DLL,0xCAB39FF5EBFA9AC3LL,0xFA7663B7217CBDD8LL},{0xCAB39FF5EBFA9AC3LL,0xC461FE6177191C57LL,0x60E9185466AEC197LL,0xCAB39FF5EBFA9AC3LL,0x9C240A22D1153ACALL}};
                    int32_t l_1507 = 0x42A7E7BDL;
                    const union U1 *l_1513 = &g_108;
                    const union U1 **l_1514 = (void*)0;
                    const union U1 **l_1515 = &l_1513;
                    int64_t *l_1526 = &l_1236;
                    int64_t *l_1527 = &l_1470[0][0].f3;
                    int i, j;
                    l_1508[0]--;
                    l_1451 &= (safe_rshift_func_int8_t_s_u((((*l_1471) = (&p_10 != ((*l_1515) = l_1513))) && (l_1507 &= ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((*l_1471) = (+(l_1524 == (p_11 , (l_1525 = &l_1470[0][0]))))), ((g_637[2][0] = (((((p_11 == (((*l_1526) = l_1506[2][1]) >= (*g_558))) > p_10.f0) || (*g_558)) <= p_10.f0) && 65535UL)) , 0UL))), p_10.f0)) & 0x7DL), p_10.f2)))) , p_11))), l_1506[2][1]));
                    if (p_10.f0)
                        break;
                }
                --l_1528[0][1];
            }
            (**g_889) = &l_1440;
            (*g_890) = &l_1436;
        }
        for (l_1236 = 9; (l_1236 == (-25)); l_1236 = safe_sub_func_int32_t_s_s(l_1236, 5))
        { 
            uint32_t l_1537 = 0x21E50944L;
            uint32_t **l_1546[3];
            struct S0 l_1549 = {0x4DF7L,-4L,0x954D1C18L,0x80C1A514L,0x9915E947L};
            int32_t l_1551 = 0L;
            int32_t l_1559[7][7][3] = {{{(-8L),0x550D1C36L,0x3D98EC93L},{4L,0x07E97CEFL,4L},{0x3D98EC93L,0x550D1C36L,(-8L)},{0x6BFDA16AL,0x62C79CF5L,1L},{(-7L),0x26AF001FL,1L},{0L,(-5L),5L},{(-7L),0xA3DF46DCL,(-1L)}},{{0x6BFDA16AL,(-1L),0x2DF87CE5L},{0x3D98EC93L,0x41C1C447L,1L},{4L,(-1L),0x2DF87CE5L},{(-8L),0x5C51606BL,(-1L)},{1L,0x5F9DD316L,5L},{1L,1L,1L},{5L,0x5F9DD316L,1L}},{{(-1L),0x5C51606BL,(-8L)},{0x2DF87CE5L,(-1L),4L},{1L,0x83AFA34CL,0x04E045D9L},{(-8L),0L,(-9L)},{8L,1L,0x7916A297L},{(-1L),0xC5254623L,0x6737617BL},{0x642B26D7L,(-3L),0x7916A297L}},{{1L,0x2DF87CE5L,(-9L)},{(-5L),0x3D98EC93L,0x04E045D9L},{(-8L),1L,(-8L)},{0x04E045D9L,0x3D98EC93L,(-5L)},{(-9L),0x2DF87CE5L,1L},{0x7916A297L,(-3L),0x642B26D7L},{0x6737617BL,0xC5254623L,(-1L)}},{{0x7916A297L,1L,8L},{(-9L),0L,(-8L)},{0x04E045D9L,0x83AFA34CL,8L},{(-8L),0x8DA6E824L,(-8L)},{(-5L),(-7L),8L},{1L,5L,(-1L)},{0x642B26D7L,0xAC366254L,0x642B26D7L}},{{(-1L),5L,1L},{8L,(-7L),(-5L)},{(-8L),0x8DA6E824L,(-8L)},{8L,0x83AFA34CL,0x04E045D9L},{(-8L),0L,(-9L)},{8L,1L,0x7916A297L},{(-1L),0xC5254623L,0x6737617BL}},{{0x642B26D7L,(-3L),0x7916A297L},{1L,0x2DF87CE5L,(-9L)},{(-5L),0x3D98EC93L,0x04E045D9L},{(-8L),1L,(-8L)},{0x04E045D9L,0x3D98EC93L,(-5L)},{(-9L),0x2DF87CE5L,1L},{0x7916A297L,(-3L),0x642B26D7L}}};
            uint32_t l_1562 = 1UL;
            int16_t l_1581 = 0xBD7AL;
            uint8_t l_1587 = 247UL;
            int32_t l_1594 = 0x0817AB0AL;
            const int32_t *l_1599 = &l_1559[6][0][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1546[i] = &l_1319[3][1][0];
            p_10.f0 ^= l_1537;
            for (g_1472 = 4; (g_1472 >= 0); g_1472 -= 1)
            { 
                uint16_t l_1550[5];
                int32_t l_1553 = 9L;
                int32_t l_1554 = 0xE1838B9BL;
                int32_t l_1555 = 0x1621AB43L;
                int32_t l_1556 = 6L;
                int32_t l_1557 = 0x52A2E370L;
                int32_t l_1558 = 0L;
                int32_t l_1560[7][2] = {{(-3L),0xFC460EE3L},{0xFC460EE3L,(-3L)},{0xFC460EE3L,0xFC460EE3L},{(-3L),0xFC460EE3L},{0xFC460EE3L,(-3L)},{0xFC460EE3L,0xFC460EE3L},{(-3L),0xFC460EE3L}};
                int16_t l_1561 = (-1L);
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1550[i] = 65531UL;
                for (g_1477.f1 = 0; (g_1477.f1 <= 4); g_1477.f1 += 1)
                { 
                    uint32_t **l_1545 = &l_1319[0][5][0];
                    int32_t *l_1552[1];
                    int64_t *l_1582[4];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1552[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_1582[i] = &g_1096[0];
                    l_1551 |= (safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~((l_1545 != l_1546[2]) & g_6[(g_1472 + 1)])), (l_1470[0][0].f0 = ((((safe_sub_func_int16_t_s_s(0xAA88L, 0x5784L)) < g_6[(g_1472 + 1)]) , l_1549) , p_11)))), 0xEDL)) & (*g_1494)), l_1550[3]));
                    l_1562++;
                    p_10.f2 = ((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((l_1470[0][0].f0 = (((--(*l_1314)) , ((!(l_1562 != (l_1559[5][1][1] = (safe_add_func_uint64_t_u_u((*g_558), l_1576))))) <= (safe_mod_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((&g_263[4] != (l_1560[5][1] , &l_1317)), (*g_1494))) || 0x53CBL) | p_10.f2), l_1581)))) && p_10.f0)), 18446744073709551612UL)), (-8L))) && g_154.f3), p_10.f0)) <= l_1549.f1);
                    if (l_1549.f2)
                        continue;
                    ++l_1583;
                }
                l_1262[0] ^= g_6[g_1472];
                (*g_890) = &l_1559[5][1][1];
                if (p_10.f2)
                    continue;
                if ((p_10.f0 = (g_74[0] | ((void*)0 != &g_70[0]))))
                { 
                    int32_t *l_1586[5];
                    int32_t l_1593 = 1L;
                    uint32_t l_1595 = 7UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1586[i] = &l_1293;
                    l_1587--;
                    l_1590[1]++;
                    l_1559[5][1][1] = l_1581;
                    --l_1595;
                    if (g_1598)
                        break;
                }
                else
                { 
                    uint16_t l_1601 = 65533UL;
                    int32_t *l_1602[7][5][3] = {{{&l_1300,&l_1470[0][0].f2,&l_1555},{&l_1303[0],&g_76,&l_1558},{&l_1559[1][4][2],&l_1470[0][0].f2,&g_6[(g_1472 + 2)]},{&l_1559[0][5][2],&l_1470[0][0].f2,&l_1470[0][0].f2},{&l_1556,&g_76,&l_1557}},{{&l_1262[0],&l_1470[0][0].f2,&g_74[1]},{(void*)0,&l_1470[0][0].f2,&g_76},{(void*)0,&g_76,&g_76},{&l_1559[6][0][1],&l_1470[0][0].f2,&g_74[0]},{&l_1300,&l_1470[0][0].f2,&l_1555}},{{&l_1303[0],&g_76,&l_1558},{&l_1559[1][4][2],&l_1470[0][0].f2,&g_6[(g_1472 + 2)]},{&l_1559[0][5][2],&l_1470[0][0].f2,&l_1470[0][0].f2},{&l_1556,&g_76,&l_1557},{&l_1262[0],&l_1470[0][0].f2,&g_74[1]}},{{(void*)0,&l_1470[0][0].f2,&g_76},{(void*)0,&g_76,&g_76},{&l_1559[6][0][1],&l_1470[0][0].f2,&g_74[0]},{&l_1300,&l_1470[0][0].f2,&l_1555},{&l_1303[0],&g_76,&l_1558}},{{&l_1559[1][4][2],&l_1470[0][0].f2,&g_6[(g_1472 + 2)]},{&l_1559[0][5][2],&l_1470[0][0].f2,&l_1470[0][0].f2},{&l_1556,&g_76,&l_1557},{&l_1262[0],&l_1470[0][0].f2,&g_74[1]},{(void*)0,&l_1470[0][0].f2,&g_76}},{{(void*)0,&g_76,&g_76},{&l_1559[6][0][1],(void*)0,&l_1553},{&l_1470[0][0].f2,(void*)0,&g_6[6]},{&g_74[1],&l_1551,&g_108.f0},{&g_76,(void*)0,&g_6[g_1472]}},{{&l_1555,(void*)0,(void*)0},{&g_6[(g_1472 + 2)],&l_1551,&l_1303[0]},{&l_1557,(void*)0,&l_1559[1][3][1]},{&g_76,(void*)0,&l_1551},{&g_74[0],&l_1551,&l_1303[0]}}};
                    int i, j, k;
                    g_1600[1][0] = l_1599;
                    if (l_1601)
                        continue;
                    l_1551 ^= p_11;
                    --l_1604[3];
                    p_10.f0 ^= ((safe_sub_func_int8_t_s_s(1L, (safe_add_func_int8_t_s_s((*g_1494), (-2L))))) , (safe_rshift_func_uint16_t_u_s(((((void*)0 == &g_888) > 0xE6L) , (safe_add_func_int16_t_s_s((((((*g_1494) = (g_1615 &= 0xFFL)) >= (*g_922)) | p_11) , g_1096[1]), l_1616))), 6)));
                }
            }
            if (p_10.f0)
                break;
        }
        return l_1257;
    }
}



static union U1  func_12(uint8_t  p_13, uint8_t  p_14, const struct S0  p_15, const int32_t * p_16, int32_t * p_17)
{ 
    int32_t *l_1198[6];
    uint8_t **l_1213 = &g_360;
    uint64_t l_1214[5];
    uint64_t l_1215 = 0xFD9A5ABE759E798ALL;
    uint8_t l_1216 = 247UL;
    union U1 l_1235[4] = {{0x81B64690L},{0x81B64690L},{0x81B64690L},{0x81B64690L}};
    int i;
    for (i = 0; i < 6; i++)
        l_1198[i] = &g_108.f2;
    for (i = 0; i < 5; i++)
        l_1214[i] = 0x7819F91056AA4D62LL;
    (*g_890) = (l_1198[2] = p_17);
    (*p_17) = ((safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(65529UL, (+((safe_add_func_int8_t_s_s(g_1197.f1, 0x2DL)) || ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*p_17), p_15.f1)), (*g_360))) , ((((((void*)0 != &g_424) , g_1212) != l_1213) , &g_1212) == (void*)0)))))) , l_1214[3]), l_1215)) | g_424) | p_15.f0), 7)) | 0xBEL);
    (*g_890) = l_1198[2];
    l_1216 ^= (*p_16);
    for (g_424 = (-24); (g_424 <= (-14)); ++g_424)
    { 
        int64_t l_1219 = (-1L);
        union U1 l_1234 = {0x59CA4FB4L};
        if (l_1219)
            break;
        (*p_17) |= (safe_rshift_func_uint8_t_u_s(((&g_522 != ((safe_mod_func_uint16_t_u_u(p_15.f3, g_1197.f1)) , g_1224)) >= (((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((~0UL), l_1219)), (-3L))), l_1219)) ^ 0x0D65098BL) ^ (-1L))), p_15.f4));
        for (g_654 = (-24); (g_654 > (-19)); ++g_654)
        { 
            (**g_889) = p_17;
        }
        return l_1234;
    }
    return l_1235[1];
}



static union U1  func_21(int32_t * p_22, uint8_t  p_23, uint8_t  p_24)
{ 
    int8_t l_1135 = (-4L);
    int32_t l_1144 = 0x85AF9974L;
    int32_t ***l_1170 = &g_890;
    int32_t ***l_1171 = &g_890;
    uint64_t *l_1172[1];
    int32_t l_1173 = 1L;
    uint32_t l_1174[5] = {0x54117A6FL,0x54117A6FL,0x54117A6FL,0x54117A6FL,0x54117A6FL};
    int32_t *l_1175 = &g_74[0];
    uint32_t *l_1178 = &g_70[0];
    const int32_t *l_1184 = (void*)0;
    const int32_t **l_1183 = &l_1184;
    const int32_t ***l_1182 = &l_1183;
    const int32_t ****l_1181 = &l_1182;
    int32_t *****l_1189 = (void*)0;
    int32_t *****l_1190 = (void*)0;
    int32_t *****l_1191 = &g_1185[4];
    int32_t *****l_1192 = (void*)0;
    int32_t ****l_1194 = (void*)0;
    int32_t *****l_1193 = &l_1194;
    union U1 l_1195 = {1L};
    int i;
    for (i = 0; i < 1; i++)
        l_1172[i] = &g_263[1];
    for (g_154.f3 = 1; (g_154.f3 >= 0); g_154.f3 -= 1)
    { 
        uint8_t **l_1147 = &g_360;
        int i;
        if (g_127[g_154.f3])
            break;
        for (g_154.f2 = 0; (g_154.f2 <= 1); g_154.f2 += 1)
        { 
            int64_t *l_1143[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t l_1145 = (-1L);
            uint8_t **l_1146 = (void*)0;
            int32_t l_1158 = 0xC7C4EEAFL;
            int i;
            (*g_890) = func_31(((((p_22 != (void*)0) ^ (safe_rshift_func_int8_t_s_s(l_1135, 1))) , p_23) ^ ((safe_add_func_uint32_t_u_u((+(&g_67 != (((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((*g_558) = p_23), ((l_1144 ^= ((p_24 >= (-5L)) ^ p_24)) == l_1145))) || g_513[0]), 0xBE9BL)) | (-1L)) , p_22))), 0x044ABBA8L)) > 0x68L)), g_127[g_154.f3]);
            for (p_23 = 0; (p_23 <= 1); p_23 += 1)
            { 
                int32_t *l_1148[2];
                uint32_t l_1159[6][1][7] = {{{0UL,0x6893FA7FL,0x6893FA7FL,0UL,0x6893FA7FL,0x6893FA7FL,0UL}},{{0xF25A267DL,9UL,0xF25A267DL,0xF25A267DL,9UL,0xF25A267DL,0xF25A267DL}},{{0UL,0UL,18446744073709551615UL,0UL,0UL,18446744073709551615UL,0UL}},{{9UL,0xF25A267DL,0xF25A267DL,9UL,0xF25A267DL,0xF25A267DL,9UL}},{{0x6893FA7FL,0UL,0x6893FA7FL,0x6893FA7FL,0UL,0x6893FA7FL,0x6893FA7FL}},{{9UL,9UL,18446744073709551614UL,9UL,9UL,18446744073709551614UL,9UL}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1148[i] = &g_74[0];
                l_1144 = (l_1146 != l_1147);
                for (g_424 = 2; (g_424 >= 0); g_424 -= 1)
                { 
                    const uint16_t l_1149 = 0x4FE8L;
                    uint64_t *l_1157 = &g_263[4];
                    l_1158 |= ((l_1149 == ((*g_558) >= ((*l_1157) = ((((p_23 > 4294967292UL) & ((6UL & (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((!((safe_mul_func_int8_t_s_s(p_23, 1L)) <= l_1149)), 0xA3L)), l_1144))) & g_127[g_154.f3])) , l_1145) >= g_127[g_154.f3])))) > g_127[0]);
                    if (p_24)
                        continue;
                    if (l_1159[5][0][3])
                        break;
                }
                g_75[(g_154.f3 + 1)][(g_154.f3 + 3)][(p_23 + 1)] = func_31(p_23, g_154.f1);
            }
        }
    }
    (*l_1175) &= (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_1144 != (*g_558)), (safe_mul_func_uint16_t_u_u((&g_151 != (void*)0), ((((safe_rshift_func_int8_t_s_s((p_23 < (g_263[4] &= (l_1173 ^= (safe_add_func_uint16_t_u_u(((l_1170 = l_1170) != l_1171), 5L))))), 0)) < 0UL) && (*g_558)) < g_108.f0))))), l_1174[2]));
    (**g_889) = func_31((*l_1175), ((p_23 & ((-8L) ^ ((p_24 & (p_24 , (safe_mul_func_uint32_t_u_u((--(*l_1178)), (l_1181 != ((*l_1193) = ((*l_1191) = g_1185[2]))))))) != (*l_1175)))) || (*l_1175)));
    return l_1195;
}



static int32_t * func_25(int32_t * p_26, const uint64_t  p_27, uint64_t  p_28, int8_t * p_29, uint64_t  p_30)
{ 
    int32_t *l_861 = &g_74[0];
    uint32_t *l_866 = &g_70[0];
    union U1 l_867 = {1L};
    int32_t *l_868 = &g_74[0];
    int64_t *l_874 = &g_175;
    int32_t **l_885 = &g_833[4][3];
    int32_t ***l_884 = &l_885;
    int32_t ****l_883 = &l_884;
    int32_t ****l_886 = (void*)0;
    int32_t *****l_887[6][7][3] = {{{&l_883,&l_883,&l_883},{(void*)0,&l_886,&l_883},{&g_522,(void*)0,(void*)0},{&l_883,&l_883,(void*)0},{&l_883,&l_883,&l_883},{(void*)0,&l_886,&l_886},{&l_886,&l_883,&l_886}},{{&l_886,(void*)0,&l_886},{&l_886,&g_522,&l_883},{&l_886,(void*)0,(void*)0},{&l_883,&l_886,(void*)0},{&l_883,(void*)0,&l_883},{&l_886,&g_522,&l_883},{&l_886,&l_883,(void*)0}},{{&l_883,&l_883,&l_883},{(void*)0,&g_522,&g_522},{&l_883,&l_883,&l_886},{&l_886,&l_886,(void*)0},{&l_886,&g_522,(void*)0},{&l_883,&g_522,&g_522},{&l_883,&l_883,&l_886}},{{&l_886,&l_886,&l_883},{&l_886,&l_883,(void*)0},{&l_886,&l_883,&l_886},{&l_886,&l_883,&g_522},{(void*)0,&l_886,&g_522},{&l_883,&l_883,&l_886},{&l_883,&g_522,&l_886}},{{&g_522,&g_522,&l_883},{(void*)0,&l_886,&l_883},{&l_883,&l_883,&g_522},{&g_522,&g_522,&l_883},{&l_883,&l_883,&g_522},{&l_883,&l_883,&l_883},{&g_522,&g_522,&l_883}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_522,(void*)0},{(void*)0,(void*)0,&g_522},{(void*)0,&l_883,&l_883},{&l_886,&g_522,&l_886},{&l_886,&l_883,&l_883},{&l_886,&l_883,&g_522}}};
    uint64_t *l_892[4][3] = {{&g_263[3],&g_263[1],&g_263[3]},{&g_263[2],&g_263[2],&g_263[2]},{&g_263[3],&g_263[1],&g_263[3]},{&g_263[2],&g_263[2],&g_263[2]}};
    const uint16_t *l_893 = &g_647;
    struct S0 l_898[4][7] = {{{0x7AF1L,0xE62B9B90L,0xA1A39D0EL,-10L,0xB43F2BC1L},{0xF540L,0x865EADD4L,0x3AECC434L,1L,0x2D5012ADL},{0x7AFAL,0x20BF25E7L,0UL,-2L,0x94F58B8FL},{0xF9DBL,-9L,0x134CE1FDL,0x42BC8193L,0xD7CB6904L},{0x7AFAL,0x20BF25E7L,0UL,-2L,0x94F58B8FL},{0xF540L,0x865EADD4L,0x3AECC434L,1L,0x2D5012ADL},{0x7AF1L,0xE62B9B90L,0xA1A39D0EL,-10L,0xB43F2BC1L}},{{0xF540L,0x865EADD4L,0x3AECC434L,1L,0x2D5012ADL},{0UL,-1L,0x80D40DC4L,1L,5UL},{65535UL,6L,0xC7DA92F4L,0x7D8D4DF1L,0x4BF9E88CL},{65530UL,-3L,6UL,0L,0x26E12667L},{0xDA7EL,0x349CB243L,0x85D64270L,0xB9B41AFCL,18446744073709551609UL},{0x7AFAL,0x20BF25E7L,0UL,-2L,0x94F58B8FL},{0xDA7EL,0x349CB243L,0x85D64270L,0xB9B41AFCL,18446744073709551609UL}},{{0xF540L,0x865EADD4L,0x3AECC434L,1L,0x2D5012ADL},{0xDA7EL,0x349CB243L,0x85D64270L,0xB9B41AFCL,18446744073709551609UL},{0xDA7EL,0x349CB243L,0x85D64270L,0xB9B41AFCL,18446744073709551609UL},{0xF540L,0x865EADD4L,0x3AECC434L,1L,0x2D5012ADL},{0x4C32L,-1L,8UL,0x667B8D8CL,0xEA329793L},{65529UL,-1L,18446744073709551615UL,-9L,0x34A1A3F0L},{0xF9DBL,-9L,0x134CE1FDL,0x42BC8193L,0xD7CB6904L}},{{0x7AF1L,0xE62B9B90L,0xA1A39D0EL,-10L,0xB43F2BC1L},{65529UL,-1L,18446744073709551615UL,-9L,0x34A1A3F0L},{65535UL,6L,0xC7DA92F4L,0x7D8D4DF1L,0x4BF9E88CL},{0x4C32L,-1L,8UL,0x667B8D8CL,0xEA329793L},{0x4C32L,-1L,8UL,0x667B8D8CL,0xEA329793L},{65535UL,6L,0xC7DA92F4L,0x7D8D4DF1L,0x4BF9E88CL},{65529UL,-1L,18446744073709551615UL,-9L,0x34A1A3F0L}}};
    uint32_t l_899 = 0x044A063FL;
    uint32_t l_918 = 18446744073709551615UL;
    int32_t l_926 = 0x15D39164L;
    int32_t *l_1001 = &g_67;
    uint16_t **l_1049 = &g_180;
    uint16_t ***l_1048 = &l_1049;
    uint16_t ****l_1047 = &l_1048;
    uint64_t * const l_1125 = &g_263[1];
    int i, j, k;
    l_861 = p_26;
    (*l_868) |= (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((*l_866) |= 4294967295UL), (*p_26))), (l_867 , ((&l_867 != (g_154 , &l_867)) & ((*l_861) & (*l_861))))));
    (*l_861) = ((*l_868) & (safe_div_func_int64_t_s_s(p_27, (+(g_263[4] = (safe_add_func_uint32_t_u_u((g_504 = ((&g_175 == l_874) != (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((*g_558) ^= (safe_sub_func_int32_t_s_s(((**g_151) | ((l_883 == (g_891 = (g_888 = l_886))) >= p_27)), (*l_861)))) ^ g_129), (*p_29))), 12)), 1)))), p_27)))))));
    (*l_861) = 4L;
    if ((((*g_151) = l_893) != (((((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((l_898[0][5] , 0xBDL), 2)), 2)) > (*p_29)) , (*l_861)) | (0x23L >= (l_899 = (p_27 & 0x6C8B775D21512F51LL)))) , l_893)))
    { 
        return p_26;
    }
    else
    { 
        uint64_t l_900 = 0x0B80BE22313E8B08LL;
        uint8_t *l_917 = &g_127[1];
        int32_t l_927 = 0x1F5C0393L;
        int8_t l_937 = (-6L);
        int32_t *l_1002 = &l_898[0][5].f3;
        uint32_t l_1029[7] = {0x3FBB56D8L,4294967287UL,0x3FBB56D8L,0x3FBB56D8L,4294967287UL,0x3FBB56D8L,0x3FBB56D8L};
        int64_t l_1038 = 0x2CAECF8972A16F09LL;
        int32_t ****l_1058 = &g_889;
        uint8_t l_1064 = 0x08L;
        struct S0 l_1073 = {0xA105L,0xCAB56389L,1UL,0L,0xFC9BF9C0L};
        int32_t l_1097 = 0x8945118FL;
        int32_t l_1103 = 0L;
        int32_t l_1104 = (-8L);
        int32_t l_1105 = 1L;
        int32_t l_1106 = (-8L);
        int32_t l_1107 = 0x8B0452A1L;
        int32_t l_1108 = (-8L);
        int32_t l_1109 = 0x3E198B27L;
        int32_t l_1110 = 3L;
        int32_t l_1111 = 0x37711D44L;
        int64_t l_1112 = 0x08CFBBD4F80B8DB2LL;
        int32_t l_1113 = 0L;
        int32_t l_1114 = 3L;
        uint32_t l_1115 = 0xE47D03A3L;
        uint8_t l_1132 = 1UL;
        int i;
        l_900++;
        if ((safe_mul_func_uint8_t_u_u((((((safe_sub_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((--(*g_360)), l_900)) , ((safe_add_func_uint16_t_u_u((g_70[0] <= (*g_558)), (safe_sub_func_int32_t_s_s(((((*l_917) ^= (((g_154.f3 == (((l_900 , p_30) ^ p_28) & (*g_360))) > l_900) & (*p_26))) , &g_558) != (void*)0), l_918)))) , 249UL)) || (*p_29)), l_900)) , p_26) != (void*)0), g_6[1])) ^ p_30) , p_30) == 0xB0AAL) , p_27), l_900)))
        { 
            uint8_t ***l_919 = &g_359;
            if ((*p_26))
            { 
                const uint8_t ****l_923 = &g_920[5];
                int32_t l_925 = (-7L);
                l_927 ^= (5UL >= (((*p_29) = ((l_919 == ((*l_923) = g_920[4])) & (p_27 <= (+((((((((*g_558) = 0x0FB8DAF270ED144ELL) | (l_900 || (l_925 & (*p_29)))) || 1L) != l_900) > l_925) > l_926) <= l_925))))) ^ l_900));
            }
            else
            { 
                union U1 l_936 = {8L};
                (*p_26) = (p_27 >= (((safe_lshift_func_int8_t_s_u(g_127[2], (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_936 , l_937), 0)) , (+(((*p_29) || (*p_29)) & g_154.f2))), 9)) && l_936.f2) <= g_45))) < (*p_26)) != 0xEAL));
                return (***l_883);
            }
            if (p_27)
                goto lbl_1129;
            (**l_884) = &l_927;
        }
        else
        { 
            union U1 *l_941 = &l_867;
            (*p_26) = ((safe_lshift_func_int8_t_s_s((((void*)0 == l_941) == (0x14183D94L == (safe_div_func_int8_t_s_s((((safe_div_func_uint32_t_u_u(0UL, l_927)) ^ (((*g_360) = p_28) & (safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(0x21L, (**g_921))), l_937)) , g_154.f2), 0xB007A5C782F265EBLL)))) < l_937), l_900)))), 4)) <= p_30);
        }
lbl_1129:
        for (g_154.f3 = 0; (g_154.f3 == (-12)); g_154.f3 = safe_sub_func_uint64_t_u_u(g_154.f3, 5))
        { 
            int8_t *l_977 = &l_937;
            int32_t l_978 = 1L;
            const uint64_t *l_996 = &l_900;
            uint64_t l_1008 = 0xC7E6FD237C71DCB8LL;
            const uint32_t l_1028 = 0xE9C964E5L;
            int32_t **l_1034 = &l_1001;
            int32_t ****l_1059 = &l_884;
            uint64_t l_1090 = 0x04AD8B816E35C353LL;
            int32_t l_1094 = 1L;
            int32_t l_1095 = (-1L);
            int32_t l_1099 = 0xC50EC835L;
            int32_t l_1101 = 0x789CA950L;
            int32_t l_1102[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1102[i] = 0L;
            if (((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(246UL, 6)), (*p_29))) , (safe_rshift_func_int8_t_s_s(((*p_29) = (safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((*p_29), g_654)), (safe_div_func_uint32_t_u_u(((*g_922) , (++(*l_866))), (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(p_27, 1)) , ((*l_977) = (~(safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s(0xE4C92DD3L, 1UL)), (-1L)))))), 2))))))), l_978))))
            { 
                int64_t l_994 = (-2L);
                for (l_899 = (-13); (l_899 <= 31); l_899 = safe_add_func_uint32_t_u_u(l_899, 1))
                { 
                    uint32_t l_992 = 0xB8A8FAFCL;
                    uint16_t *l_995 = &g_45;
                    l_927 ^= (l_978 ^= (*p_26));
                    (*l_861) |= (safe_rshift_func_int8_t_s_u((((**g_359) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*p_29), 2)), ((*l_995) = (65526UL & (safe_add_func_int16_t_s_s((((l_900 || ((*g_178) = (l_994 = (+(safe_mod_func_int8_t_s_s(l_937, ((*l_917) = ((l_992 | l_927) ^ ((~p_27) >= l_992))))))))) < 0x1DL) || 0x97E43BC5A82D10E7LL), l_978))))))) , (*p_29)), p_28));
                    (*p_26) |= (l_996 != &g_163[5]);
                }
            }
            else
            { 
                uint8_t **l_999 = &g_360;
                int32_t l_1000[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1000[i] = (-5L);
                (*l_861) ^= ((*g_178) && ((++(*g_178)) > (((g_359 = &g_360) != (l_999 = (void*)0)) , l_900)));
                (*g_890) = (void*)0;
                if (l_1000[2])
                    continue;
                (*p_26) ^= (l_1001 != l_1002);
            }
        }
        for (l_1038 = 17; (l_1038 < (-29)); l_1038 = safe_sub_func_int64_t_s_s(l_1038, 7))
        { 
            return p_26;
        }
        (*l_885) = func_31(((void*)0 == (*l_1058)), l_1132);
    }
    return p_26;
}



static int32_t * func_31(int64_t  p_32, int16_t  p_33)
{ 
    int64_t l_841 = (-1L);
    int64_t *l_842[6][4] = {{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841},{&l_841,&l_841,&l_841,&l_841}};
    int32_t l_843 = 0xA1DE41C9L;
    int32_t *l_844 = &g_76;
    uint16_t **l_853 = (void*)0;
    uint16_t ***l_852 = &l_853;
    uint16_t ****l_854 = &l_852;
    uint16_t ***l_856 = (void*)0;
    uint16_t ****l_855 = &l_856;
    int16_t *l_857 = &g_637[1][1];
    union U1 ***l_859 = (void*)0;
    union U1 ****l_858 = &l_859;
    int32_t *l_860 = &g_108.f0;
    int i, j;
    (*l_844) ^= (p_32 , ((((((safe_div_func_int8_t_s_s(g_154.f2, (*g_360))) || (l_843 = (((((l_841 , (l_841 >= l_841)) , l_841) <= 0x7780E6EF8687D849LL) | l_841) < 0x924DEE1F515DB897LL))) , l_841) && 65535UL) <= 0xA5L) ^ l_841));
    l_843 = ((safe_sub_func_int32_t_s_s(((((((+(((safe_mul_func_int16_t_s_s(p_32, ((*l_857) |= (safe_mul_func_uint8_t_u_u(((((*l_844) = (*l_844)) , (*g_152)) | (((((*l_855) = ((*l_854) = l_852)) == &g_151) , g_154.f3) < (p_32 ^ p_33))), 0xDBL))))) > 0x8464557FL) | 0x453A114498A994CDLL)) , 0x216F6B550D0D9155LL) ^ 0xA774862DCE51AACELL) || p_33) <= p_33) , (*l_844)), 0x4A9E490EL)) && p_32);
    (*l_858) = &g_244[1];
    return l_860;
}



static uint8_t  func_38(int8_t  p_39)
{ 
    const uint16_t *l_68 = &g_45;
    int32_t *l_69 = &g_6[2];
    int32_t l_684 = (-1L);
    union U1 *l_687 = &g_108;
    int64_t l_693 = 9L;
    uint8_t ** const *l_722[3];
    const uint32_t l_753 = 0x646FD19AL;
    int32_t l_770[3][1][7] = {{{0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL}},{{0x1AF148D1L,0xD7FE8ADAL,0x1AF148D1L,0xD7FE8ADAL,0x1AF148D1L,0xD7FE8ADAL,0x1AF148D1L}},{{0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL,0xB25DAB5FL}}};
    uint64_t l_786 = 18446744073709551614UL;
    uint8_t l_791[1];
    uint32_t *l_835 = &g_504;
    uint32_t ** const l_834 = &l_835;
    uint32_t **l_837 = &l_835;
    uint32_t ***l_836 = &l_837;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_722[i] = &g_359;
    for (i = 0; i < 1; i++)
        l_791[i] = 0x02L;
    for (g_45 = 11; (g_45 == 53); g_45++)
    { 
        uint8_t l_52 = 1UL;
        int32_t l_63 = 0x1F81F13DL;
        uint64_t l_64 = 18446744073709551606UL;
        int32_t *l_65 = (void*)0;
        int32_t *l_66 = &g_67;
        int32_t *l_683[7] = {&g_108.f0,&g_108.f0,&g_74[0],&g_108.f0,&g_108.f0,&g_74[0],&g_108.f0};
        int i;
        l_684 = (safe_div_func_uint16_t_u_u(l_52, ((safe_rshift_func_uint8_t_u_s(func_55(((*l_66) = ((!(safe_sub_func_int64_t_s_s(((((g_6[2] >= (((1UL > 0x1966BA05392614F5LL) != ((l_63 = g_6[2]) != (0x1248C33196ADD890LL < l_52))) < l_64)) , &g_6[4]) != l_65) || g_6[6]), 0x3C098B3027FE137CLL))) && 4294967291UL)), l_68, l_69, (*l_69)), 6)) & 0x83L)));
        return p_39;
    }
    for (g_654 = (-14); (g_654 >= 3); g_654++)
    { 
        union U1 *l_688 = (void*)0;
        l_688 = l_687;
    }
    for (g_218 = 0; (g_218 < (-4)); g_218 = safe_sub_func_uint32_t_u_u(g_218, 8))
    { 
        int8_t *l_691 = &g_654;
        int32_t l_696 = (-1L);
        int64_t l_699 = 0xA0194F416DE43DDALL;
        const int32_t l_700 = 0x3CED771BL;
        int32_t *l_751[4][5][1] = {{{&g_67},{&g_154.f3},{(void*)0},{&g_67},{(void*)0}},{{(void*)0},{(void*)0},{&g_67},{(void*)0},{&g_154.f3}},{{&g_67},{&g_154.f3},{(void*)0},{&g_67},{(void*)0}},{{(void*)0},{(void*)0},{&g_67},{(void*)0},{&g_154.f3}}};
        int32_t **l_750 = &l_751[1][2][0];
        int32_t ***l_749[5][2] = {{&l_750,&l_750},{&l_750,&l_750},{&l_750,&l_750},{&l_750,&l_750},{&l_750,&l_750}};
        int32_t *l_757 = &l_696;
        int32_t l_766 = 0L;
        int32_t l_769 = 0x5F3FC36AL;
        int32_t l_772 = 0xE25A536FL;
        uint8_t l_773 = 255UL;
        int32_t **l_777 = &g_75[2][0][1];
        int32_t *** const l_776[3] = {&l_777,&l_777,&l_777};
        int32_t l_785 = 0xD519A2A3L;
        int32_t l_790 = 0x82E120C7L;
        uint32_t l_798 = 0x6AB8C42FL;
        struct S0 l_832 = {65530UL,0xE1268E47L,0xE248E137L,0x6D7A1F3DL,0xEC8C4A0EL};
        int i, j, k;
        if ((((p_39 & ((((&g_654 != l_691) | (+1L)) == (l_693 , (((safe_add_func_uint8_t_u_u((((((l_696 ^= 0xF7L) , (safe_rshift_func_int16_t_s_u(5L, 14))) == (*l_69)) > 0xD6D8L) , (*l_69)), 0x2EL)) >= p_39) || l_699))) != l_700)) <= 0x00CB310AC40F1374LL) <= 0xA4249E4A1216C86ELL))
        { 
            uint64_t l_729 = 0xDD778DEB16C7FA29LL;
            int32_t *l_730[2];
            int32_t *l_748 = &g_154.f3;
            int32_t **l_747 = &l_748;
            int32_t ***l_746 = &l_747;
            int32_t ***l_752[1][5];
            int32_t *l_756 = &g_74[0];
            int32_t l_789 = 5L;
            int16_t l_794 = 1L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_730[i] = &g_108.f0;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_752[i][j] = &l_747;
            }
            for (g_129 = (-26); (g_129 >= 37); g_129 = safe_add_func_uint32_t_u_u(g_129, 1))
            { 
                int32_t l_725 = 1L;
                if ((safe_mod_func_int8_t_s_s(p_39, (safe_mod_func_uint8_t_u_u(0x14L, (**g_359))))))
                { 
                    return (*g_360);
                }
                else
                { 
                    uint32_t l_723 = 0xAEA59F14L;
                    int16_t l_724 = 1L;
                    int32_t **l_726 = &g_75[5][6][2];
                    l_725 = ((safe_rshift_func_uint16_t_u_u(((p_39 >= ((g_20 , (p_39 >= ((safe_sub_func_int16_t_s_s(((+(g_2 , (safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((**g_359), (safe_lshift_func_uint16_t_u_u((g_154 , (&g_359 == l_722[1])), (*g_178))))) && p_39) <= (*l_69)), 6)), l_723)) , (*g_558)) < l_723), p_39)))) >= (*l_69)), 0x08FCL)) , (*g_360)))) && g_127[1])) , p_39), 15)) , l_724);
                    (*l_726) = &l_725;
                    return l_700;
                }
            }
            if ((l_684 = (safe_sub_func_int16_t_s_s(g_175, l_729))))
            { 
                uint32_t *l_743[2];
                int64_t *l_754[1];
                uint8_t l_755 = 7UL;
                int32_t l_767 = (-1L);
                int32_t l_768 = 0x471FC487L;
                int i;
                for (i = 0; i < 2; i++)
                    l_743[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_754[i] = &l_699;
                l_696 = (safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_u(((*l_691) = (0xAEB3F6E6DE36C41ALL & (((*g_558) = (safe_add_func_uint64_t_u_u(((*g_178) , (((g_504 |= ((safe_lshift_func_uint8_t_u_s((((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_39, ((((g_70[0]--) , l_746) != (l_752[0][0] = l_749[2][1])) , ((g_175 = (p_39 & ((p_39 , l_753) > p_39))) | p_39)))), p_39)) , l_755) | p_39), l_755)) || l_755)) , g_263[4]) , p_39)), l_755))) & p_39))), (*g_360))) & p_39) == g_637[2][0]) && l_700), 18446744073709551609UL));
                l_757 = l_756;
                for (g_154.f2 = 0; (g_154.f2 > 22); g_154.f2 = safe_add_func_uint8_t_u_u(g_154.f2, 1))
                { 
                    uint16_t *l_762 = (void*)0;
                    uint16_t **l_763 = &g_180;
                    int16_t *l_764 = &g_424;
                    int32_t l_765 = (-3L);
                    int32_t l_771 = 0x84583E71L;
                    int32_t ***l_779 = &l_777;
                    int32_t ****l_778 = &l_779;
                    (*l_756) &= (safe_mul_func_uint16_t_u_u((((*l_763) = l_762) == (*g_151)), ((*l_764) = g_129)));
                    ++l_773;
                    (*l_778) = l_776[0];
                    if (l_755)
                        break;
                    l_767 |= ((*l_756) = ((**g_151) | 0x8052L));
                }
                (*l_756) = (*l_69);
                if (p_39)
                    break;
            }
            else
            { 
                uint8_t l_780 = 0x3DL;
                const int32_t *l_783 = &g_6[2];
                const int32_t **l_784 = &l_783;
                --l_780;
                (*l_784) = l_783;
                (*l_756) = 0x6BC82106L;
                return (*g_360);
            }
            l_786--;
            ++l_791[0];
            l_794 ^= ((*l_757) ^= (-2L));
        }
        else
        { 
            uint32_t l_795 = 0x42A52A4BL;
            if (l_795)
                break;
        }
        for (g_45 = 0; (g_45 != 56); g_45 = safe_add_func_int8_t_s_s(g_45, 4))
        { 
            uint32_t l_805 = 4294967287UL;
            int32_t l_806 = 0xF795FD65L;
            int32_t *l_830 = (void*)0;
            int32_t *l_831 = &g_108.f0;
            l_770[0][0][3] = l_798;
            for (g_424 = 0; (g_424 <= 0); g_424 += 1)
            { 
                uint16_t **l_801[6][1];
                union U1 l_802 = {-2L};
                int64_t *l_803 = &g_175;
                int64_t *l_804[1][6][4] = {{{&l_699,&l_693,&l_699,&l_693},{&l_699,&l_693,&l_699,&l_693},{&l_699,&l_693,&l_699,&l_693},{&l_699,&l_693,&l_699,&l_693},{&l_699,&l_693,&l_699,&l_693},{&l_699,&l_693,&l_699,&l_693}}};
                int32_t l_820 = 0L;
                uint32_t l_824 = 0xBADF7691L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_801[i][j] = (void*)0;
                }
                l_806 = ((((safe_mod_func_int64_t_s_s(((void*)0 != l_801[4][0]), (l_802.f2 = ((*l_803) = (((g_70[g_424] | (0x4879A451L <= g_70[g_424])) , (((*l_687) , l_802) , 6UL)) && 0x13L))))) | l_770[(g_424 + 1)][g_424][(g_424 + 5)]) != l_805) , (-6L));
                for (g_154.f2 = 0; (g_154.f2 <= 0); g_154.f2 += 1)
                { 
                    if (l_802.f2)
                        break;
                }
                (*l_757) ^= p_39;
                if (((void*)0 != &l_777))
                { 
                    uint64_t *l_818 = &g_263[4];
                    int32_t l_819 = 6L;
                    int32_t l_821 = 0x0D29B7ACL;
                    int32_t l_822 = (-9L);
                    int32_t l_823 = (-1L);
                    uint8_t l_827[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_827[i][j] = 0xCCL;
                    }
                    (*l_757) = ((*g_558) == ((*l_818) = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((*g_360), 0)), p_39)) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u((l_722[1] != (void*)0))) != (safe_div_func_int32_t_s_s((&l_753 != ((((-6L) <= 9L) || l_802.f0) , l_757)), 0x6AB321B4L))), l_806)), l_770[(g_424 + 1)][g_424][(g_424 + 5)])))));
                    --l_824;
                    if (p_39)
                        break;
                    ++l_827[0][1];
                }
                else
                { 
                    l_831 = (l_830 = &l_770[(g_424 + 1)][g_424][(g_424 + 5)]);
                }
            }
        }
        g_833[4][3] = (l_832 , ((*l_777) = (void*)0));
    }
    (*l_836) = l_834;
    return (**g_359);
}



static uint8_t  func_55(int32_t  p_56, const uint16_t * p_57, int32_t * p_58, int16_t  p_59)
{ 
    int8_t l_80[6] = {0L,0x7CL,0x7CL,0L,0x7CL,0x7CL};
    int32_t l_87 = 0x58CFF8D1L;
    int32_t l_89[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int32_t l_130 = (-2L);
    union U1 l_153[1][6] = {{{0x2E318422L},{0L},{0x2E318422L},{8L},{0x2E318422L},{8L}}};
    const struct S0 l_155 = {0UL,0xC48D36CFL,18446744073709551612UL,0x82513317L,6UL};
    uint16_t *l_177 = &g_154.f0;
    int32_t l_220 = 0xBF971BCCL;
    int16_t l_305 = (-9L);
    uint8_t l_341 = 1UL;
    int32_t *l_351 = (void*)0;
    int32_t l_356[7][6][6] = {{{0x8C12E898L,0x979B59C9L,1L,0x574E489BL,3L,0x56584C18L},{(-5L),0x887482ECL,0L,0x66A90C53L,0xBC1CEFA7L,0x8C12E898L},{0x887482ECL,1L,(-6L),(-5L),3L,0x66A90C53L},{(-8L),0x26289884L,0x4643D517L,(-6L),6L,5L},{0x574E489BL,1L,0x4643D517L,4L,0x887482ECL,0x66A90C53L},{1L,4L,(-6L),(-6L),0x8C12E898L,0x8C12E898L}},{{0x88F7FE99L,0L,0L,0x88F7FE99L,5L,0x56584C18L},{1L,0xBC1CEFA7L,1L,0x56584C18L,0x574E489BL,(-8L)},{0x574E489BL,(-6L),0xC22226B5L,5L,0x574E489BL,0x979B59C9L},{(-8L),0xBC1CEFA7L,0xD727D8FBL,(-1L),5L,0x887482ECL},{0x887482ECL,0L,0x66A90C53L,0xBC1CEFA7L,0x8C12E898L,1L},{(-5L),4L,0xD727D8FBL,0x4643D517L,0x887482ECL,0x26289884L}},{{0x8C12E898L,1L,0xC22226B5L,0x887482ECL,6L,1L},{0x8C12E898L,0x26289884L,1L,0x4643D517L,3L,4L},{(-5L),1L,0L,0xBC1CEFA7L,0xBC1CEFA7L,0L},{0x887482ECL,0x887482ECL,(-6L),(-1L),3L,0xBC1CEFA7L},{(-8L),0x979B59C9L,0x4643D517L,5L,6L,(-6L)},{0x574E489BL,(-8L),0x4643D517L,0x56584C18L,0x887482ECL,0xBC1CEFA7L}},{{1L,0x56584C18L,(-6L),0x88F7FE99L,0x8C12E898L,0L},{0x88F7FE99L,0x8C12E898L,0L,(-6L),5L,4L},{1L,0x66A90C53L,1L,4L,0x574E489BL,1L},{0x574E489BL,5L,0xC22226B5L,(-6L),0x574E489BL,0x26289884L},{(-8L),0x66A90C53L,0xD727D8FBL,(-5L),5L,1L},{0x887482ECL,0x8C12E898L,0x66A90C53L,0x66A90C53L,0x8C12E898L,0x887482ECL}},{{(-5L),0x56584C18L,0xD727D8FBL,0x574E489BL,0x887482ECL,0x979B59C9L},{0x8C12E898L,(-8L),0xC22226B5L,1L,6L,(-8L)},{0x8C12E898L,0x979B59C9L,1L,0x574E489BL,3L,0x56584C18L},{(-5L),0x887482ECL,0L,0x66A90C53L,0xBC1CEFA7L,0x8C12E898L},{0x887482ECL,1L,(-6L),(-5L),3L,0x66A90C53L},{(-8L),0x26289884L,0x4643D517L,(-6L),6L,5L}},{{0x574E489BL,1L,0x4643D517L,4L,0x887482ECL,0x66A90C53L},{1L,4L,1L,1L,0x88F7FE99L,0x88F7FE99L},{0x887482ECL,(-6L),(-6L),0x887482ECL,(-8L),0x979B59C9L},{0x574E489BL,0x8C12E898L,(-6L),0x979B59C9L,0xBC1CEFA7L,(-5L)},{0xBC1CEFA7L,1L,2L,(-8L),0xBC1CEFA7L,0xD727D8FBL},{(-5L),0x8C12E898L,0xC22226B5L,0x56584C18L,(-8L),5L}},{{5L,(-6L),0L,0x8C12E898L,0x88F7FE99L,(-6L)},{4L,0x26289884L,0xC22226B5L,0x66A90C53L,5L,3L},{0x88F7FE99L,(-1L),2L,5L,1L,(-1L)},{0x88F7FE99L,3L,(-6L),0x66A90C53L,6L,0x26289884L},{4L,(-6L),(-6L),0x8C12E898L,0x8C12E898L,(-6L)},{5L,5L,1L,0x56584C18L,6L,0x8C12E898L}}};
    const uint32_t l_363[3][7][4] = {{{0x95E66BFFL,4294967287UL,4294967290UL,4294967295UL},{5UL,4294967295UL,4294967287UL,4294967287UL},{0x6BBF3638L,0x6BBF3638L,4294967287UL,1UL},{5UL,0xBB8A98EEL,4294967290UL,4294967295UL},{0x95E66BFFL,4294967290UL,1UL,4294967290UL},{1UL,4294967290UL,0x95E66BFFL,4294967295UL},{4294967290UL,0xBB8A98EEL,5UL,1UL}},{{4294967287UL,0x6BBF3638L,0x6BBF3638L,4294967287UL},{4294967287UL,4294967295UL,5UL,4294967295UL},{4294967290UL,4294967287UL,0x95E66BFFL,0x10B26683L},{1UL,0x2F7704D8L,1UL,0x10B26683L},{0x95E66BFFL,4294967287UL,4294967290UL,4294967295UL},{5UL,4294967295UL,4294967287UL,4294967287UL},{0x6BBF3638L,0x6BBF3638L,4294967287UL,1UL}},{{5UL,0xBB8A98EEL,4294967290UL,4294967295UL},{0x95E66BFFL,4294967290UL,1UL,4294967290UL},{1UL,4294967290UL,0x95E66BFFL,4294967295UL},{4294967290UL,0xBB8A98EEL,5UL,1UL},{4294967287UL,0x6BBF3638L,0x6BBF3638L,4294967287UL},{4294967287UL,4294967295UL,5UL,4294967295UL},{4294967290UL,4294967287UL,0x95E66BFFL,0x10B26683L}}};
    const union U1 l_376[1][1] = {{{7L}}};
    uint64_t l_537 = 0x775C8CDB0ABC535ALL;
    uint64_t l_602 = 0x439A7F3B79B1D9A2LL;
    uint32_t l_638[5][3] = {{0x92765F2BL,0xB5CD95ADL,1UL},{0xB5CD95ADL,0x92765F2BL,0x92765F2BL},{1UL,0x92765F2BL,18446744073709551615UL},{18446744073709551615UL,0xB5CD95ADL,0x2CB2E061L},{1UL,1UL,0x2CB2E061L}};
    int32_t l_678 = 0x2FA9C0A1L;
    int8_t *l_679 = &l_80[5];
    int64_t *l_680 = &g_175;
    uint8_t *l_681 = &l_341;
    int32_t *l_682 = &g_108.f2;
    int i, j, k;
lbl_159:
    for (p_59 = 0; (p_59 <= 0); p_59 += 1)
    { 
        const uint16_t **l_72 = (void*)0;
        const uint16_t ***l_71 = &l_72;
        int32_t l_78 = 0x93498396L;
        int32_t l_79 = (-3L);
        int32_t l_85 = 0xED9ABD1AL;
        int16_t l_86 = 0x9728L;
        int32_t l_91 = 0xC8EE3FDEL;
        int32_t l_94[4][4][6] = {{{0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L,1L},{0x2D6E4BE9L,0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L},{0x2D6E4BE9L,0x38A2FE65L,1L,0x78BCBB58L,0x78BCBB58L,1L},{0x78BCBB58L,0x78BCBB58L,1L,0x38A2FE65L,0x2D6E4BE9L,0x2D6E4BE9L}},{{0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L,1L},{0x2D6E4BE9L,0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L},{0x2D6E4BE9L,0x38A2FE65L,1L,0x78BCBB58L,0x78BCBB58L,1L},{0x78BCBB58L,0x78BCBB58L,1L,0x38A2FE65L,0x2D6E4BE9L,0x2D6E4BE9L}},{{0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L,1L},{0x2D6E4BE9L,0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L},{0x2D6E4BE9L,0x38A2FE65L,1L,0x78BCBB58L,0x78BCBB58L,1L},{0x78BCBB58L,0x78BCBB58L,1L,0x38A2FE65L,0x2D6E4BE9L,0x2D6E4BE9L}},{{0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L,1L},{0x2D6E4BE9L,0x78BCBB58L,0x38A2FE65L,0x38A2FE65L,0x78BCBB58L,0x2D6E4BE9L},{0x2D6E4BE9L,0x38A2FE65L,1L,0x78BCBB58L,0x78BCBB58L,1L},{0x78BCBB58L,0x78BCBB58L,1L,0x38A2FE65L,0x2D6E4BE9L,0x2D6E4BE9L}}};
        union U1 *l_107 = &g_108;
        int i, j, k;
        (*l_71) = &p_57;
        for (g_67 = 0; (g_67 <= 0); g_67 += 1)
        { 
            int32_t *l_73[1][6][1] = {{{&g_74[0]},{&g_6[2]},{&g_74[0]},{&g_6[2]},{&g_74[0]},{&g_6[2]}}};
            int64_t l_83 = 0xF06E912672125370LL;
            int16_t l_95 = 0L;
            uint32_t l_96 = 3UL;
            struct S0 l_102 = {0UL,0L,0xE4037C94L,-6L,0x2FE86CE7L};
            uint16_t *l_105 = &l_102.f0;
            uint16_t **l_104 = &l_105;
            uint16_t ***l_103 = &l_104;
            int32_t * const *l_119 = (void*)0;
            int i, j, k;
            g_74[0] = 0x64D43D03L;
            g_75[2][0][1] = p_58;
            for (p_56 = 0; (p_56 <= 0); p_56 += 1)
            { 
                int32_t l_77 = (-1L);
                int32_t l_81 = 1L;
                int32_t l_84 = 0xEB5E7B38L;
                int32_t l_93[6][7] = {{0x3C24CE62L,0x3C24CE62L,0x16CB7938L,7L,(-10L),(-1L),0xF5DBB77EL},{7L,0x3C24CE62L,0x2D252A4FL,(-1L),(-1L),0x2D252A4FL,0x3C24CE62L},{0x2D252A4FL,0x80F123D7L,0x3C24CE62L,(-6L),(-10L),9L,7L},{0x2D252A4FL,0xF5DBB77EL,5L,0x3C24CE62L,5L,0xF5DBB77EL,0x2D252A4FL},{7L,9L,(-10L),(-6L),0x3C24CE62L,0x80F123D7L,0x2D252A4FL},{0x3C24CE62L,0x2D252A4FL,(-1L),(-1L),0x2D252A4FL,0x3C24CE62L,7L}};
                struct S0 l_99[1] = {{0x7DA5L,0x9C36F569L,0x0FF02EEBL,0x2631F386L,0xCF8CBA6CL}};
                int32_t * const l_116[3] = {(void*)0,(void*)0,(void*)0};
                int32_t * const *l_115 = &l_116[2];
                int32_t * const **l_114 = &l_115;
                int32_t * const *l_118 = &l_116[2];
                int32_t * const **l_117[4][5][7] = {{{&l_118,(void*)0,&l_118,&l_118,(void*)0,(void*)0,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,(void*)0,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,(void*)0,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,(void*)0,(void*)0}},{{&l_118,&l_118,&l_118,(void*)0,&l_118,&l_118,(void*)0},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,(void*)0,(void*)0,(void*)0,&l_118},{&l_118,&l_118,&l_118,(void*)0,(void*)0,&l_118,&l_118},{&l_118,&l_118,&l_118,(void*)0,&l_118,&l_118,&l_118}},{{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,&l_118,&l_118,&l_118,&l_118,(void*)0,&l_118},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118},{(void*)0,(void*)0,&l_118,&l_118,(void*)0,&l_118,&l_118},{&l_118,&l_118,&l_118,&l_118,(void*)0,&l_118,(void*)0},{&l_118,&l_118,&l_118,&l_118,&l_118,&l_118,&l_118}}};
                uint8_t *l_126 = &g_127[1];
                uint8_t *l_128 = &g_129;
                int i, j, k;
                for (g_76 = 0; (g_76 >= 0); g_76 -= 1)
                { 
                    int32_t l_82 = 1L;
                    int32_t l_88 = (-7L);
                    int32_t l_90 = (-1L);
                    int32_t l_92[5][7] = {{1L,1L,(-7L),1L,1L,(-7L),1L},{1L,0x9E284758L,0x9E284758L,1L,0x9E284758L,0x9E284758L,1L},{0x9E284758L,1L,0x9E284758L,0x9E284758L,1L,0x9E284758L,0x9E284758L},{1L,1L,(-7L),1L,1L,(-7L),1L},{1L,0x9E284758L,0x9E284758L,1L,0x9E284758L,0x9E284758L,1L}};
                    int8_t *l_106[1][1][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_106[i][j][k] = &l_80[4];
                        }
                    }
                    l_96++;
                    l_94[1][0][2] = (l_99[0] , (l_93[5][2] = (18446744073709551615UL == ((l_84 = (g_70[g_76] ^ (g_74[0] < ((l_102 , (g_76 < (l_103 != (void*)0))) <= l_91)))) <= p_56))));
                    if (g_70[g_76])
                        continue;
                    l_107 = l_107;
                }
                for (l_91 = 0; (l_91 <= 0); l_91 += 1)
                { 
                    int32_t **l_109 = &l_73[0][4][0];
                    (*l_109) = &l_93[5][1];
                    l_78 = 0xC8EBC3BCL;
                    if ((*p_58))
                        continue;
                    l_87 = l_86;
                }
                l_94[1][0][2] = (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((((l_119 = ((*l_114) = &p_58)) != (void*)0) | (safe_lshift_func_int16_t_s_u(l_87, 11))) > ((safe_lshift_func_int8_t_s_s(l_79, (l_89[2] == (g_76 , (((l_130 ^= (((*l_128) |= ((*l_126) &= (safe_sub_func_int8_t_s_s((p_59 , (-1L)), p_59)))) ^ 7UL)) != 0xE1L) || p_56))))) , l_89[5])), p_59)), 0x98685255F6B4EE31LL));
            }
        }
    }
    if ((p_56 >= l_80[4]))
    { 
        int8_t l_131 = 0x13L;
        int32_t l_134 = 0xEE01EBF4L;
        struct S0 l_170 = {65535UL,0x14E06629L,0x8B48CC5DL,0xE14E52B6L,18446744073709551615UL};
        int8_t * const l_185 = (void*)0;
        int8_t * const *l_184 = &l_185;
        union U1 l_214 = {0L};
        int32_t l_227 = 0x65CAB69BL;
        int32_t **l_239 = (void*)0;
        int32_t ***l_238[1][6];
        int32_t ***l_240 = (void*)0;
        uint32_t l_272 = 0xE099C41BL;
        int32_t l_310 = 0L;
        uint16_t l_311 = 0xC0D7L;
        uint8_t *l_324 = &g_127[0];
        uint64_t l_331 = 1UL;
        uint32_t *l_354[6] = {&g_70[0],&g_70[0],&g_70[0],&g_70[0],&g_70[0],&g_70[0]};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_238[i][j] = &l_239;
        }
        l_131 &= (g_45 == p_59);
        if ((safe_mod_func_int32_t_s_s((l_134 = l_80[1]), 0x9ECC4F20L)))
        { 
            uint16_t *l_150 = &g_45;
            uint16_t **l_149[4] = {&l_150,&l_150,&l_150,&l_150};
            uint64_t *l_162 = &g_163[5];
            int32_t l_176[3][3][2] = {{{(-4L),0xE3A38003L},{(-5L),0xE3A38003L},{(-4L),0xE3A38003L}},{{(-5L),0xE3A38003L},{(-4L),0xE3A38003L},{(-5L),0xE3A38003L}},{{(-4L),0xE3A38003L},{(-5L),0xE3A38003L},{(-4L),0xE3A38003L}}};
            int32_t l_183 = 0x27F5A8CCL;
            int8_t *l_187 = (void*)0;
            int8_t * const *l_186 = &l_187;
            int8_t l_222 = 0x5BL;
            union U1 *l_260 = &l_214;
            int32_t l_306 = 0x13EF8866L;
            uint64_t l_316 = 0UL;
            int i, j, k;
            for (g_67 = 0; (g_67 <= 5); g_67 += 1)
            { 
                union U1 *l_158 = &l_153[0][2];
                p_58 = &g_6[5];
                for (l_130 = 0; (l_130 <= 2); l_130 += 1)
                { 
                    int32_t *l_143 = &l_89[2];
                    union U1 *l_157 = &g_108;
                    union U1 **l_156 = &l_157;
                    int i;
                    (*l_143) |= (safe_mul_func_int16_t_s_s(l_80[g_67], ((g_2 , 1UL) >= ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_80[4], (0x35L != l_134))), (safe_lshift_func_int16_t_s_u(0x4DCBL, 1)))) & 1UL))));
                    (*l_143) = ((safe_unary_minus_func_uint8_t_u(((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_131, (((l_149[2] != g_151) > 3L) != ((((*l_156) = ((l_153[0][2] , (g_154 , l_155)) , &g_108)) != l_158) && l_80[4])))), p_59)) >= p_56))) | p_59);
                    if (g_154.f0)
                        goto lbl_159;
                    return g_154.f3;
                }
            }
            if ((safe_sub_func_int64_t_s_s(((*p_58) > g_154.f3), (0xF45142B981AEEA3CLL ^ ((*l_162) = g_108.f0)))))
            { 
                int64_t *l_173 = &g_108.f3;
                int64_t *l_174[4] = {&g_175,&g_175,&g_175,&g_175};
                uint16_t *l_179 = &l_153[0][2].f4.f0;
                uint32_t *l_181 = &g_70[0];
                int32_t *l_182[2];
                int8_t l_202 = 0L;
                int32_t * const *l_231[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t * const **l_230 = &l_231[6];
                int32_t * const ***l_229 = &l_230;
                int i;
                for (i = 0; i < 2; i++)
                    l_182[i] = &l_153[0][2].f2;
                if ((l_183 = ((safe_mul_func_int16_t_s_s(p_59, ((safe_rshift_func_int8_t_s_s(g_2, (safe_mod_func_uint32_t_u_u(g_127[1], ((*l_181) = (l_170 , (safe_mod_func_int64_t_s_s(((((l_176[2][1][0] ^= p_56) , ((l_179 = (g_178 = l_177)) == (g_180 = &g_45))) >= 0x68L) ^ 0xF796L), g_129)))))))) || 1UL))) && 0x9AEBL)))
                { 
                    return g_175;
                }
                else
                { 
                    int8_t *l_209 = &l_131;
                    union U1 *l_215 = &l_153[0][2];
                    int64_t l_216 = 9L;
                    int8_t *l_217[2];
                    int32_t l_219 = (-1L);
                    int32_t **l_221[7][5][7] = {{{&l_182[0],&g_75[2][0][1],&g_75[4][1][1],&l_182[0],&l_182[0],&g_75[2][0][1],&l_182[1]},{&g_75[2][0][1],(void*)0,&g_75[6][4][0],&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1],(void*)0},{&l_182[0],&l_182[0],&l_182[1],(void*)0,&g_75[2][0][1],(void*)0,(void*)0},{(void*)0,&l_182[0],(void*)0,&g_75[6][4][0],&g_75[6][4][0],(void*)0,&l_182[0]},{&g_75[4][1][1],&g_75[2][0][1],(void*)0,&g_75[2][0][1],&l_182[1],&g_75[2][0][1],&g_75[6][4][0]}},{{&g_75[2][0][1],&g_75[2][0][1],(void*)0,&g_75[4][1][1],&l_182[0],&g_75[2][0][1],(void*)0},{&g_75[2][0][1],(void*)0,&l_182[0],&g_75[2][0][1],&l_182[1],&g_75[2][0][1],&l_182[0]},{&g_75[2][0][1],(void*)0,&l_182[0],&g_75[6][3][0],&g_75[4][1][1],&g_75[2][0][1],&g_75[4][1][1]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_182[0],&g_75[5][1][2],(void*)0},{&l_182[1],&g_75[5][6][1],&g_75[2][0][1],&l_182[0],&g_75[5][1][1],&l_182[0],(void*)0}},{{(void*)0,(void*)0,&l_182[0],&g_75[2][0][1],&g_75[2][0][1],&l_182[1],(void*)0},{&l_182[0],&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1],&g_75[5][6][1],&g_75[4][1][1]},{&l_182[0],&g_75[2][0][1],&g_75[2][0][1],&g_75[6][4][0],&g_75[2][0][1],&g_75[2][0][1],&l_182[0]},{(void*)0,&g_75[2][0][1],&g_75[1][4][2],&l_182[1],&g_75[2][0][1],&g_75[6][3][0],(void*)0},{&g_75[2][0][1],&l_182[0],&g_75[2][0][1],&l_182[0],&g_75[5][1][1],(void*)0,&g_75[6][3][0]}},{{(void*)0,(void*)0,&g_75[1][4][2],&g_75[2][0][1],&l_182[0],&l_182[0],&g_75[2][0][1]},{&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1],&g_75[5][6][1],&g_75[4][1][1],&g_75[4][1][1],&g_75[5][6][1]},{&g_75[2][0][1],(void*)0,&g_75[2][0][1],(void*)0,&l_182[1],(void*)0,&l_182[1]},{(void*)0,&l_182[1],&l_182[0],&g_75[4][1][1],&g_75[2][0][1],(void*)0,&l_182[0]},{&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1],(void*)0,&l_182[0],(void*)0,&g_75[5][1][2]}},{{(void*)0,&g_75[2][0][1],(void*)0,&l_182[0],&g_75[6][3][0],&g_75[4][1][1],&g_75[2][0][1]},{&l_182[0],&g_75[1][4][2],&l_182[0],&l_182[0],&g_75[1][4][2],&l_182[0],&g_75[2][0][1]},{&l_182[0],&l_182[0],(void*)0,(void*)0,(void*)0,(void*)0,&l_182[1]},{(void*)0,&g_75[6][4][0],(void*)0,&g_75[4][1][1],&l_182[1],&g_75[6][3][0],(void*)0},{&l_182[1],&l_182[0],&g_75[5][6][1],(void*)0,(void*)0,&g_75[2][0][1],&g_75[6][4][0]}},{{(void*)0,&g_75[1][4][2],&g_75[6][4][0],&g_75[5][6][1],&g_75[2][0][1],&g_75[5][6][1],&g_75[6][4][0]},{&g_75[2][0][1],&g_75[2][0][1],(void*)0,&g_75[2][0][1],&g_75[6][4][0],&l_182[1],(void*)0},{&l_182[0],&g_75[2][0][1],&g_75[6][3][0],&l_182[0],&g_75[5][1][2],&l_182[0],&l_182[1]},{&g_75[2][0][1],&l_182[1],&g_75[5][1][1],&l_182[1],&g_75[6][4][0],&g_75[5][1][2],&g_75[2][0][1]},{&g_75[5][1][1],(void*)0,&l_182[0],&g_75[6][4][0],&g_75[2][0][1],&g_75[2][0][1],&g_75[2][0][1]}},{{(void*)0,&g_75[2][0][1],&l_182[0],&g_75[2][0][1],(void*)0,&g_75[2][0][1],&g_75[5][1][2]},{(void*)0,(void*)0,&g_75[5][1][1],&g_75[2][0][1],&l_182[1],&l_182[1],&l_182[0]},{&g_75[1][4][2],&l_182[0],&g_75[6][3][0],&l_182[0],(void*)0,(void*)0,&l_182[1]},{(void*)0,&g_75[2][0][1],(void*)0,(void*)0,&g_75[1][4][2],&g_75[6][4][0],&g_75[4][1][1]},{&l_182[1],(void*)0,&g_75[6][3][0],&g_75[2][0][1],&g_75[2][0][1],&g_75[6][3][0],(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_217[i] = &l_80[3];
                    l_186 = l_184;
                    l_220 = (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((0x0EL || (safe_mul_func_uint8_t_u_u(l_202, (l_176[0][2][1] | (((l_183 = ((*l_177) |= (*p_57))) < ((safe_mod_func_int32_t_s_s(((l_89[6] = ((g_218 = (0x88ADL != (l_216 |= (safe_div_func_int64_t_s_s((((safe_rshift_func_int8_t_s_u(((*l_209) = p_59), 0)) | (safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(((((l_214 , (void*)0) != l_215) , l_176[0][0][1]) > l_214.f2), l_176[2][2][0])) != 3L), g_20))) ^ (*p_58)), p_56))))) ^ 1L)) ^ l_155.f2), (*p_58))) , l_153[0][2].f0)) , l_219))))), p_56)), g_67)) > (*p_57)), 8)), p_59)) && 0x14FB18FCL), p_56)), l_87));
                    l_182[1] = p_58;
                }
                if ((l_222 , (((&g_180 == &p_57) & (*p_58)) != (safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s(((&g_70[0] == ((((l_214.f2 < l_176[1][2][0]) != l_227) | l_183) , &g_70[0])) == l_176[2][1][0]), 6)) > p_56) >= g_154.f2), 5)))))
                { 
                    return p_59;
                }
                else
                { 
                    int32_t **l_228[1];
                    int32_t * const ****l_232 = &l_229;
                    int32_t ****l_241 = &l_240;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_228[i] = (void*)0;
                    p_58 = &g_76;
                    (*l_232) = l_229;
                    l_220 ^= ((((((0x59B3L == (((g_163[3] &= (safe_div_func_uint64_t_u_u(((!((safe_sub_func_uint32_t_u_u(0x6F315DB4L, (l_238[0][1] != ((*l_241) = l_240)))) > ((safe_mod_func_int16_t_s_s((0x9AL | (p_56 & p_59)), (*p_57))) , p_59))) >= 0xE8078A07L), g_76))) < g_154.f2) <= l_183)) & g_74[1]) , (void*)0) == g_244[0]) < (*g_180)) >= l_89[6]);
                    p_58 = &g_74[0];
                }
            }
            else
            { 
                int32_t *l_246 = &g_108.f2;
                int16_t *l_261 = &g_218;
                uint64_t *l_262 = &g_263[4];
                int32_t l_264 = 7L;
                l_246 = p_58;
                if (g_20)
                    goto lbl_265;
lbl_265:
                l_264 &= ((((*l_262) |= (safe_lshift_func_uint8_t_u_s((((*l_261) = (((*l_162) = 1UL) <= (safe_add_func_uint16_t_u_u(((g_2 & ((l_246 = &l_130) == &g_74[0])) , (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_45, (safe_add_func_int8_t_s_s((~(p_56 , (l_260 == &l_153[0][5]))), p_59)))), p_59)), p_59))), l_222)))) ^ 0x4352L), p_56))) > p_56) , (*p_58));
lbl_308:
                for (l_131 = 0; (l_131 == 29); l_131 = safe_add_func_uint8_t_u_u(l_131, 4))
                { 
                    uint16_t ***l_268 = &l_149[2];
                    l_264 = ((*l_246) = (&g_152 != ((*l_268) = &g_178)));
                    if (l_214.f2)
                        goto lbl_309;
                    (*l_246) &= (g_108.f0 && g_6[3]);
                    if ((*p_58))
                        break;
                    l_89[3] = 0x8DD20614L;
                }
lbl_309:
                if ((p_56 >= (safe_lshift_func_int8_t_s_s((-10L), 5))))
                { 
                    uint16_t ***l_284[1];
                    int32_t l_295 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_284[i] = &l_149[2];
lbl_307:
                    l_153[0][2].f0 |= ((safe_unary_minus_func_int8_t_s(l_272)) && ((0x3816L | (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u((!(((l_284[0] == ((safe_rshift_func_uint8_t_u_s(p_56, 4)) , l_284[0])) < (((safe_mul_func_int16_t_s_s(((*l_261) ^= ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((l_295 |= 0xD8D7362E18FD125DLL), 0x91C0CF2C42BA6008LL)), 13)), l_176[2][0][1])) & (**g_151))), l_183)) == 0x34L) <= l_155.f4)) > g_129)), 1UL)) != (**g_151)) , (*l_246)), 0xEAL)), 1L)) && 1UL) <= l_155.f4), 6))) ^ 3L));
                    (*l_246) = (((~(l_153[0][2].f2 ^= p_56)) | (safe_mod_func_uint8_t_u_u((((*l_262)++) ^ ((l_87 = ((p_59 || ((void*)0 == &p_59)) == (safe_lshift_func_uint16_t_u_u((**g_151), (safe_rshift_func_int16_t_s_s(((((*l_246) , (p_56 && l_305)) , (-7L)) , l_295), l_306)))))) ^ 0xDA2C7F498335532FLL)), l_306))) == p_56);
                    (*l_246) |= (*p_58);
                    if (g_154.f4)
                        goto lbl_307;
                    g_108.f2 = (&l_295 == (g_75[2][0][1] = &g_6[5]));
                }
                else
                { 
                    g_75[0][0][2] = p_58;
                    if (l_264)
                        goto lbl_308;
                    return g_218;
                }
                p_58 = &l_220;
            }
            l_311++;
            for (l_227 = (-29); (l_227 >= 8); l_227 = safe_add_func_int8_t_s_s(l_227, 5))
            { 
                uint8_t **l_325 = (void*)0;
                uint8_t **l_326 = &l_324;
                int32_t l_332[1];
                const uint8_t * const l_333 = &g_129;
                int i;
                for (i = 0; i < 1; i++)
                    l_332[i] = 0xC903916DL;
                l_316--;
                l_89[2] = ((*p_58) = ((((*p_58) >= (((safe_mul_func_int16_t_s_s((l_89[0] || ((safe_sub_func_uint32_t_u_u((g_74[1] & (~(((*l_326) = l_324) == l_185))), l_183)) , ((*g_178) = (safe_add_func_uint16_t_u_u((((*l_324) |= (safe_add_func_uint16_t_u_u((((g_108.f2 & l_331) , 0x93F3C214L) | l_332[0]), (*p_57)))) | p_56), p_59))))), p_56)) , p_56) >= g_20)) == p_56) , (*p_58)));
                (*p_58) = (l_333 == (void*)0);
            }
        }
        else
        { 
            uint32_t l_340 = 0x529FBBD5L;
            int32_t l_342[3];
            int i;
            for (i = 0; i < 3; i++)
                l_342[i] = 0x79DC29DAL;
            if ((l_342[2] &= (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(l_155.f4, ((safe_div_func_int8_t_s_s(p_56, ((p_59 = l_340) || l_340))) & l_341))) , ((((g_129 > 65535UL) & g_74[0]) | 0L) ^ 0xD110966B84EDE662LL)), p_56))))
            { 
                uint64_t l_345 = 0xDC410662D8ED43A3LL;
                l_345 |= (safe_add_func_int8_t_s_s(l_155.f3, l_89[2]));
                if (l_227)
                    goto lbl_362;
            }
            else
            { 
                int32_t *l_346 = &l_220;
                l_346 = l_346;
                return g_163[5];
            }
        }
        if ((safe_sub_func_int8_t_s_s(((g_70[0] = (((((safe_add_func_uint64_t_u_u(0x5631D7939AF17718LL, p_59)) && p_56) || ((l_351 = &g_6[2]) != &g_74[0])) & p_59) & (safe_div_func_int32_t_s_s((((&g_175 == &g_175) != (*p_58)) & 0x0374L), l_341)))) || 0xFA16A8D9L), p_59)))
        { 
            int16_t l_355[3];
            int i;
            for (i = 0; i < 3; i++)
                l_355[i] = 0x3F8DL;
            l_355[1] ^= ((l_220 , l_153[0][2].f2) || p_59);
        }
        else
        { 
            l_356[0][0][0] = 0L;
        }
lbl_362:
        for (l_170.f1 = (-11); (l_170.f1 != 13); l_170.f1 = safe_add_func_int32_t_s_s(l_170.f1, 8))
        { 
            uint8_t ***l_361 = &g_359;
            (*l_361) = g_359;
            if ((*p_58))
                break;
        }
        l_130 &= (((g_163[5] , &l_80[4]) == (g_163[3] , (*l_184))) != ((0x00DAL & g_154.f4) , l_363[1][6][2]));
    }
    else
    { 
        int32_t **l_375[3][3][3] = {{{&g_75[4][4][2],&g_75[2][0][1],&g_75[2][0][1]},{&l_351,&g_75[0][6][2],&g_75[0][6][2]},{&g_75[4][4][2],&g_75[2][0][1],&g_75[2][0][1]}},{{&l_351,&g_75[0][6][2],&g_75[0][6][2]},{&g_75[4][4][2],&g_75[2][0][1],&g_75[2][0][1]},{&l_351,&g_75[0][6][2],&g_75[0][6][2]}},{{&g_75[4][4][2],&g_75[2][0][1],&g_75[2][0][1]},{&l_351,&g_75[0][6][2],&g_75[0][6][2]},{&g_75[4][4][2],&g_75[2][0][1],&g_75[2][0][1]}}};
        int32_t ***l_374[5];
        int32_t **** const l_373 = &l_374[3];
        int32_t **** const *l_372 = &l_373;
        int8_t *l_456[7][1][1];
        uint32_t l_483 = 1UL;
        uint8_t ** const l_498 = (void*)0;
        const int32_t *l_520 = (void*)0;
        const int32_t **l_519 = &l_520;
        const int32_t ***l_518 = &l_519;
        const int32_t ****l_517 = &l_518;
        const int32_t *****l_516 = &l_517;
        int32_t *l_617 = &g_154.f3;
        int32_t **l_616 = &l_617;
        union U1 l_631 = {1L};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_374[i] = &l_375[1][0][1];
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_456[i][j][k] = &l_80[4];
            }
        }
        for (p_59 = 26; (p_59 == (-8)); --p_59)
        { 
            const uint16_t l_377 = 0UL;
            int32_t l_378 = 0xA5CE660AL;
            int32_t *l_381 = &g_154.f1;
            int16_t l_382[6][1][4] = {{{0x36C5L,0x8A32L,0x8A32L,0x36C5L}},{{0xB8DDL,(-5L),0x8A32L,0xE36BL}},{{0x36C5L,(-10L),0L,(-10L)}},{{(-10L),0x8A32L,0xB8DDL,(-10L)}},{{0xB8DDL,(-10L),0xE36BL,0xE36BL}},{{(-5L),(-5L),0L,0x36C5L}}};
            int8_t *l_383 = &l_80[1];
            int i, j, k;
            l_378 |= (safe_lshift_func_uint8_t_u_u((0L ^ (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((void*)0 == l_372) | p_59), (((*p_58) > (l_376[0][0] , ((p_59 == g_70[0]) , (*p_58)))) , p_59))), l_377))), 1));
            l_378 = (g_76 , (((*l_383) = (((safe_sub_func_uint8_t_u_u((1UL <= (l_130 &= l_155.f2)), (((0xCEEF7012F4078A75LL || 0xC316DBC8E60759EBLL) & ((*p_58) || (l_382[5][0][2] |= (((*l_381) &= 0x93D3CC05L) , (*p_58))))) ^ g_108.f0))) && g_6[2]) > p_56)) >= g_154.f3));
            if ((*p_58))
                break;
        }
lbl_401:
        if (l_155.f2)
            goto lbl_159;
        for (l_305 = 0; (l_305 >= (-14)); --l_305)
        { 
            union U1 **l_387 = &g_245;
            int32_t *l_391[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t **l_390[4] = {&l_391[2],&l_391[2],&l_391[2],&l_391[2]};
            int32_t l_393 = 0xF2078EF1L;
            uint8_t l_473 = 255UL;
            int32_t l_484[2][3][4] = {{{0x111E4297L,(-7L),0x111E4297L,0xB5459153L},{(-8L),(-8L),0xB5459153L,0xB5459153L},{(-7L),(-7L),1L,(-8L)}},{{(-8L),(-8L),1L,(-8L)},{(-7L),0x111E4297L,0xB5459153L,1L},{(-8L),0x111E4297L,0x111E4297L,(-8L)}}};
            uint32_t *l_490[3];
            uint8_t **l_497 = &g_360;
            uint16_t ***l_501 = (void*)0;
            uint16_t **l_503[6];
            uint16_t ***l_502 = &l_503[2];
            int64_t l_512[7] = {0xF75D4CFE8DD2AEACLL,0x5B145A4D8D048428LL,0xF75D4CFE8DD2AEACLL,0xF75D4CFE8DD2AEACLL,0x5B145A4D8D048428LL,0xF75D4CFE8DD2AEACLL,0xF75D4CFE8DD2AEACLL};
            const int32_t *****l_515 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_490[i] = &l_483;
            for (i = 0; i < 6; i++)
                l_503[i] = &g_178;
            for (l_87 = 0; (l_87 <= 6); l_87 += 1)
            { 
                int16_t l_388 = 1L;
                for (l_220 = 0; (l_220 <= 6); l_220 += 1)
                { 
                    union U1 **l_386[4][4] = {{&g_245,&g_245,&g_245,&g_245},{&g_245,&g_245,&g_245,&g_245},{&g_245,&g_245,&g_245,&g_245},{&g_245,&g_245,&g_245,&g_245}};
                    int i, j;
                    l_387 = l_386[1][1];
                }
                l_388 &= (*p_58);
            }
            if (((void*)0 == &p_57))
            { 
                uint16_t l_389 = 6UL;
                int32_t **l_392 = &l_391[2];
                if ((l_389 = (*p_58)))
                { 
                    uint8_t l_394 = 251UL;
                    l_392 = l_390[3];
                    if (l_389)
                        break;
                    l_394++;
                }
                else
                { 
                    uint8_t l_398 = 0xBDL;
                    l_398 = (l_389 > (p_59 != (safe_unary_minus_func_uint8_t_u((g_6[2] != (-10L))))));
                    return p_59;
                }
                if ((*p_58))
                    continue;
                for (g_154.f1 = 21; (g_154.f1 < (-29)); --g_154.f1)
                { 
                    if (g_20)
                        goto lbl_401;
                    return (**g_359);
                }
            }
            else
            { 
                uint32_t l_420 = 0x9E5D6C40L;
                int32_t *l_425 = &l_393;
                int32_t l_478 = 0x00777BBAL;
                int32_t l_485 = (-8L);
                int32_t l_486[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_486[i] = 0x7EA037D8L;
                for (l_130 = 19; (l_130 == 15); l_130 = safe_sub_func_uint16_t_u_u(l_130, 7))
                { 
                    uint64_t l_408 = 0UL;
                    uint16_t *l_421 = (void*)0;
                    uint16_t *l_422 = &l_153[0][2].f4.f0;
                    uint16_t *l_423[7][6] = {{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_45,&g_45,&g_45}};
                    int32_t ****l_426 = (void*)0;
                    int32_t ***l_428 = &l_390[3];
                    int32_t ****l_427 = &l_428;
                    int64_t *l_443 = &l_153[0][2].f3;
                    int32_t l_444 = 0x6C700A10L;
                    int i, j;
                    (***l_373) = (((*g_152) <= (safe_mod_func_uint16_t_u_u((l_393 |= (safe_add_func_uint16_t_u_u(((*g_178) |= ((*l_372) == (void*)0)), (p_59 & (((**g_359) , (g_424 |= ((++l_408) ^ (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((safe_mod_func_int8_t_s_s((l_420 != (p_59 ^ (*p_58))), p_56)) & 0L) & g_20))), p_56)) , p_56), p_56)), (*p_58)))))) , l_420))))), 0x284FL))) , p_58);
                    (***l_373) = l_425;
                    (*l_427) = &l_390[2];
                    l_153[0][2].f0 = (0xC82AL && (g_127[0] > ((safe_mod_func_int64_t_s_s(1L, ((**g_359) & (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((p_56 == (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((l_444 |= (g_175 , g_129)) | g_163[5]) == 0UL), 1UL)), l_393))), (-1L))), 5)) < p_56), p_59)), p_59))))) >= g_127[1])));
                }
                (*l_387) = (void*)0;
                if ((((*p_58) && (*l_425)) == (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x8214L, ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((+((void*)0 == l_456[1][0][0])) && (p_59 || (g_154 , p_56))), p_59)), 4L)) <= g_424), (*p_57))) , 0xBB35L))), 9L))))
                { 
                    int32_t l_465 = 6L;
                    int32_t l_477[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_477[i] = 0L;
                    l_478 ^= (l_477[2] ^= ((l_356[0][0][0] ^= ((safe_lshift_func_int16_t_s_s(0x6696L, (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(l_465, 7)) != ((safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((+0xDDL), (safe_mul_func_uint16_t_u_u(((*l_177) = (((*l_425) = ((*p_58) >= (*p_58))) && (l_473 = p_59))), (((!((safe_div_func_int64_t_s_s(g_20, 0x2DE26C104C878EB2LL)) <= p_59)) , g_6[2]) >= p_56))))) < 0x91L), 0x23DDED81374AA977LL)) && 0UL)), p_59)), (*p_57))))) & 0x382CDE5788755FE9LL)) || p_59));
                    l_478 = ((*l_425) = (l_477[0] = (*p_58)));
                    return p_59;
                }
                else
                { 
                    uint32_t l_487[2][4];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_487[i][j] = 0x1E7A2F8FL;
                    }
                    (*l_425) = ((safe_lshift_func_uint16_t_u_s((*p_57), (safe_sub_func_uint64_t_u_u((g_2 <= 1L), l_483)))) <= ((void*)0 == p_58));
                    ++l_487[0][1];
                    return p_59;
                }
            }
            l_393 = (l_484[0][1][0] = ((--g_70[0]) & (l_89[2] = ((*p_58) | ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((l_497 == l_498), 0)), (((((safe_sub_func_int8_t_s_s((((g_504 &= (((*l_502) = &l_177) == (void*)0)) , (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u((p_59 != (18446744073709551610UL == l_376[0][0].f0)), 4)))) | g_127[2]), 0x0C71L))) , 0xB8L), 0x77L)) , g_20) && 65535UL) || (*p_57)) < l_484[0][1][0]))) >= g_154.f3)))));
            l_153[0][2].f2 = (*p_58);
            for (g_129 = 0; (g_129 != 57); g_129++)
            { 
                int32_t l_523[6][2][4] = {{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}},{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}},{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}},{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}},{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}},{{0xAB22391CL,1L,0xAB22391CL,(-1L)},{0xAB22391CL,(-1L),0xAB22391CL,1L}}};
                int i, j, k;
                if ((*p_58))
                { 
                    l_512[5] &= 0x36EF26D0L;
                    g_513[0] = (g_263[4] < ((*l_497) != (void*)0));
                    if (p_56)
                        goto lbl_159;
                    (****l_372) = p_58;
                    l_356[3][3][4] &= (*p_58);
                }
                else
                { 
                    return (**g_359);
                }
                l_523[0][1][1] ^= (+((l_516 = l_515) != (g_521 = g_521)));
            }
        }
        for (g_218 = 0; (g_218 <= 2); g_218 += 1)
        { 
            uint8_t l_525 = 255UL;
            int16_t l_531 = 0L;
            int32_t l_533 = 0x3FBAF237L;
            int32_t l_534 = (-7L);
            uint64_t *l_557 = &g_163[4];
            int32_t **** const l_571 = &l_374[4];
            uint64_t l_585 = 0xE2714E93AEF57E2FLL;
            int32_t ****l_634 = &l_374[3];
            uint16_t l_636 = 8UL;
            int32_t l_642 = 0xDE2C9B1BL;
            int8_t l_643 = 1L;
            int32_t l_644 = 0xBCC736F2L;
            int32_t l_645 = 0L;
            for (g_424 = 0; (g_424 <= 2); g_424 += 1)
            { 
                int32_t l_524 = 0x009775F6L;
                int32_t l_536 = 0x4CCF9BC4L;
                int i;
                l_525--;
                l_524 = (((p_56 , l_155) , ((0UL == ((safe_rshift_func_uint16_t_u_s((*g_178), (p_59 = 1L))) , (~(l_356[4][2][3] &= p_56)))) == (0xA875E19EL >= l_531))) | g_127[2]);
                for (g_154.f3 = 0; (g_154.f3 <= 1); g_154.f3 += 1)
                { 
                    int32_t l_532 = 3L;
                    int32_t l_535[1];
                    uint64_t *l_556 = &g_163[5];
                    uint64_t **l_555 = &l_556;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_535[i] = (-10L);
                    ++l_537;
                    l_532 |= (0xAE47CD12D00E676ALL && (safe_lshift_func_uint8_t_u_u((((g_74[g_154.f3] >= (safe_unary_minus_func_int16_t_s(0xE0EDL))) ^ p_56) != 0x31L), 3)));
                    l_524 |= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(g_67, l_533)), g_513[1]));
                    l_536 &= (l_534 = (safe_lshift_func_int16_t_s_s(0x4B3DL, (((((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0x6AL, (-1L))), (safe_rshift_func_uint8_t_u_u(((((*g_180) = (((*l_555) = &g_263[4]) != (g_558 = l_557))) & ((&p_57 != g_559) <= (*p_58))) & 251UL), p_59)))) && (*p_58)) && 0x46L) , 0x7798L) || g_163[5]))));
                    (**l_518) = p_58;
                }
            }
            for (l_341 = 0; (l_341 <= 2); l_341 += 1)
            { 
                uint64_t *l_584[5][6] = {{&g_263[4],&g_163[2],&g_263[4],&g_163[2],&g_263[4],&g_163[2]},{(void*)0,&g_163[2],(void*)0,&g_163[2],(void*)0,&g_163[2]},{&g_263[4],&g_163[2],&g_263[4],&g_163[2],&g_263[4],&g_163[2]},{(void*)0,&g_163[2],(void*)0,&g_163[2],(void*)0,&g_163[2]},{&g_263[4],&g_163[2],&g_263[4],&g_163[2],&g_263[4],&g_163[2]}};
                union U1 l_586 = {5L};
                uint16_t **l_593 = (void*)0;
                uint16_t ***l_592 = &l_593;
                int32_t * const l_601[7][7] = {{&g_67,&g_67,&g_67,&g_154.f1,&g_154.f1,&g_67,&g_67},{&g_154.f1,&g_67,(void*)0,(void*)0,&g_67,&g_154.f1,&g_67},{&g_67,&g_154.f1,&g_154.f1,&g_67,&g_67,&g_67,&g_154.f1},{(void*)0,(void*)0,&g_154.f1,(void*)0,&g_154.f1,(void*)0,(void*)0},{(void*)0,&g_154.f1,(void*)0,&g_154.f1,(void*)0,(void*)0,&g_154.f1},{&g_67,&g_67,&g_67,&g_154.f1,&g_154.f1,&g_67,&g_67},{&g_154.f1,&g_67,(void*)0,(void*)0,&g_67,&g_154.f1,&g_67}};
                int32_t * const *l_600 = &l_601[3][2];
                int32_t ****l_611[5];
                const int32_t ****l_632 = &l_518;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_611[i] = &l_374[1];
                if ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((0x31L != ((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((void*)0 == l_571), (safe_mod_func_uint8_t_u_u(0xC0L, ((safe_div_func_uint8_t_u_u(((g_127[1] , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((((l_585 ^= ((*l_557) |= (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(0xDCCCL, ((((g_263[4] , p_56) , l_584[2][2]) != (void*)0) ^ g_263[3]))), p_59)))) , 18446744073709551612UL) < g_6[2]) < p_59), p_56)), 14))) , (**g_359)), 0xDFL)) , 0x8EL))))) && (*p_57)), 0x6E58260CL)) != p_56)) | g_504) != 0L), (**g_359))), g_70[0])), p_59)) && 0xEAL))))
                { 
                    int32_t l_594 = 0xBEEAAB37L;
                    int32_t l_595[7];
                    int32_t *l_599 = &g_154.f1;
                    int32_t **l_598 = &l_599;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_595[i] = 0x59A113D8L;
                    (***l_571) = (void*)0;
                    l_534 |= (l_595[6] &= (l_586 , (l_586 , ((((*g_521) = (*g_521)) != (void*)0) , (~(0x14L & (safe_div_func_uint8_t_u_u(p_56, (((safe_add_func_uint8_t_u_u(((p_59 , &g_559) == l_592), l_594)) < 1L) & l_594)))))))));
                    l_595[1] = (l_602 ^= (safe_rshift_func_int8_t_s_u((l_598 == l_600), 4)));
                    l_153[0][2].f0 = l_586.f0;
                }
                else
                { 
                    int32_t l_612 = 1L;
                    int32_t l_615 = 0x9D3B6FB0L;
                    int32_t ***l_618 = (void*)0;
                    int32_t **l_620 = &l_617;
                    int32_t ***l_619 = &l_620;
                    const int32_t *****l_633 = &l_632;
                    int32_t ****l_635 = &l_374[3];
                    l_534 = l_534;
                    l_533 |= (safe_rshift_func_int8_t_s_s((!4294967292UL), 3));
                    (****l_372) = p_58;
                    l_615 |= ((+(((safe_add_func_int32_t_s_s(((p_58 != (void*)0) ^ l_586.f0), (safe_mul_func_int8_t_s_s(((l_612 = (((*g_521) = l_611[0]) == (void*)0)) < (safe_rshift_func_uint16_t_u_s(0x9BC7L, g_163[3]))), p_56)))) || 0x8D9FED6BL) & (*g_558))) == p_59);
                    l_638[2][1] = ((l_616 == ((*l_619) = &l_617)) & (p_59 > (safe_rshift_func_int8_t_s_u((l_612 < (((safe_add_func_uint16_t_u_u(((*g_180) = ((safe_lshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_631 , ((*g_178) = (((*l_633) = l_632) != (l_635 = ((*g_521) = l_634))))), 3)), p_59)) > l_636) || p_59), g_127[2])) , g_637[2][0])), (*p_57))) != p_56) == g_20)), 4))));
                }
                for (g_154.f3 = 2; (g_154.f3 >= 0); g_154.f3 -= 1)
                { 
                    int64_t l_639 = (-1L);
                    int32_t l_640 = 0x8CFC35F7L;
                    int32_t l_641 = 0x816E08C1L;
                    int64_t l_646 = 9L;
                    int32_t l_650 = (-1L);
                    int8_t l_651 = 0xEDL;
                    int32_t l_652 = 0xEBCDDD43L;
                    int32_t l_653 = 0xF21FC4A2L;
                    int32_t l_655 = (-2L);
                    int32_t l_656 = 0xB221229DL;
                    int32_t l_657 = 0x865E4406L;
                    int32_t l_658 = (-1L);
                    uint32_t l_659 = 0x24F71A72L;
                    int i, j, k;
                    l_640 = (l_639 = (*p_58));
                    --g_647;
                    ++l_659;
                    l_356[0][0][0] = 5L;
                    (*l_519) = p_58;
                }
            }
        }
    }
    (*l_682) &= ((safe_sub_func_uint8_t_u_u(((*l_681) |= (l_356[2][0][0] = (((*l_680) = ((safe_sub_func_uint32_t_u_u(0x67F25ADCL, 1L)) != ((*p_57) > (((((safe_sub_func_uint64_t_u_u((++(*g_558)), (safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((g_424 ^ p_56), (safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((**g_359), ((*l_679) = ((((l_155 , 1UL) && l_678) != p_56) > g_127[1])))) < p_56), p_56)))) >= 253UL) == (*p_58)) > 0xCAFEFEACBEBD034FLL), p_59)))) && p_56) != l_363[2][5][3]) ^ (*g_360)) <= p_59)))) == g_647))), p_59)) >= p_59);
    return (**g_359);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f2, "g_108.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    transparent_crc(g_154.f4, "g_154.f4", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);

    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_263[i], "g_263[i]", print_hash_value);

    }
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_513[i], "g_513[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_637[i][j], "g_637[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1096[i], "g_1096[i]", print_hash_value);

    }
    transparent_crc(g_1197.f0, "g_1197.f0", print_hash_value);
    transparent_crc(g_1197.f1, "g_1197.f1", print_hash_value);
    transparent_crc(g_1197.f2, "g_1197.f2", print_hash_value);
    transparent_crc(g_1197.f3, "g_1197.f3", print_hash_value);
    transparent_crc(g_1197.f4, "g_1197.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1437[i][j][k], "g_1437[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1472, "g_1472", print_hash_value);
    transparent_crc(g_1477.f0, "g_1477.f0", print_hash_value);
    transparent_crc(g_1477.f1, "g_1477.f1", print_hash_value);
    transparent_crc(g_1477.f2, "g_1477.f2", print_hash_value);
    transparent_crc(g_1477.f3, "g_1477.f3", print_hash_value);
    transparent_crc(g_1477.f4, "g_1477.f4", print_hash_value);
    transparent_crc(g_1498, "g_1498", print_hash_value);
    transparent_crc(g_1598, "g_1598", print_hash_value);
    transparent_crc(g_1615, "g_1615", print_hash_value);
    transparent_crc(g_1618, "g_1618", print_hash_value);
    transparent_crc(g_1668, "g_1668", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1702[i][j][k], "g_1702[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1703, "g_1703", print_hash_value);
    transparent_crc(g_1736, "g_1736", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1746[i][j][k], "g_1746[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1773, "g_1773", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
