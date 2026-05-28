// SPDX-License-Identifier: MIT
// cctest_csmith_b105e359.c --- cctest case csmith_b105e359 (csmith seed 2969953113)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaeeef8ba */
/* @exp_ticks 0x424d */

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

// Options:   -s 2969953113 -o /tmp/csmith_gen_d1jle23u/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint8_t  f1;
   uint8_t  f2;
   int64_t  f3;
};
#pragma pack(pop)

union U1 {
   const int8_t  f0;
   const uint8_t  f1;
   const int16_t  f2;
   const int8_t  f3;
};

union U2 {
   struct S0  f0;
   uint16_t  f1;
   uint32_t  f2;
};

union U3 {
   uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   uint16_t  f3;
};


static uint32_t g_7 = 4294967295UL;
static const struct S0 g_26 = {1L,255UL,0x11L,-2L};
static uint64_t g_32[5][1][3] = {{{0xEB999C826FFEA1E1LL,18446744073709551614UL,18446744073709551614UL}},{{9UL,18446744073709551614UL,0x0320BA2C160EC253LL}},{{18446744073709551612UL,0xEB999C826FFEA1E1LL,8UL}},{{9UL,9UL,8UL}},{{0xEB999C826FFEA1E1LL,18446744073709551612UL,0x0320BA2C160EC253LL}}};
static union U3 g_33 = {0x50D5D742L};
static struct S0 g_52 = {0xE3B4L,5UL,1UL,-3L};
static const union U1 g_68 = {-1L};
static int8_t g_70 = (-2L);
static uint32_t g_94 = 4294967295UL;
static int32_t g_95 = (-5L);
static int32_t g_127[2] = {(-10L),(-10L)};
static int32_t g_134 = 0x169A6022L;
static union U2 g_191 = {{-4L,0UL,1UL,9L}};
static int32_t g_313 = 7L;
static int32_t g_374 = 0x5C1A0240L;



static int64_t  func_1(void);
static int16_t  func_10(union U2  p_11, uint32_t  p_12, uint8_t  p_13);
static union U2  func_14(union U3  p_15, union U2  p_16, int64_t  p_17, struct S0  p_18);
static union U3  func_19(uint64_t  p_20, int64_t  p_21, union U2  p_22, uint32_t  p_23, const struct S0  p_24);




