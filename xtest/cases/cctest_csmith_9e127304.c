// SPDX-License-Identifier: MIT
// cctest_csmith_9e127304.c --- cctest case csmith_9e127304 (csmith seed 2652009220)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6cf8fb3b */

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

// Options:   -s 2652009220 -o /tmp/csmith_gen_numdwf98/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int64_t  f1;
   int64_t  f2;
   uint32_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U1 {
   const int32_t  f0;
};

union U2 {
   uint8_t  f0;
   uint16_t  f1;
};

union U3 {
   uint8_t  f0;
   uint8_t  f1;
   uint8_t  f2;
};


static int32_t g_3 = (-2L);
static int64_t g_4 = 6L;
static int32_t g_37[3][2] = {{0x8D402A53L,0x8D402A53L},{0x8D402A53L,0x8D402A53L},{0x8D402A53L,0x8D402A53L}};
static int32_t g_38 = 6L;
static uint32_t g_39[1] = {1UL};
static int32_t g_58 = 0x20E6E86CL;
static const union U1 g_63 = {0x6AC9C4BDL};
static struct S0 g_73 = {1L,1L,0x9BE98DF1E582B275LL,18446744073709551615UL,-1L};
static int16_t g_82[5] = {4L,4L,4L,4L,4L};
static uint32_t g_88 = 0xD3ABBA7FL;
static int32_t g_96 = (-1L);
static int16_t g_97 = 1L;
static int16_t g_100 = 0xCF87L;
static int64_t g_102 = (-1L);
static uint16_t g_104 = 8UL;
static struct S0 g_121 = {0xBD89D4ED5BCCF1A0LL,1L,0x714E362F147413A7LL,0x429369BDL,0x2CCF7F33B7E8F338LL};
static int32_t g_183 = 0x286180D3L;
static struct S0 g_189 = {0L,0x0035E637F3C61942LL,1L,3UL,0x81EE394F392A451ELL};
static uint8_t g_219 = 0x22L;



static uint32_t  func_1(void);
static uint16_t  func_6(int16_t  p_7);
static int16_t  func_8(uint8_t  p_9, uint16_t  p_10, uint32_t  p_11, int64_t  p_12);
static union U3  func_13(int64_t  p_14, int8_t  p_15);




static uint32_t  func_1(void)
{ 
    struct S0 l_2[1][2] = {{{0xC405B40194DDBC37LL,0x7822E6E7F737A9A9LL,-1L,0x7B8F5F49L,-1L},{0xC405B40194DDBC37LL,0x7822E6E7F737A9A9LL,-1L,0x7B8F5F49L,-1L}}};
    int32_t l_30 = 0xBA27438EL;
    int i, j;
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        int32_t l_16 = (-1L);
        int32_t l_190 = 0x2B746491L;
        union U2 l_209 = {255UL};
        uint64_t l_217 = 1UL;
        if ((g_4 = 0x94D2B5F7L))
        { 
            const uint64_t l_29 = 0x988F15EA3766593CLL;
            uint16_t l_165 = 0x190BL;
            int32_t l_166[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_166[i][j] = 0x14550C22L;
            }
            if ((l_190 = (0xB5AF9F7CL != (65535UL <= (((((+func_6((l_166[2][0] = (g_82[4] = func_8((func_13(l_16, (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((((((safe_add_func_uint16_t_u_u(g_4, 65527UL)) ^ g_4) || g_4) ^ 0xBC90638325423B19LL) >= g_4) > g_4), g_4)), g_3)), l_29)), g_4)) >= l_30), g_3))) , l_16), l_29, l_165, g_37[2][1]))))) ^ g_100) , g_73.f4) || g_102) > 4294967290UL)))))
            { 
                return l_165;
            }
            else
            { 
                g_38 ^= (safe_sub_func_uint8_t_u_u(l_30, ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(g_97)), (((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_183, 3)), (~(safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_s(0x72L, g_88)) | g_121.f2) == g_82[4]) == 0UL), l_30)) , g_88), 1))))) && (-1L)) || 0x90L))) == g_121.f0)));
            }
        }
        else
        { 
            uint8_t l_218[2];
            int i;
            for (i = 0; i < 2; i++)
                l_218[i] = 0x65L;
            g_38 &= (l_209 , (safe_add_func_uint32_t_u_u((g_121.f3 > ((safe_mul_func_int8_t_s_s(0x44L, ((safe_rshift_func_uint8_t_u_s((l_217 = (+g_96)), 5)) > g_88))) == l_30)), l_218[0])));
        }
        g_96 = l_30;
        ++g_219;
        for (l_30 = 0; (l_30 >= 0); l_30 -= 1)
        { 
            int64_t l_226 = 0x1B660CBC0C80C949LL;
            int32_t l_231 = 0x61C51E3AL;
            int32_t l_232 = 0xE1114777L;
            l_232 = ((l_190 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_226 ^ 0xC9D9835C9623FB6ELL), (((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((g_121.f4 && (((l_231 |= g_121.f3) > l_16) <= l_217)), l_226)), l_226)) > g_121.f0) >= (-1L)))), (-7L)))) , 1L);
        }
    }
    return l_30;
}