static int64_t  func_1(void)
{ 
    int64_t l_2[4][2] = {{0xFE30F5872D9EE1C9LL,0xCDC345FE46C2E7CCLL},{0xFE30F5872D9EE1C9LL,0xFE30F5872D9EE1C9LL},{0xCDC345FE46C2E7CCLL,0xFE30F5872D9EE1C9LL},{0xFE30F5872D9EE1C9LL,0xCDC345FE46C2E7CCLL}};
    int32_t l_8[5][2][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L}}};
    union U2 l_25 = {{1L,253UL,0x79L,0xF9E6A0122D800F4DLL}};
    union U2 l_276 = {{1L,0x8CL,2UL,0L}};
    int16_t l_410 = 0xE896L;
    int16_t l_436 = 0L;
    union U1 l_451 = {0L};
    int16_t l_491 = 0x1422L;
    int i, j, k;
    l_2[0][0] ^= 0xBA07E4FCL;
    if ((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_2[2][1], 5)), ((((g_7 , (g_7 = (l_8[4][1][1] = 0x289FFF12L))) , ((~func_10((l_25 = func_14(func_19((18446744073709551611UL <= g_7), g_7, l_25, l_25.f1, g_26), l_276, l_8[1][1][2], g_26)), l_276.f1, l_8[4][1][1])) , l_25.f1)) != 0L) < g_68.f1))))
    { 
        int8_t l_409 = (-10L);
        int32_t l_413 = 0x68358677L;
        uint64_t l_454 = 18446744073709551606UL;
        if ((safe_rshift_func_int16_t_s_s((g_52.f0 = ((l_8[0][0][2] = l_409) | ((((g_52.f3 || ((((l_409 == l_409) | g_33.f1) || l_2[0][0]) , g_68.f1)) ^ l_410) ^ l_410) != l_25.f2))), l_2[0][0])))
        { 
            struct S0 l_411[4][3][3] = {{{{0x46B0L,0x7DL,0x7DL,0L},{0L,0UL,255UL,0L},{-1L,0x0CL,0x9AL,0xF3973B3068C0FA9ELL}},{{0x0244L,5UL,0xB0L,-1L},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0xCFF8L,255UL,247UL,-3L}},{{1L,0UL,251UL,1L},{0L,0UL,255UL,0L},{0L,0UL,255UL,0L}}},{{{0x073FL,255UL,1UL,0xABFFE2A92A619D03LL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0x9A96L,254UL,1UL,0x5BF8BA87FB0D7EB0LL}},{{5L,0x9AL,250UL,0xA360B77458CF2B4BLL},{0L,0UL,255UL,0L},{0x0697L,6UL,0x1AL,0xCDE2C682F5772A3FLL}},{{-1L,0UL,0x73L,0x7F99600B08A2019CLL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL}}},{{{0x46B0L,0x7DL,0x7DL,0L},{0L,0UL,255UL,0L},{-1L,0x0CL,0x9AL,0xF3973B3068C0FA9ELL}},{{0x0244L,5UL,0xB0L,-1L},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0xCFF8L,255UL,247UL,-3L}},{{1L,0UL,251UL,1L},{0L,0UL,255UL,0L},{0L,0UL,255UL,0L}}},{{{0x073FL,255UL,1UL,0xABFFE2A92A619D03LL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0x9A96L,254UL,1UL,0x5BF8BA87FB0D7EB0LL}},{{5L,0x9AL,250UL,0xA360B77458CF2B4BLL},{0L,0UL,255UL,0L},{0x0697L,6UL,0x1AL,0xCDE2C682F5772A3FLL}},{{-1L,0UL,0x73L,0x7F99600B08A2019CLL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL},{0xBC42L,8UL,9UL,0x8BC64B8D93F8C166LL}}}};
            int32_t l_412 = (-6L);
            int32_t l_414 = 0x5C5E2A3CL;
            int32_t l_415 = 0xF60B59D0L;
            uint64_t l_416 = 0x755B596BDCC6A146LL;
            int i, j, k;
            g_52 = l_411[2][2][1];
            l_416++;
        }
        else
        { 
            uint32_t l_419 = 0UL;
            int32_t l_425 = (-6L);
            l_425 &= (l_413 & ((g_191.f0.f0 = l_419) <= (((l_2[1][1] | ((~(g_94--)) < (((safe_add_func_uint64_t_u_u(g_68.f0, l_419)) , l_409) ^ l_8[0][1][0]))) != 4294967295UL) && 18446744073709551607UL)));
            g_134 &= (safe_lshift_func_int16_t_s_s(l_413, (l_8[4][1][1] = (g_191.f0.f0 = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((((g_127[0] = (safe_mod_func_uint16_t_u_u((l_436 &= l_276.f0.f3), (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x29L, l_419)), 0x3FL)) ^ l_425), l_25.f2)), g_313))))) >= g_33.f1) != g_7), (-1L))) <= 1L) , l_425), 0x3BFE93EFL)), l_413)) >= g_68.f1)))));
            if (l_419)
            { 
                g_52 = g_26;
            }
            else
            { 
                struct S0 l_445[3][3][3] = {{{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}}},{{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}}},{{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}},{{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL},{0L,0x22L,246UL,0x1491155E7E40898ALL}}}};
                int i, j, k;
                l_445[0][0][2] = g_52;
                l_413 = (!(safe_mul_func_int8_t_s_s((g_127[0] < (g_68 , ((safe_add_func_uint64_t_u_u((((l_451 , g_33) , l_409) > g_95), l_451.f1)) ^ l_413))), g_191.f1)));
            }
        }
        for (l_25.f1 = (-21); (l_25.f1 < 3); l_25.f1 = safe_add_func_int16_t_s_s(l_25.f1, 8))
        { 
            --l_454;
            for (l_409 = 22; (l_409 > (-6)); l_409 = safe_sub_func_uint32_t_u_u(l_409, 4))
            { 
                g_191.f0 = l_276.f0;
                if (g_68.f0)
                    break;
            }
        }
    }
    else
    { 
        int32_t l_459 = 0xCE8F0860L;
        uint8_t l_460 = 0xF3L;
        uint8_t l_479 = 255UL;
        l_460--;
        l_8[4][1][1] = (safe_rshift_func_uint8_t_u_s(((((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((g_26.f0 != (g_191.f1 != (safe_mul_func_int8_t_s_s(g_26.f2, ((safe_div_func_uint64_t_u_u(l_25.f0.f3, g_95)) ^ g_7))))), g_134)) | 18446744073709551611UL), g_33.f1)), 0x55209EA7L)), g_94)), g_94)) | l_25.f0.f2) , l_479) == g_52.f0), 6));
        return l_460;
    }
    if (l_436)
    { 
        struct S0 l_483[3][3][4] = {{{{0x9C9EL,4UL,0x24L,0x430DF94836F794D4LL},{0x93FFL,1UL,0x05L,-1L},{0x2204L,0x23L,255UL,0x2D194908EAF58D7DLL},{0x51B8L,1UL,1UL,-1L}},{{0x2204L,0x23L,255UL,0x2D194908EAF58D7DLL},{0x51B8L,1UL,1UL,-1L},{1L,255UL,0x2CL,6L},{0x2204L,0x23L,255UL,0x2D194908EAF58D7DLL}},{{0L,255UL,0x18L,-8L},{0x51B8L,1UL,1UL,-1L},{-9L,0xB5L,0x05L,0xE15538C678B9B127LL},{0x51B8L,1UL,1UL,-1L}}},{{{0x51B8L,1UL,1UL,-1L},{0x93FFL,1UL,0x05L,-1L},{0xC722L,0UL,255UL,-1L},{0xF8A9L,0xD5L,0UL,0L}},{{0x3135L,1UL,1UL,0x85DC7D5EA36C449BLL},{0L,255UL,0x18L,-8L},{1L,255UL,0x2CL,6L},{0xC722L,0UL,255UL,-1L}},{{0x9C9EL,4UL,0x24L,0x430DF94836F794D4LL},{1L,0UL,0x69L,5L},{-1L,255UL,0xEBL,4L},{0x51B8L,1UL,1UL,-1L}}},{{{0x9C9EL,4UL,0x24L,0x430DF94836F794D4LL},{1L,255UL,0x2CL,6L},{1L,255UL,0x2CL,6L},{0x9C9EL,4UL,0x24L,0x430DF94836F794D4LL}},{{0x3135L,1UL,1UL,0x85DC7D5EA36C449BLL},{0x51B8L,1UL,1UL,-1L},{0xC722L,0UL,255UL,-1L},{1L,255UL,0x2CL,6L}},{{0x51B8L,1UL,1UL,-1L},{1L,0UL,0x69L,5L},{-9L,0xB5L,0x05L,0xE15538C678B9B127LL},{0xF8A9L,0xD5L,0UL,0L}}}};
        int32_t l_485 = 0L;
        int32_t l_492 = 0x7CD9DED6L;
        int32_t l_497 = 0xFC536D9FL;
        int32_t l_527 = 0x932E26F1L;
        int i, j, k;
        if ((+(safe_mod_func_int8_t_s_s(((0UL >= (l_485 = ((l_483[0][2][2] , ((safe_unary_minus_func_int64_t_s(1L)) && (l_2[0][0] == l_483[0][2][2].f3))) && l_451.f0))) == 0x5309L), g_33.f2))))
        { 
            int32_t l_488[1][3][4] = {{{0xF98412BEL,0xF98412BEL,0x6A88F2D5L,0L},{0xBC0CF6C1L,0x807944E3L,0xBC0CF6C1L,0x6A88F2D5L},{0xBC0CF6C1L,0x6A88F2D5L,0x6A88F2D5L,0xBC0CF6C1L}}};
            int8_t l_494 = 0xCAL;
            uint8_t l_498[1];
            int32_t l_528[4] = {1L,1L,1L,1L};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_498[i] = 0xE2L;
            g_127[1] = (((l_483[0][2][2].f1 && g_52.f2) <= (safe_lshift_func_uint8_t_u_u(l_488[0][1][3], 3))) , (g_134 &= ((l_488[0][1][3] <= l_488[0][2][2]) < l_451.f3)));
            for (g_70 = (-3); (g_70 != (-3)); g_70 = safe_add_func_int64_t_s_s(g_70, 8))
            { 
                int16_t l_493[1];
                int32_t l_495 = 0xAA486AC2L;
                int32_t l_496 = 0xA388BEC4L;
                struct S0 l_503[4] = {{-1L,0x9EL,255UL,0x3F11E41D468F987CLL},{-1L,0x9EL,255UL,0x3F11E41D468F987CLL},{-1L,0x9EL,255UL,0x3F11E41D468F987CLL},{-1L,0x9EL,255UL,0x3F11E41D468F987CLL}};
                int i;
                for (i = 0; i < 1; i++)
                    l_493[i] = 9L;
                ++l_498[0];
                l_8[4][1][3] |= (safe_rshift_func_uint8_t_u_u(l_488[0][2][1], 3));
                l_503[3] = l_503[1];
            }
            for (g_33.f0 = (-4); (g_33.f0 != 52); g_33.f0 = safe_add_func_uint64_t_u_u(g_33.f0, 2))
            { 
                int64_t l_518 = 1L;
                l_518 = (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s(((g_70 = ((l_410 <= (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_70, 4)), l_276.f0.f2))) || (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_33.f1, 0x09L)), l_276.f2)) && g_68.f1) || l_436))) , g_33.f1), 255UL)), g_191.f1));
                l_485 |= (((!l_488[0][1][3]) <= ((safe_add_func_int32_t_s_s(l_518, ((safe_mod_func_int64_t_s_s(l_518, ((l_528[3] = (safe_rshift_func_uint16_t_u_s(((l_527 &= (+l_494)) >= 6L), g_7))) ^ l_498[0]))) && g_68.f3))) | g_52.f1)) >= 255UL);
            }
        }
        else
        { 
            int64_t l_531 = 9L;
            l_8[3][0][2] ^= ((((g_70 | (safe_sub_func_uint16_t_u_u((0x5CL == (l_531 < 0x85BD0553L)), l_531))) & l_276.f0.f3) ^ l_491) == g_33.f2);
        }
    }
    else
    { 
        int8_t l_540 = (-1L);
        for (l_276.f0.f3 = 0; (l_276.f0.f3 <= 17); l_276.f0.f3 = safe_add_func_int32_t_s_s(l_276.f0.f3, 1))
        { 
            int8_t l_539 = 2L;
            g_134 = (4294967288UL >= ((g_52.f0 || ((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s((g_191.f1 , ((1UL == g_127[0]) | 0x05L)))), g_68.f1)) | l_539)) != l_540));
        }
    }
    return l_276.f0.f0;
}



static int16_t  func_10(union U2  p_11, uint32_t  p_12, uint8_t  p_13)
{ 
    uint8_t l_282[1];
    const uint16_t l_289 = 5UL;
    int32_t l_290[2];
    union U2 l_342 = {{-1L,0xE9L,254UL,0x90E8C7D59FAB1A84LL}};
    const int16_t l_354 = (-1L);
    uint32_t l_387[5][5][4] = {{{4294967295UL,0x19E0C032L,0x8CB365A6L,1UL},{0x50B02B7DL,0x9E704990L,0x50B02B7DL,4294967295UL},{8UL,4294967290UL,0x9E2F6929L,0x50B02B7DL},{0UL,0x9E2F6929L,0UL,4294967290UL},{4294967295UL,0xED34CF2FL,0UL,0x84F80DE2L}},{{0UL,0x19E0C032L,0x9E2F6929L,4294967295UL},{8UL,4294967292UL,0x50B02B7DL,0x8CB365A6L},{0x50B02B7DL,0x8CB365A6L,0x8CB365A6L,0x50B02B7DL},{4294967295UL,0UL,4294967295UL,0x9E2F6929L},{4294967295UL,0UL,0x84F80DE2L,0UL}},{{0x29D6BD1BL,0x19E0C032L,4294967290UL,0UL},{0UL,0UL,0x50B02B7DL,0x9E2F6929L},{0x05B8496FL,0UL,4294967295UL,0x50B02B7DL},{0x19E0C032L,0x50B02B7DL,0x9E704990L,0x50B02B7DL},{0x4CFCB6A1L,4294967295UL,0UL,0xED34CF2FL}},{{0x8CB365A6L,4294967295UL,8UL,4294967292UL},{0x45002374L,0x29D6BD1BL,0UL,0x05B8496FL},{0x45002374L,0UL,8UL,0UL},{0x8CB365A6L,0x05B8496FL,0UL,0x4CFCB6A1L},{0x4CFCB6A1L,0x19E0C032L,0x9E704990L,0x9E704990L}},{{4294967295UL,4294967295UL,0x4CFCB6A1L,0UL},{0x84F80DE2L,4294967290UL,0UL,8UL},{1UL,0x4CFCB6A1L,0x05B8496FL,0UL},{0x9E2F6929L,0x4CFCB6A1L,4294967292UL,8UL},{0x4CFCB6A1L,4294967290UL,0xED34CF2FL,0UL}}};
    uint32_t l_405 = 0UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_282[i] = 1UL;
    for (i = 0; i < 2; i++)
        l_290[i] = 0L;
    if ((l_290[1] = (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_282[0] & (safe_rshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((-9L), (safe_div_func_uint32_t_u_u(p_11.f2, (0x54F7L || 0x36C7L))))) , l_289), g_26.f2))), p_11.f0.f1)), l_282[0]))))
    { 
        uint32_t l_311 = 0xFDFF1679L;
        int8_t l_317 = 0x9FL;
        int32_t l_321 = 0L;
        for (g_191.f1 = (-18); (g_191.f1 < 1); g_191.f1 = safe_add_func_int8_t_s_s(g_191.f1, 5))
        { 
            int64_t l_312[3];
            union U1 l_316[5][1] = {{{2L}},{{0x54L}},{{2L}},{{0x54L}},{{2L}}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_312[i] = 0x59207944348006E1LL;
            g_134 = (safe_mul_func_uint16_t_u_u(1UL, (p_11 , 1UL)));
            if ((((l_290[1] = (safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_11.f1, (safe_add_func_uint8_t_u_u((++p_13), (g_33 , (safe_lshift_func_int8_t_s_s(0x96L, 3))))))), (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((l_311 = g_68.f1), p_11.f2)) > p_12), 0)))), l_312[0]))) , p_11.f0.f0) ^ g_313))
            { 
                return g_68.f3;
            }
            else
            { 
                uint64_t l_318 = 18446744073709551608UL;
                if (l_312[0])
                    break;
                g_134 = ((0xEEL <= 1L) < (safe_div_func_int16_t_s_s((l_316[3][0] , (l_317 < 0xD5E205D0AC4E5A00LL)), 0x0064L)));
                ++l_318;
            }
            l_321 = 1L;
        }
        l_290[0] = (safe_mul_func_int16_t_s_s((0xD8L && (safe_sub_func_uint16_t_u_u((l_289 <= (safe_lshift_func_uint16_t_u_s(g_32[3][0][0], 7))), (safe_div_func_uint8_t_u_u((g_191.f0.f1 = (((p_12 < g_127[0]) , g_134) >= 0x4345ABB8L)), l_282[0]))))), 0x1C36L));
    }
    else
    { 
        uint16_t l_341[3];
        int32_t l_343[1];
        struct S0 l_344 = {0x0137L,246UL,251UL,0x181D68D85174530BLL};
        union U3 l_357 = {0UL};
        int8_t l_406 = 0x93L;
        int i;
        for (i = 0; i < 3; i++)
            l_341[i] = 3UL;
        for (i = 0; i < 1; i++)
            l_343[i] = 0xDFFA5379L;
        if (g_191.f0.f3)
        { 
            for (g_191.f0.f0 = 0; (g_191.f0.f0 != 0); g_191.f0.f0 = safe_add_func_uint16_t_u_u(g_191.f0.f0, 9))
            { 
                uint32_t l_332 = 3UL;
                g_134 = 0xDAC9BB0EL;
                l_332 = 0x28780DDDL;
            }
lbl_359:
            for (p_11.f0.f0 = 0; (p_11.f0.f0 > (-2)); p_11.f0.f0 = safe_sub_func_uint64_t_u_u(p_11.f0.f0, 8))
            { 
                l_343[0] = (safe_add_func_int64_t_s_s(((!(safe_mul_func_int8_t_s_s((((~((l_282[0] , func_19(l_290[1], l_341[2], l_342, l_341[2], p_11.f0)) , g_191.f2)) ^ 0x2DD593ABL) == l_342.f0.f0), (-4L)))) & l_282[0]), l_341[1]));
                g_52 = p_11.f0;
                return g_68.f1;
            }
lbl_375:
            l_344 = g_52;
        }
        else
        { 
            uint8_t l_348 = 0xECL;
            union U2 l_356 = {{0x896BL,251UL,0x3BL,1L}};
            int32_t l_358 = (-1L);
            int32_t l_383 = (-1L);
            int32_t l_385 = 0xEBB3E9F4L;
            int32_t l_386 = (-1L);
            for (p_11.f0.f2 = 0; (p_11.f0.f2 <= 42); p_11.f0.f2++)
            { 
                uint32_t l_355 = 0UL;
                l_343[0] = (l_358 = (!(((l_348 <= ((g_52.f0 || ((l_357 = func_19(((((-1L) < ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(p_11.f0.f1)) ^ p_11.f0.f3), l_354)), p_11.f0.f0)) <= p_11.f0.f0)) ^ p_13) | g_134), l_355, l_356, g_94, g_52)) , 0x7F9ACB23L)) == g_26.f2)) && l_357.f3) && (-1L))));
                if (g_26.f3)
                    goto lbl_359;
                l_290[1] = p_13;
            }
            if (p_12)
            { 
                int64_t l_373 = 0L;
                g_134 = (g_127[0] = (safe_sub_func_uint32_t_u_u((0x5355L != 0x051CL), (safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_u((((safe_div_func_uint64_t_u_u(18446744073709551612UL, (safe_sub_func_int8_t_s_s((l_290[1] ^= (safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((g_33.f0 <= g_7), l_342.f0.f0)) & (-6L)) && 65532UL), l_373))), l_357.f3)))) <= 1UL) <= g_33.f3), g_374)))))));
                if (g_191.f0.f0)
                    goto lbl_375;
                g_127[1] = (+(safe_mod_func_uint32_t_u_u((((((safe_lshift_func_int8_t_s_s((0x43L <= (((((l_373 > 0x388B4046L) , p_13) <= (-1L)) > 0xF4792D4B6FAAA504LL) ^ g_52.f1)), 2)) != g_374) , p_11.f0.f0) , g_52.f1) && l_290[1]), 0xBBA51722L)));
            }
            else
            { 
                int32_t l_381 = (-10L);
                int32_t l_382 = 0x178A9D31L;
                int32_t l_384[4][1];
                int64_t l_395 = 0xF6BD077340E4FFF8LL;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_384[i][j] = 0x3ABB0B63L;
                }
                --l_387[1][1][3];
                g_127[0] |= ((g_191.f0.f2 != (safe_add_func_uint16_t_u_u(g_33.f2, (l_384[0][0] = (~g_32[1][0][2]))))) >= (safe_mod_func_uint32_t_u_u(((p_11.f2 = (((p_11.f0.f3 < g_94) <= g_191.f0.f2) & l_395)) , l_356.f0.f0), l_358)));
                l_384[1][0] = (-1L);
            }
        }
        l_406 |= ((safe_div_func_int16_t_s_s((g_191.f0.f0 = ((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(65530UL)) < (g_191.f1 == ((safe_mul_func_int8_t_s_s((1L <= (safe_mod_func_uint64_t_u_u(0x59EC436E84EA6F82LL, l_290[0]))), p_11.f2)) | 1UL))), l_405)) || p_11.f2)), g_95)) == p_12);
    }
    return p_13;
}