static uint16_t  func_6(int16_t  p_7)
{ 
    int16_t l_173[1];
    int i;
    for (i = 0; i < 1; i++)
        l_173[i] = 0xE08FL;
    for (g_73.f0 = (-3); (g_73.f0 >= (-17)); --g_73.f0)
    { 
        int8_t l_180 = 0xDAL;
        int32_t l_184 = 1L;
        for (g_121.f0 = 3; (g_121.f0 != (-3)); g_121.f0 = safe_sub_func_int32_t_s_s(g_121.f0, 3))
        { 
            uint64_t l_174 = 0x01970B70258B70B0LL;
            for (g_73.f3 = 23; (g_73.f3 <= 6); g_73.f3 = safe_sub_func_uint32_t_u_u(g_73.f3, 4))
            { 
                l_174 = l_173[0];
                return l_173[0];
            }
        }
        for (g_102 = 0; (g_102 <= 4); g_102 += 1)
        { 
            for (g_104 = 1; (g_104 <= 4); g_104 += 1)
            { 
                int i;
                g_38 = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x7F8CL, g_82[g_102])), (safe_unary_minus_func_uint64_t_u(((l_173[0] , g_121.f3) ^ g_104)))));
                l_180 = (l_173[0] && (g_3 < 1UL));
                l_184 = (g_96 = (((0x81E5L == (g_183 = ((((((safe_add_func_uint16_t_u_u(((g_82[g_104] &= l_180) & ((p_7 && 0x045BL) != 9L)), l_173[0])) == g_121.f1) > p_7) ^ (-1L)) <= p_7) == p_7))) && p_7) != 0x26DC8C82L));
            }
        }
        for (l_180 = 19; (l_180 >= 9); l_180--)
        { 
            for (g_121.f0 = 0; (g_121.f0 <= (-18)); g_121.f0--)
            { 
                g_189 = g_121;
            }
        }
    }
    return g_39[0];
}



static int16_t  func_8(uint8_t  p_9, uint16_t  p_10, uint32_t  p_11, int64_t  p_12)
{ 
    return p_10;
}