static union U2  func_14(union U3  p_15, union U2  p_16, int64_t  p_17, struct S0  p_18)
{ 
    union U2 l_277[2][1][5] = {{{{{0L,0UL,0x50L,0x4551D6868DB94445LL}},{{0L,0UL,0x50L,0x4551D6868DB94445LL}},{{0x33ADL,255UL,7UL,0x35C62C87CCA9B615LL}},{{0x2FD5L,4UL,0UL,1L}},{{0x33ADL,255UL,7UL,0x35C62C87CCA9B615LL}}}},{{{{0L,0UL,0x50L,0x4551D6868DB94445LL}},{{0L,0UL,0x50L,0x4551D6868DB94445LL}},{{0x33ADL,255UL,7UL,0x35C62C87CCA9B615LL}},{{0x2FD5L,4UL,0UL,1L}},{{0x33ADL,255UL,7UL,0x35C62C87CCA9B615LL}}}}};
    int i, j, k;
    p_16.f0 = g_52;
    return l_277[1][0][2];
}



static union U3  func_19(uint64_t  p_20, int64_t  p_21, union U2  p_22, uint32_t  p_23, const struct S0  p_24)
{ 
    int8_t l_27[2][5][4] = {{{0x5CL,(-9L),0x65L,1L},{4L,(-7L),4L,0x67L},{4L,0x67L,0x65L,0x69L},{0x5CL,0x67L,(-7L),0x67L},{0x65L,(-7L),(-7L),1L}},{{0x5CL,(-9L),0x65L,1L},{4L,(-7L),4L,0x67L},{4L,0x67L,0x65L,0x69L},{0x5CL,0x67L,(-7L),0x67L},{0x65L,(-7L),(-7L),1L}}};
    uint32_t l_35[1];
    int32_t l_36 = 0L;
    int32_t l_37 = 0x81BE2FC3L;
    int64_t l_48 = 0x995FB43C6211EE15LL;
    struct S0 l_51 = {0xCDE2L,0UL,8UL,0L};
    int32_t l_132[2];
    int64_t l_133 = (-1L);
    uint8_t l_135[3][4][2] = {{{8UL,0UL},{0UL,0UL},{8UL,0UL},{0UL,0UL}},{{8UL,0UL},{0UL,0UL},{8UL,0UL},{0UL,0UL}},{{8UL,0UL},{0UL,0UL},{8UL,0UL},{0UL,0UL}}};
    uint32_t l_210 = 0x9BD9F565L;
    union U3 l_275[2][1][4] = {{{{0x96840D0DL},{4UL},{0x96840D0DL},{4UL}}},{{{0x96840D0DL},{4UL},{0x96840D0DL},{4UL}}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_35[i] = 0xF642D949L;
    for (i = 0; i < 2; i++)
        l_132[i] = (-6L);
lbl_224:
    for (p_22.f1 = 0; (p_22.f1 <= 1); p_22.f1 += 1)
    { 
        int64_t l_47 = (-1L);
        int32_t l_50[2];
        struct S0 l_54 = {0x4B87L,0x8EL,0x75L,-5L};
        int i;
        for (i = 0; i < 2; i++)
            l_50[i] = 0xC4A2FBAAL;
        for (p_21 = 1; (p_21 >= 0); p_21 -= 1)
        { 
            int8_t l_34 = 0L;
            int32_t l_49 = 0x2D46FEDEL;
            l_37 &= ((l_36 = (safe_rshift_func_int16_t_s_u((((safe_mod_func_uint64_t_u_u((((0xE8L & (g_32[4][0][0] = g_26.f0)) > ((g_33 , ((l_34 == p_22.f1) & p_20)) , p_24.f2)) != l_35[0]), p_24.f3)) >= g_33.f2) & p_24.f3), l_34))) & l_34);
            for (g_33.f2 = 1; (g_33.f2 >= 0); g_33.f2 -= 1)
            { 
                uint8_t l_42[5] = {255UL,255UL,255UL,255UL,255UL};
                int i;
                l_50[0] = ((safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u(((0x393A39D8E7DFBF73LL > l_42[1]) <= ((safe_sub_func_int32_t_s_s((l_49 = ((2L <= ((((safe_add_func_int8_t_s_s(((g_7 & l_47) , (-5L)), l_48)) >= l_47) , g_33.f2) , g_7)) && 0xC6CEL)), l_48)) && g_33.f0)), p_23)) != l_34) == l_47) ^ 0x97E38F94618C4560LL), g_33.f2)) == l_36);
                if (l_48)
                    continue;
                g_52 = l_51;
            }
        }
        for (p_20 = 0; (p_20 <= 1); p_20 += 1)
        { 
            int32_t l_53 = (-9L);
            int32_t l_63[2][2][1] = {{{0x89CE68EBL},{1L}},{{0x89CE68EBL},{1L}}};
            int i, j, k;
            l_50[0] |= l_53;
            l_51 = (p_24.f2 , l_54);
            l_63[1][0][0] = (safe_rshift_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((p_23 >= (l_53 == (g_52.f1 < g_52.f3))), 6)), 0xE4373440B9FCDB2BLL)), 7));
            for (g_33.f1 = 0; (g_33.f1 <= 1); g_33.f1 += 1)
            { 
                int32_t l_69 = 1L;
                g_70 = ((p_22.f1 ^ (safe_mul_func_int8_t_s_s(g_26.f2, ((safe_div_func_uint8_t_u_u(((g_68 , (7L >= l_69)) || 0xD7L), g_7)) == g_33.f0)))) ^ g_33.f3);
            }
        }
    }
    if (((safe_lshift_func_uint8_t_u_s(g_26.f0, 2)) , (l_36 = (l_37 &= (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((g_26.f0 || (((p_21 || ((safe_lshift_func_uint16_t_u_s(p_24.f0, 12)) | p_21)) | p_24.f3) && g_33.f3)), g_26.f3)) != (-9L)), g_26.f3)), 1))))))
    { 
        int32_t l_89 = 0x73DB0A16L;
        struct S0 l_104 = {0xADC8L,0xC3L,0xA0L,-1L};
        int32_t l_122 = (-8L);
        int32_t l_128[1];
        int i;
        for (i = 0; i < 1; i++)
            l_128[i] = 1L;
        for (g_33.f0 = 26; (g_33.f0 <= 21); --g_33.f0)
        { 
            for (p_22.f0.f0 = 0; (p_22.f0.f0 == (-6)); p_22.f0.f0 = safe_sub_func_int8_t_s_s(p_22.f0.f0, 8))
            { 
                if (p_24.f1)
                    break;
            }
            for (l_48 = 0; (l_48 >= 0); l_48 -= 1)
            { 
                g_95 = (g_94 = ((safe_sub_func_int32_t_s_s((((g_52.f2 = g_33.f2) | (safe_add_func_uint16_t_u_u(p_23, l_89))) | ((safe_add_func_uint64_t_u_u((~(safe_unary_minus_func_uint8_t_u(g_33.f3))), 1L)) == p_20)), 0xE16EA25DL)) & g_33.f1));
            }
        }
        if (g_32[1][0][1])
        { 
            l_37 &= 0xB4319BF6L;
        }
        else
        { 
            const uint32_t l_121 = 18446744073709551615UL;
            int32_t l_126 = 0x0E56CCD6L;
            if ((safe_sub_func_uint64_t_u_u(((g_26.f0 | (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((2L == g_26.f0) | (safe_rshift_func_uint16_t_u_u(p_24.f0, 12))), 0xC1FAL)), 1))) & 0x91L), l_51.f3)))
            { 
                uint16_t l_115[5][5][3] = {{{6UL,1UL,0UL},{0xC056L,1UL,0x57E0L},{0xE3DBL,1UL,1UL},{6UL,1UL,0UL},{0xC056L,1UL,0x57E0L}},{{0xE3DBL,1UL,1UL},{6UL,1UL,0UL},{0xC056L,1UL,0x57E0L},{0xE3DBL,1UL,1UL},{6UL,1UL,0UL}},{{0xC056L,1UL,0x57E0L},{0xE3DBL,1UL,1UL},{6UL,1UL,0UL},{0xC056L,1UL,0x57E0L},{0xE3DBL,1UL,1UL}},{{6UL,1UL,6UL},{0UL,0x0F8DL,0UL},{1UL,0x0F8DL,0x0F8DL},{0x57E0L,0x0F8DL,6UL},{0UL,0x0F8DL,0UL}},{{1UL,0x0F8DL,0x0F8DL},{0x57E0L,0x0F8DL,6UL},{0UL,0x0F8DL,0UL},{1UL,0x0F8DL,0x0F8DL},{0x57E0L,0x0F8DL,6UL}}};
                int i, j, k;
                l_104 = (p_22.f0 = g_26);
                l_115[0][4][2] = (safe_sub_func_uint64_t_u_u(0xAB0DC9406517A65ELL, (safe_add_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_68.f1, 7UL)), p_24.f0)), g_33.f2)) > l_48), g_52.f3))));
            }
            else
            { 
                uint8_t l_120 = 251UL;
                union U3 l_123 = {18446744073709551615UL};
                l_122 = ((safe_lshift_func_int8_t_s_s(g_70, ((safe_mod_func_uint8_t_u_u(l_120, (l_121 ^ (g_32[1][0][2] & (-5L))))) & (-8L)))) & g_68.f1);
                return l_123;
            }
            for (g_52.f0 = 23; (g_52.f0 != (-2)); g_52.f0--)
            { 
                uint32_t l_129 = 0xE6725425L;
                --l_129;
            }
        }
        ++l_135[2][0][0];
    }
    else
    { 
        uint8_t l_158 = 0xC7L;
        union U3 l_169 = {0UL};
        int32_t l_205 = 0xE7BAF2F3L;
        int32_t l_207 = 0x2E53A4A4L;
        int32_t l_208 = 0x3A889DD3L;
        int32_t l_209[1];
        int16_t l_237 = 0xDA57L;
        const union U1 l_257 = {0x7EL};
        int i;
        for (i = 0; i < 1; i++)
            l_209[i] = 0xCD3B4F5FL;
        for (p_20 = 17; (p_20 < 40); p_20 = safe_add_func_uint16_t_u_u(p_20, 2))
        { 
            if ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((((g_52 , (safe_lshift_func_uint8_t_u_u(p_23, 4))) && (safe_lshift_func_uint8_t_u_s((((((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((l_158 ^ ((g_33.f0 || g_32[3][0][1]) <= p_24.f0)), l_158)), g_68.f0)), l_158)), 4294967294UL)), 0x8CB1L)) != l_51.f3) ^ 0x01L) != l_158) ^ p_22.f1), 7))) | g_33.f1) & g_7), g_26.f3)), 11)))
            { 
                uint8_t l_167[4] = {0x6FL,0x6FL,0x6FL,0x6FL};
                int32_t l_168 = 0x8D8FEB0CL;
                int i;
                l_168 = (((safe_lshift_func_int8_t_s_s(l_158, (safe_mul_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((0x3BL & (0x65E1E43403C57956LL ^ ((l_132[1] <= p_21) | l_167[0]))), l_48)) >= 0UL) & p_24.f1) <= 4294967295UL), 0x53L)))) >= p_24.f2) , 0x31D65C57L);
            }
            else
            { 
                return l_169;
            }
            for (l_51.f1 = (-10); (l_51.f1 > 36); l_51.f1 = safe_add_func_uint8_t_u_u(l_51.f1, 7))
            { 
                uint64_t l_172 = 18446744073709551607UL;
                union U3 l_182 = {0UL};
                l_172 &= g_26.f1;
                g_127[0] = (~(safe_mod_func_uint8_t_u_u(g_95, (((g_52.f0 = (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_int64_t_s_s(p_23, (l_182 , (safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((p_24.f1 & g_52.f0), l_48)), (-2L))) , g_7) || 0x67L) | 0x3B49003B356D7480LL), g_52.f3))))), p_21)), 6))) < 8UL) , l_51.f2))));
            }
        }
        g_52 = p_24;
        if ((safe_div_func_int8_t_s_s(((g_191 = g_191) , (((p_24 , (g_33.f1 ^ g_52.f2)) < l_35[0]) == p_24.f3)), p_21)))
        { 
            int32_t l_202 = 0x6FFFE616L;
            int32_t l_203[2][5][3] = {{{0L,0xFC20809CL,0L},{(-8L),(-8L),0x8E3F2653L},{0xEAA8E9DEL,0xFC20809CL,0xEAA8E9DEL},{(-8L),0x8E3F2653L,0x8E3F2653L},{0L,0xFC20809CL,0L}},{{(-8L),(-8L),0x8E3F2653L},{0xEAA8E9DEL,0xFC20809CL,0xEAA8E9DEL},{(-8L),0x8E3F2653L,0x8E3F2653L},{0L,0xFC20809CL,0L},{(-8L),(-8L),0x8E3F2653L}}};
            int i, j, k;
lbl_227:
            for (l_169.f0 = (-4); (l_169.f0 <= 43); l_169.f0 = safe_add_func_int64_t_s_s(l_169.f0, 9))
            { 
                int32_t l_201 = 0x13327E3EL;
                int32_t l_204 = 0xFF82CCD7L;
                int32_t l_206[3][2][2] = {{{(-9L),9L},{9L,(-9L)}},{{9L,9L},{(-9L),9L}},{{9L,(-9L)},{9L,9L}}};
                int i, j, k;
                l_203[0][3][1] = (safe_div_func_int64_t_s_s((g_95 > ((l_37 = ((((+(safe_mod_func_int64_t_s_s(l_169.f0, (safe_mod_func_int64_t_s_s(l_48, l_201))))) , (-6L)) < l_202) >= 0x7CL)) || p_21)), g_68.f3));
                l_210++;
            }
            if (l_135[2][1][0])
            { 
                uint64_t l_223 = 18446744073709551615UL;
                l_223 = (safe_add_func_uint8_t_u_u(((((((safe_rshift_func_int16_t_s_u(0x6917L, 3)) == (0x2D7DE4DCL >= 0x609C47C9L)) && ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_68.f0, l_202)), l_169.f1)) == g_134)) | 0L) != p_24.f2) , p_22.f1), g_26.f1));
            }
            else
            { 
                if (g_70)
                    goto lbl_224;
            }
            for (l_37 = (-6); (l_37 == 11); l_37 = safe_add_func_int8_t_s_s(l_37, 8))
            { 
                if (p_24.f1)
                    goto lbl_227;
            }
        }
        else
        { 
            uint8_t l_248[2][4][3] = {{{0UL,0xCDL,0UL},{248UL,1UL,1UL},{0x68L,0xCDL,0x68L},{248UL,248UL,1UL}},{{0UL,0xCDL,0UL},{248UL,1UL,1UL},{0x68L,0xCDL,0x68L},{248UL,248UL,1UL}}};
            int32_t l_250[2][4][4] = {{{0xCAE694BDL,0x6BB4594AL,0xCAE694BDL,0xCAE694BDL},{0x6BB4594AL,0x6BB4594AL,(-1L),0x6BB4594AL},{0x6BB4594AL,0xCAE694BDL,0xCAE694BDL,0x6BB4594AL},{0xCAE694BDL,0x6BB4594AL,0xCAE694BDL,0xCAE694BDL}},{{0x6BB4594AL,0x6BB4594AL,(-1L),0x6BB4594AL},{0x6BB4594AL,0xCAE694BDL,0xCAE694BDL,0x6BB4594AL},{0xCAE694BDL,0x6BB4594AL,0xCAE694BDL,0xCAE694BDL},{0x6BB4594AL,0x6BB4594AL,(-1L),0x6BB4594AL}}};
            union U3 l_254 = {0x7744F475L};
            int32_t l_260 = 1L;
            uint64_t l_274[5][3] = {{18446744073709551615UL,0xD30F81C467306D39LL,0xD30F81C467306D39LL},{18446744073709551615UL,0xD30F81C467306D39LL,0xD30F81C467306D39LL},{18446744073709551615UL,0xD30F81C467306D39LL,0xD30F81C467306D39LL},{18446744073709551615UL,0xD30F81C467306D39LL,0xD30F81C467306D39LL},{18446744073709551615UL,0xD30F81C467306D39LL,0xD30F81C467306D39LL}};
            int i, j, k;
            if ((((safe_unary_minus_func_int8_t_s(0x10L)) & (safe_mod_func_uint8_t_u_u((g_52.f2 &= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((0x56L >= ((safe_lshift_func_uint8_t_u_u((p_24.f0 > g_191.f0.f3), 3)) >= 0x33A9D292L)), p_24.f0)), l_237))), g_26.f1))) , p_21))
            { 
                int16_t l_238 = 9L;
                int32_t l_249[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_249[i] = 0xCF56564CL;
                g_134 &= (l_238 >= ((l_249[3] = ((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((g_127[0] & (safe_sub_func_int64_t_s_s((!8UL), 0x6EC3E81A10D22A38LL))) <= p_20), p_21)), 7)) & l_248[0][3][0]) != 0xFDA3CCD9L), 0UL)) <= l_169.f0)) == l_248[0][0][0]));
            }
            else
            { 
                uint32_t l_251[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_251[i][j] = 1UL;
                }
                l_251[0][0]++;
                return l_254;
            }
            for (g_70 = 0; (g_70 <= 5); g_70++)
            { 
                l_260 |= (l_257 , (l_250[1][2][3] = (g_26.f1 ^ (g_191.f0 , ((safe_lshift_func_uint8_t_u_s(p_20, 2)) & g_127[0])))));
            }
            for (l_51.f3 = 0; (l_51.f3 == (-17)); --l_51.f3)
            { 
                uint32_t l_273 = 0xE8CC18FDL;
                g_134 = (((safe_div_func_uint32_t_u_u((0L && ((safe_sub_func_int8_t_s_s(((((safe_div_func_uint16_t_u_u(((l_209[0] ^= ((safe_mul_func_int16_t_s_s(g_52.f0, l_248[0][3][1])) || (safe_mod_func_uint8_t_u_u(0xCCL, l_254.f2)))) == l_51.f2), l_273)) | l_274[2][0]) <= l_51.f1) >= (-1L)), 251UL)) != p_23)), 0x881AEEFBL)) || 4294967290UL) && g_32[2][0][0]);
            }
        }
    }
    g_127[0] &= p_23;
    return l_275[0][0][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_32[i][j][k], "g_32[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_68.f1, "g_68.f1", print_hash_value);
    transparent_crc(g_68.f3, "g_68.f3", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_191.f1, "g_191.f1", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