static union U3  func_13(int64_t  p_14, int8_t  p_15)
{ 
    uint64_t l_43[5];
    int32_t l_47 = 8L;
    int8_t l_59[5][1] = {{0x41L},{0x7BL},{0x41L},{0x7BL},{0x41L}};
    struct S0 l_61 = {0xEDED6215A4C4AE3BLL,0x2CD76E668196E547LL,-8L,4UL,0L};
    int32_t l_72 = 0xFB1A9164L;
    union U1 l_94 = {0x44D72604L};
    int32_t l_103 = 0x810CDF19L;
    union U2 l_162 = {0x75L};
    int8_t l_163 = 1L;
    union U3 l_164 = {4UL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_43[i] = 1UL;
    for (g_4 = 0; (g_4 > (-21)); g_4 = safe_sub_func_uint32_t_u_u(g_4, 6))
    { 
        uint8_t l_46[2];
        struct S0 l_62 = {0x3AA3630DD35930CBLL,1L,0xBDE7D1E91BE676CDLL,1UL,-9L};
        int32_t l_98 = 1L;
        int32_t l_99 = (-1L);
        int32_t l_101 = 0xDA9CD7CBL;
        union U1 l_113 = {0x4A07556CL};
        int i;
        for (i = 0; i < 2; i++)
            l_46[i] = 0x04L;
        if (p_15)
        { 
            union U3 l_42 = {0xB3L};
            int32_t l_57 = 0xB52F506AL;
            for (p_15 = (-30); (p_15 < 4); p_15 = safe_add_func_int32_t_s_s(p_15, 2))
            { 
                uint8_t l_35 = 4UL;
                int32_t l_36 = (-4L);
                l_36 = l_35;
                --g_39[0];
                return l_42;
            }
            l_47 |= (l_46[1] = ((l_43[0] ^ (safe_mul_func_uint8_t_u_u(g_37[0][0], (l_43[0] < 1UL)))) , l_43[0]));
            l_47 = (safe_div_func_int32_t_s_s((g_58 &= (safe_unary_minus_func_int16_t_s((l_57 = (((g_4 || (safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_37[1][1], l_43[2])), 1L)) & l_42.f2), 2L))) > l_42.f1) <= 0L))))), p_14));
        }
        else
        { 
            union U3 l_60[4][3][3] = {{{{0x59L},{0x59L},{0UL}},{{0xD8L},{254UL},{0UL}},{{254UL},{255UL},{0x01L}}},{{{0xD8L},{255UL},{8UL}},{{0x59L},{254UL},{0x01L}},{{0x59L},{0x59L},{0UL}}},{{{0xD8L},{254UL},{0UL}},{{254UL},{255UL},{0x01L}},{{0xD8L},{255UL},{8UL}}},{{{0x3CL},{1UL},{255UL}},{{0x3CL},{0x3CL},{0xD8L}},{{0x13L},{1UL},{0xD8L}}}};
            int i, j, k;
            if ((l_47 = (g_39[0] != l_59[1][0])))
            { 
                return l_60[0][1][2];
            }
            else
            { 
                if (p_15)
                    break;
            }
            l_62 = l_61;
        }
        if ((l_72 = (g_63 , (g_39[0] >= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_61.f1, 4)) || (l_47 = ((safe_sub_func_uint8_t_u_u(255UL, p_15)) & 0xC5L))), 4)), l_62.f2)) & 0UL)))))
        { 
            uint16_t l_83 = 0x60CEL;
            int32_t l_84 = 0xFEF71A1FL;
            int32_t l_85 = (-2L);
            int32_t l_86 = 1L;
            const int32_t l_91 = (-1L);
            l_62 = g_73;
            if ((((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((g_82[4] = (safe_lshift_func_uint8_t_u_u(p_15, 3))), (((g_73 , (g_73.f0 = (l_61 , (((0x62L >= (-1L)) | p_14) && l_59[1][0])))) & p_15) | l_61.f3))) , 0x313DL), g_37[0][0])), g_39[0])) != 0x391BE15CL) == l_83))
            { 
                int64_t l_87 = 5L;
                g_88--;
            }
            else
            { 
                int16_t l_95 = 0L;
                l_95 |= (l_91 , ((safe_rshift_func_int16_t_s_u((g_82[4] &= ((g_3 , l_94) , (0L || l_59[1][0]))), 13)) || g_88));
                l_86 = 0x25DDBF1AL;
                if (p_14)
                    continue;
            }
            ++g_104;
        }
        else
        { 
            int32_t l_114 = 0x0DB8D7F9L;
            for (l_98 = 0; (l_98 <= 0); l_98 += 1)
            { 
                int32_t l_115 = 0x4584B38AL;
                int16_t l_116 = 0xF413L;
                int i, j;
                l_47 |= (((l_115 |= (safe_rshift_func_uint16_t_u_u(6UL, (safe_div_func_uint32_t_u_u(((l_114 = ((l_46[(l_98 + 1)] = ((safe_sub_func_int8_t_s_s(0L, ((l_113 , g_37[l_98][l_98]) , l_46[(l_98 + 1)]))) < 0xBF0A6BB7L)) != g_37[l_98][l_98])) | 2UL), 2UL))))) , l_116) > 0xCEL);
            }
            for (g_73.f4 = 0; (g_73.f4 < (-24)); g_73.f4 = safe_sub_func_uint16_t_u_u(g_73.f4, 3))
            { 
                uint8_t l_124 = 0x9CL;
                int32_t l_125 = 0x526E093EL;
                struct S0 l_140 = {0x2ADE66CDFB547BDCLL,0x8BEC3B116CE8D70DLL,6L,0x9BC1BBF8L,0xAC292C6C47E747E0LL};
                l_125 &= (0x41CCL | (((safe_rshift_func_int8_t_s_s((p_14 < ((g_121 = g_73) , (safe_sub_func_int16_t_s_s(0x2E77L, l_124)))), 3)) ^ p_14) ^ p_15));
                l_125 |= ((p_15 != (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((+((safe_add_func_uint8_t_u_u((p_15 == p_15), (l_99 ^= (safe_mod_func_int64_t_s_s((g_73.f2 |= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s((g_100 == p_14))) || 0x68BF4733L) && 0x3AL), 4)), g_121.f1))), p_15))))) == l_114)), g_102)), 0))) <= g_121.f2);
                g_121 = l_140;
            }
        }
    }
    l_72 = (((safe_sub_func_uint32_t_u_u(((g_104 ^= (0xD20EL | (safe_sub_func_uint8_t_u_u(g_121.f4, ((!(safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((p_15 >= (((g_38 && (-1L)) > (-1L)) , l_61.f3)) != 1UL) & l_59[1][0]), l_59[1][0])), l_59[1][0])), g_102))) && p_15))))) >= l_61.f2), 0x0BEEA7B1L)) >= p_15) | p_15);
    g_96 ^= (((l_163 = (safe_add_func_int32_t_s_s((((((-10L) || ((4294967288UL || ((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_162 , (-8L)), l_61.f1)), l_47)), 7)) && g_39[0]) <= (-1L)), 4294967295UL)) | p_14)) <= g_4)) & p_14) != l_61.f1) ^ p_15), g_73.f4))) < g_121.f3) < p_14);
    return l_164;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_37[i][j], "g_37[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_39[i], "g_39[i]", print_hash_value);

    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_73.f4, "g_73.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);

    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_189.f3, "g_189.f3", print_hash_value);
    transparent_crc(g_189.f4, "g_189.f4", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
