// SPDX-License-Identifier: MIT
// cctest_csmith_57796554.c --- cctest case csmith_57796554 (csmith seed 1467573588)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6b4ae819 */

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

// Options:   -s 1467573588 -o /tmp/csmith_gen_q30zdb2u/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   uint64_t  f1;
   const uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
   int32_t  f1;
   const int32_t  f2;
   int32_t  f3;
};

union U2 {
   int64_t  f0;
   int8_t * f1;
   uint32_t  f2;
   int8_t  f3;
   int64_t  f4;
};


static int64_t g_4[1][6] = {{0x17B844A754320E32LL,0x17B844A754320E32LL,0x17B844A754320E32LL,0x17B844A754320E32LL,0x17B844A754320E32LL,0x17B844A754320E32LL}};
static int32_t g_9 = 0x08531D14L;
static uint64_t g_21[6] = {0xB1DAB551FA4C8210LL,0UL,0xB1DAB551FA4C8210LL,0xB1DAB551FA4C8210LL,0UL,0xB1DAB551FA4C8210LL};
static uint64_t g_25 = 0xF079038991F32AFCLL;
static int8_t g_60 = 0x5FL;
static int8_t *g_59 = &g_60;
static int32_t g_68 = 0xE6DCF67AL;
static int32_t g_69 = 0x36EFE450L;
static struct S0 g_70 = {0x35D5AA04L,6UL,5UL};
static union U2 g_80 = {0x21BC9AF00AFC6290LL};
static int32_t g_83 = 0xE05D1EE0L;
static int32_t g_89 = 0xAB882180L;
static uint16_t g_112 = 0x5B23L;
static uint32_t g_121[2][2] = {{0UL,0UL},{0UL,0UL}};
static uint16_t g_129 = 4UL;
static uint8_t g_149[4][1][4] = {{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL}}};
static uint16_t g_195 = 1UL;
static uint64_t g_199 = 6UL;
static int64_t g_222 = (-1L);
static int64_t g_223 = 0x68B7B371797351A8LL;
static int16_t g_224 = 0xE38BL;
static int32_t g_225 = 0xD8B400A9L;
static uint32_t g_228 = 0xFDCFAA0CL;
static int16_t g_236 = (-1L);
static uint16_t g_238 = 0x4826L;
static uint64_t *g_242 = &g_25;
static uint64_t **g_241 = &g_242;
static struct S0 g_303 = {4294967295UL,0x68D38584AD03F487LL,0UL};
static struct S0 *g_302 = &g_303;
static uint8_t **g_354 = (void*)0;
static union U1 g_364 = {{4294967292UL,0x14337131A39DE8ADLL,0UL}};
static int16_t g_380[7] = {1L,1L,1L,1L,1L,1L,1L};
static uint32_t g_382 = 2UL;
static uint16_t **g_423 = (void*)0;
static int32_t * const *g_438 = (void*)0;
static uint32_t g_442 = 0x2F83B0DEL;
static int16_t *g_490 = (void*)0;
static int16_t **g_489 = &g_490;
static int16_t ** const *g_488 = &g_489;
static const int16_t g_514 = 3L;
static const uint64_t *g_519[7] = {&g_364.f0.f1,&g_364.f0.f1,&g_364.f0.f1,&g_364.f0.f1,&g_364.f0.f1,&g_364.f0.f1,&g_364.f0.f1};
static const uint64_t **g_518 = &g_519[4];
static int32_t *g_589 = &g_69;
static uint16_t g_625[3] = {0x4526L,0x4526L,0x4526L};
static uint32_t *g_640[4][5] = {{(void*)0,&g_121[1][0],(void*)0,&g_121[1][0],(void*)0},{&g_382,&g_382,&g_382,&g_382,&g_382},{(void*)0,&g_121[1][0],(void*)0,&g_121[1][0],(void*)0},{&g_382,&g_382,&g_382,&g_382,&g_382}};
static uint32_t **g_639[1][1] = {{&g_640[0][4]}};
static int32_t g_655 = 1L;
static int8_t g_661 = 0L;
static int8_t g_663 = 0xAEL;
static uint8_t g_667 = 252UL;
static int32_t g_679 = (-2L);
static uint32_t g_680[4] = {0xC4B64D91L,0xC4B64D91L,0xC4B64D91L,0xC4B64D91L};
static uint32_t g_695 = 0x78A96D0BL;
static int32_t g_727 = 1L;
static uint16_t g_728 = 2UL;
static int16_t g_759[7] = {1L,0x437FL,0x437FL,1L,0x437FL,0x437FL,1L};
static uint32_t g_761[6] = {4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL};
static struct S0 **g_770 = &g_302;
static int64_t *g_816 = &g_222;
static int64_t **g_815 = &g_816;
static uint32_t g_849 = 4294967290UL;
static uint32_t g_870 = 0x9C1DD6C6L;
static uint32_t *g_946 = &g_228;
static uint32_t * const *g_945[4][6] = {{&g_946,&g_946,&g_946,&g_946,&g_946,&g_946},{&g_946,&g_946,&g_946,&g_946,&g_946,&g_946},{&g_946,&g_946,&g_946,(void*)0,&g_946,&g_946},{&g_946,&g_946,(void*)0,(void*)0,&g_946,&g_946}};
static uint16_t *g_1010 = &g_129;
static uint16_t **g_1009 = &g_1010;
static uint64_t * const *g_1013 = &g_242;
static uint64_t * const **g_1012 = &g_1013;
static uint64_t * const ***g_1011[4] = {&g_1012,&g_1012,&g_1012,&g_1012};
static uint32_t g_1015 = 0UL;
static int32_t g_1016[7][3] = {{(-2L),0x82E8E49EL,(-6L)},{0xB69E8A53L,0x81B67C82L,0xB69E8A53L},{9L,(-2L),(-6L)},{9L,9L,0x4E05884BL},{0L,(-2L),(-2L)},{0x4E05884BL,0x81B67C82L,0x39D6D07DL},{0L,0x82E8E49EL,0L}};
static uint16_t g_1018 = 0x0028L;
static int32_t g_1081 = 0xD978B0D3L;
static int32_t g_1114[4] = {0xBEC17628L,0xBEC17628L,0xBEC17628L,0xBEC17628L};
static uint32_t g_1131[4][2] = {{0x78E84FD8L,0x78E84FD8L},{0x78E84FD8L,0x78E84FD8L},{0x78E84FD8L,0x78E84FD8L},{0x78E84FD8L,0x78E84FD8L}};



static int32_t  func_1(void);
static int32_t * func_10(uint32_t  p_11, int32_t * p_12, int32_t * p_13, int16_t  p_14, int32_t * p_15);
static const int32_t  func_16(int32_t  p_17);
static int32_t  func_37(uint64_t * p_38, const uint64_t  p_39, const int32_t  p_40, int8_t * p_41);
static int8_t * func_43(int32_t * p_44, uint64_t * p_45, uint64_t * p_46, int64_t  p_47, int8_t * p_48);
static int32_t * func_49(int16_t  p_50, union U1  p_51, uint64_t  p_52);
static int32_t  func_54(int8_t  p_55);
static int8_t  func_56(int8_t * p_57, uint64_t * p_58);




static int32_t  func_1(void)
{ 
    uint32_t l_7[3];
    int32_t *l_8 = &g_9;
    uint64_t *l_20[6][3] = {{&g_21[2],(void*)0,&g_21[2]},{&g_21[2],&g_21[4],(void*)0},{&g_21[4],&g_21[2],&g_21[2]},{(void*)0,&g_21[2],&g_21[3]},{&g_21[2],&g_21[4],&g_21[2]},{(void*)0,(void*)0,&g_21[2]}};
    union U2 l_1044 = {0x772CF8A38E9D0B83LL};
    int32_t *l_1045 = (void*)0;
    int32_t **l_1046 = &l_1045;
    uint8_t *l_1087 = &g_667;
    int8_t l_1105[4] = {0xD8L,0xD8L,0xD8L,0xD8L};
    int32_t l_1112 = 6L;
    int32_t l_1113 = (-1L);
    int32_t l_1119[6][7] = {{0x1C655284L,0x2DEB9E6FL,(-1L),(-1L),0x2DEB9E6FL,0x1C655284L,0x2DEB9E6FL},{0xC586B81DL,0L,0xC4591C68L,0xB5F48FCEL,0x906F9011L,0xB5F48FCEL,0xC4591C68L},{0x9088B6A2L,0x9088B6A2L,0x1C655284L,(-1L),0x1C655284L,0x9088B6A2L,0x9088B6A2L},{(-1L),0L,0x8AA5B8BAL,0L,(-1L),1L,0xC4591C68L},{0xC49FCA87L,0x2DEB9E6FL,0xC49FCA87L,0x1C655284L,0x1C655284L,0xC49FCA87L,0x2DEB9E6FL},{0xC4591C68L,(-1L),0x8AA5B8BAL,(-1L),0x906F9011L,0L,0x906F9011L}};
    int32_t *l_1124[5][6][7] = {{{&g_1081,&l_1119[4][3],&l_1119[4][3],&g_69,&l_1119[0][5],&l_1112,&g_1081},{&g_1114[0],(void*)0,&g_1081,&g_1114[0],&l_1119[2][0],&g_1114[0],&g_1081},{&g_1081,&g_1081,(void*)0,&g_69,&g_727,&l_1113,&g_1081},{(void*)0,&g_1114[0],&g_1081,(void*)0,&g_727,&g_727,&g_1114[0]},{&g_225,&l_1119[0][5],&g_225,(void*)0,&l_1119[4][2],(void*)0,&g_225},{&g_9,&g_9,(void*)0,&l_1112,(void*)0,&l_1113,&g_1114[0]}},{{&l_1119[0][5],&g_225,&g_225,&g_225,&g_1114[1],(void*)0,&l_1119[4][3]},{(void*)0,&g_9,&g_1081,&g_727,(void*)0,&g_727,&g_1081},{&l_1119[0][5],&l_1119[0][5],&g_1081,&g_225,&l_1119[4][2],&g_1081,&l_1119[4][3]},{&g_9,(void*)0,&g_1081,&l_1112,&g_727,&g_727,&g_1114[0]},{&g_225,&l_1119[0][5],&g_225,(void*)0,&l_1119[4][2],(void*)0,&g_225},{&g_9,&g_9,(void*)0,&l_1112,(void*)0,&l_1113,&g_1114[0]}},{{&l_1119[0][5],&g_225,&g_225,&g_225,&g_1114[1],(void*)0,&l_1119[4][3]},{(void*)0,&g_9,&g_1081,&g_727,(void*)0,&g_727,&g_1081},{&l_1119[0][5],&l_1119[0][5],&g_1081,&g_225,&l_1119[4][2],&g_1081,&l_1119[4][3]},{&g_9,(void*)0,&g_1081,&l_1112,&g_727,&g_727,&g_1114[0]},{&g_225,&l_1119[0][5],&g_225,(void*)0,&l_1119[4][2],(void*)0,&g_225},{&g_9,&g_9,(void*)0,&l_1112,(void*)0,&l_1113,&g_1114[0]}},{{&l_1119[0][5],&g_225,&g_225,&g_225,&g_1114[1],(void*)0,&l_1119[4][3]},{(void*)0,&g_9,&g_1081,&g_727,(void*)0,&g_727,&g_1081},{&l_1119[0][5],&l_1119[0][5],&g_1081,&g_225,&l_1119[4][2],&g_1081,&l_1119[4][3]},{&g_9,(void*)0,&g_1081,&l_1112,&g_727,&g_727,&g_1114[0]},{&g_225,&l_1119[0][5],&g_225,(void*)0,&l_1119[4][2],(void*)0,&g_225},{&g_9,&g_9,(void*)0,&l_1112,(void*)0,&l_1113,&g_1114[0]}},{{&l_1119[0][5],&g_225,&g_225,&g_225,&g_1114[1],(void*)0,&l_1119[4][3]},{(void*)0,&g_9,&g_1081,&g_727,(void*)0,&g_727,&g_1081},{&l_1119[0][5],&l_1119[0][5],&g_1081,&g_225,&l_1119[4][2],&g_1081,&l_1119[4][3]},{&g_9,(void*)0,&g_1081,&l_1112,&g_727,&g_727,&g_1114[0]},{&g_225,&l_1119[0][5],&g_225,(void*)0,&l_1119[4][2],(void*)0,&g_225},{&g_9,&g_9,(void*)0,&l_1112,(void*)0,&l_1113,&g_1114[0]}}};
    int16_t l_1125 = 1L;
    int32_t l_1126[4] = {(-7L),(-7L),(-7L),(-7L)};
    int64_t l_1127 = 0x4488053F765334E0LL;
    int32_t l_1128 = (-4L);
    int32_t l_1129 = 0x4AC7656CL;
    int16_t l_1130 = (-1L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_7[i] = 0x963AB194L;
    (*l_8) = (safe_rshift_func_int16_t_s_s((g_4[0][1] != (safe_rshift_func_int16_t_s_s(l_7[1], (l_7[1] <= 65533UL)))), 6));
    (*l_1046) = func_10(((func_16((safe_mod_func_uint64_t_u_u(((void*)0 != l_8), (g_21[2]--)))) , (+(~(safe_sub_func_uint16_t_u_u((*g_1010), (safe_unary_minus_func_uint32_t_u((((**g_1013) ^= ((l_1044 , (**g_815)) || (g_625[2] , 18446744073709551615UL))) <= (*l_8))))))))) , (*l_8)), l_1045, l_1045, (*l_8), l_8);
    for (g_222 = 22; (g_222 > (-19)); g_222--)
    { 
        uint32_t l_1051 = 0xAA8B06BCL;
        const uint8_t *l_1067 = (void*)0;
        const uint8_t **l_1066 = &l_1067;
        const uint8_t ***l_1065 = &l_1066;
        int32_t l_1088 = (-7L);
        int32_t l_1089 = 0x502DAD15L;
        int32_t l_1090 = 1L;
        uint64_t l_1106 = 0UL;
        int8_t l_1108 = 0xA6L;
        struct S0 **l_1109 = &g_302;
        int32_t l_1115 = 0x0B876CE9L;
        int32_t l_1116 = 0x7E84356EL;
        int32_t l_1117[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
        int32_t l_1118 = 1L;
        int i;
        for (g_195 = 0; (g_195 != 35); ++g_195)
        { 
            uint8_t *l_1054 = &g_149[3][0][0];
            const uint8_t ****l_1068 = &l_1065;
            int32_t l_1084[4][6][6] = {{{0x0F31B2CDL,0xAA852143L,5L,0xFA1C7D16L,0x6FFB4C45L,(-2L)},{0xDDCC5D42L,1L,0x6FFB4C45L,0xAA852143L,(-2L),(-2L)},{0x57C63B7AL,5L,5L,0x57C63B7AL,0x1D213413L,0xAA852143L},{(-2L),0x26B26DACL,(-7L),0xF40E5576L,0L,0x6FFB4C45L},{(-7L),0xDDCC5D42L,0x89BDAC79L,1L,0L,1L},{(-3L),0x26B26DACL,(-3L),0x30BC2851L,0x1D213413L,0xDDCC5D42L}},{{0xAA852143L,5L,0xFA1C7D16L,0x6FFB4C45L,(-2L),0x1D213413L},{0xF40E5576L,1L,0x30BC2851L,0x6FFB4C45L,0x6FFB4C45L,0x30BC2851L},{0xAA852143L,0xAA852143L,0x26B26DACL,0x30BC2851L,0xFA1C7D16L,(-3L)},{(-3L),0L,0xAA852143L,1L,5L,0x26B26DACL},{(-7L),(-3L),0xAA852143L,0xF40E5576L,0xAA852143L,(-3L)},{(-2L),0xF40E5576L,0x26B26DACL,0x57C63B7AL,0x0F31B2CDL,0x30BC2851L}},{{0x57C63B7AL,0x0F31B2CDL,0x30BC2851L,0xAA852143L,0x89BDAC79L,0x1D213413L},{0xDDCC5D42L,0x0F31B2CDL,0xFA1C7D16L,0xFA1C7D16L,0x0F31B2CDL,0xDDCC5D42L},{0x0F31B2CDL,0xF40E5576L,(-3L),0L,0xAA852143L,1L},{0xFA1C7D16L,(-3L),0x89BDAC79L,(-7L),5L,0x6FFB4C45L},{0xFA1C7D16L,0L,(-7L),0L,0xFA1C7D16L,0xAA852143L},{0x0F31B2CDL,0xAA852143L,5L,0xFA1C7D16L,0x6FFB4C45L,(-2L)}},{{0xDDCC5D42L,1L,0x6FFB4C45L,0xAA852143L,(-2L),(-2L)},{0x57C63B7AL,5L,5L,0x57C63B7AL,0x1D213413L,0xAA852143L},{(-2L),0x26B26DACL,(-7L),0xF40E5576L,0L,0x6FFB4C45L},{(-7L),0xDDCC5D42L,0x89BDAC79L,1L,0L,1L},{(-3L),0x26B26DACL,(-3L),0x30BC2851L,0x1D213413L,0xDDCC5D42L},{0xAA852143L,5L,0xFA1C7D16L,0x6FFB4C45L,(-2L),0x1D213413L}}};
            const uint8_t l_1107 = 1UL;
            uint16_t l_1120 = 2UL;
            struct S0 *l_1123 = &g_303;
            int i, j, k;
            (*l_8) = ((**l_1046) = l_1051);
            (*l_8) ^= (safe_mul_func_uint8_t_u_u((--(*l_1054)), ((safe_rshift_func_int8_t_s_s(((g_4[0][1] = ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((((*l_1068) = l_1065) == ((safe_add_func_uint16_t_u_u((~(+(safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_1044 , (((((l_1088 = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(g_1081, (safe_div_func_uint32_t_u_u(l_1084[1][5][3], (safe_sub_func_int32_t_s_s(((-1L) < (*l_1045)), (l_1087 != l_1087))))))), l_1051)) || l_1084[1][5][3])) , (*g_1010)) <= 0x9180L) ^ (*g_59)) & 0x083280529FA5238CLL)), l_1084[1][0][3])), 14)))), l_1084[1][5][3])) , &l_1066)), (*g_59))), l_1051)), l_1084[1][5][3])) & l_1084[1][5][3])) & l_1089), l_1090)) && l_1089)));
            if ((safe_add_func_uint64_t_u_u(((255UL & ((((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((*l_1045) & 8L) , (safe_rshift_func_uint8_t_u_u((g_80 , 255UL), 7))), ((safe_div_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((((*g_59) ^ (safe_sub_func_int16_t_s_s((l_1090 < l_1105[3]), l_1084[1][5][3]))) , (**l_1046)), 6L)) && (*g_816)) && l_1106), l_1084[1][5][3])) ^ l_1084[2][4][0]))) && l_1107), 0x67L)) , g_89) , l_1051) | 0UL)) , 18446744073709551613UL), l_1084[0][4][5])))
            { 
                return l_1108;
            }
            else
            { 
                struct S0 ***l_1110 = &g_770;
                int32_t *l_1111[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                (*l_1110) = l_1109;
                --l_1120;
                (*l_1109) = l_1123;
                (*l_1045) &= 2L;
            }
        }
    }
    --g_1131[1][0];
    return (*l_1045);
}



static int32_t * func_10(uint32_t  p_11, int32_t * p_12, int32_t * p_13, int16_t  p_14, int32_t * p_15)
{ 
    (*p_15) = 9L;
    return &g_225;
}



static const int32_t  func_16(int32_t  p_17)
{ 
    int32_t *l_24[3][4][4] = {{{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9}},{{(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9}},{{&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9},{&g_9,(void*)0,&g_9,(void*)0}}};
    uint64_t *l_42 = (void*)0;
    union U1 l_53 = {{4294967295UL,0xF0FC5A51F3E63D4DLL,18446744073709551606UL}};
    uint64_t ***l_1037 = &g_241;
    uint64_t ****l_1036 = &l_1037;
    const int8_t l_1038 = 1L;
    int i, j, k;
    if ((p_17 = (g_4[0][1] != p_17)))
    { 
        uint16_t l_28 = 0xF68DL;
        int32_t l_1017 = 0x68CD0E01L;
        g_25--;
        l_28 ^= p_17;
        g_1018 &= ((safe_add_func_int32_t_s_s((l_1017 = (safe_lshift_func_uint16_t_u_s(l_28, (safe_lshift_func_int16_t_s_u((((!((+l_28) , (0xC9060546L && (func_37(l_42, g_9, p_17, func_43(func_49(g_21[2], l_53, g_25), g_816, g_242, p_17, &g_663)) , 0x89667B62L)))) | p_17) | g_1015), g_1016[0][0]))))), p_17)) == 0xBEL);
    }
    else
    { 
        uint16_t *l_1020 = &g_238;
        int32_t l_1023 = 0xB24EF138L;
        uint32_t *l_1024 = &g_695;
        uint32_t *l_1027 = &g_761[2];
        struct S0 l_1030[1] = {{0x95A595F5L,18446744073709551607UL,0x551837C1L}};
        int32_t l_1031 = 0x1A73EA3BL;
        uint64_t ***l_1035 = &g_241;
        uint64_t ****l_1034 = &l_1035;
        int i;
        (*g_589) = (+(((*g_1009) != l_1020) , (safe_sub_func_uint8_t_u_u(l_1023, ((((*l_1027) = ((*l_1024)--)) || (safe_mod_func_int16_t_s_s(((((*g_59) = (l_1030[0] , l_1031)) && ((((0xAA66L || (safe_add_func_int8_t_s_s((l_1034 != l_1036), 8UL))) != (-10L)) || (**g_1009)) , 0x9EL)) != l_1031), 1UL))) || 0x21D4L)))));
    }
    return l_1038;
}



static int32_t  func_37(uint64_t * p_38, const uint64_t  p_39, const int32_t  p_40, int8_t * p_41)
{ 
    const uint8_t l_1002[2][3][7] = {{{3UL,255UL,255UL,0x56L,255UL,0UL,0UL},{255UL,255UL,3UL,255UL,255UL,0x56L,255UL},{0UL,255UL,255UL,0x56L,0x2BL,0x56L,255UL}},{{255UL,255UL,1UL,3UL,255UL,0UL,0UL},{0UL,0x56L,1UL,1UL,0x56L,0UL,0x2BL},{255UL,1UL,255UL,0x2BL,255UL,255UL,0x2BL}}};
    uint16_t *l_1007[7][5][5] = {{{&g_129,&g_129,&g_728,&g_129,(void*)0},{(void*)0,&g_625[1],&g_112,&g_625[1],&g_129},{(void*)0,&g_728,(void*)0,&g_129,&g_625[2]},{(void*)0,&g_625[1],&g_112,&g_238,&g_112},{(void*)0,&g_625[0],&g_129,&g_112,&g_625[1]}},{{&g_625[1],&g_195,&g_625[2],&g_129,&g_625[1]},{&g_625[1],&g_129,(void*)0,&g_728,&g_728},{(void*)0,&g_112,&g_728,&g_195,&g_129},{(void*)0,&g_625[2],&g_195,&g_625[2],(void*)0},{(void*)0,&g_625[1],&g_238,(void*)0,&g_728}},{{(void*)0,&g_728,&g_625[0],(void*)0,(void*)0},{&g_129,&g_625[1],&g_625[2],&g_625[1],&g_728},{&g_625[1],(void*)0,&g_728,&g_238,(void*)0},{&g_728,(void*)0,&g_129,&g_625[2],&g_129},{&g_238,&g_728,&g_625[0],(void*)0,&g_728}},{{(void*)0,(void*)0,(void*)0,&g_728,&g_625[1]},{&g_238,&g_129,&g_728,&g_728,&g_625[1]},{&g_195,&g_195,&g_129,(void*)0,&g_112},{&g_238,&g_625[1],(void*)0,&g_625[2],&g_625[2]},{&g_195,&g_625[1],&g_195,&g_238,&g_129}},{{&g_112,(void*)0,(void*)0,&g_625[1],(void*)0},{(void*)0,(void*)0,&g_238,(void*)0,&g_112},{&g_728,(void*)0,(void*)0,(void*)0,&g_129},{&g_112,&g_112,&g_195,&g_625[2],(void*)0},{&g_195,&g_625[1],(void*)0,(void*)0,&g_625[1]}},{{(void*)0,(void*)0,&g_625[2],&g_238,&g_129},{&g_195,&g_625[1],&g_238,&g_238,&g_195},{&g_625[2],&g_625[1],&g_129,&g_625[1],(void*)0},{&g_238,(void*)0,&g_129,(void*)0,&g_728},{&g_238,(void*)0,&g_625[1],&g_625[1],(void*)0}},{{&g_625[1],&g_195,&g_625[0],&g_112,(void*)0},{&g_625[1],&g_625[0],&g_112,&g_625[2],&g_728},{&g_112,&g_728,(void*)0,&g_625[1],(void*)0},{&g_625[1],&g_728,(void*)0,&g_195,&g_195},{&g_625[1],&g_112,&g_238,(void*)0,&g_195}}};
    uint16_t **l_1006 = &l_1007[4][2][0];
    uint16_t ***l_1008[4] = {&l_1006,&l_1006,&l_1006,&l_1006};
    int32_t l_1014 = 0x3801E958L;
    int i, j, k;
    l_1014 &= (((((safe_sub_func_uint64_t_u_u(0xF305981EB3E768A9LL, ((*g_242)--))) == l_1002[0][2][4]) < (**g_815)) || ((safe_rshift_func_uint8_t_u_s((!((g_423 = l_1006) == g_1009)), (((void*)0 != g_1011[2]) != (*g_242)))) ^ (-10L))) , p_39);
    return l_1002[0][2][4];
}



static int8_t * func_43(int32_t * p_44, uint64_t * p_45, uint64_t * p_46, int64_t  p_47, int8_t * p_48)
{ 
    int32_t l_995 = 7L;
    int32_t *l_996[5][7][5] = {{{(void*)0,&g_9,&g_225,(void*)0,(void*)0},{&g_9,&g_225,&g_69,&g_9,&g_69},{(void*)0,&g_225,&g_69,(void*)0,&g_225},{&g_225,&g_225,&g_69,(void*)0,&g_69},{&g_225,&g_225,(void*)0,&g_69,&g_69},{&g_225,&g_225,(void*)0,&g_225,(void*)0},{&g_225,&g_69,&g_69,&g_225,&g_9}},{{&g_225,&g_69,&g_69,&g_225,&g_225},{&g_225,&g_225,&g_69,&g_69,&g_225},{&g_9,&g_727,&g_225,&g_69,&g_727},{(void*)0,&g_69,&g_225,(void*)0,(void*)0},{&g_69,&g_727,&g_69,&g_225,&g_9},{(void*)0,&g_69,&g_69,&g_9,&g_9},{&g_9,&g_69,&g_225,&g_9,&g_69}},{{&g_225,(void*)0,(void*)0,&g_225,&g_69},{&g_225,(void*)0,(void*)0,&g_9,&g_9},{&g_225,&g_727,&g_727,&g_9,&g_727},{&g_225,&g_69,&g_727,&g_9,&g_69},{&g_225,(void*)0,&g_727,&g_9,&g_727},{&g_225,&g_9,&g_9,&g_225,&g_727},{(void*)0,&g_69,&g_69,&g_9,&g_69}},{{&g_9,&g_9,(void*)0,&g_9,(void*)0},{(void*)0,&g_225,&g_9,&g_225,&g_9},{&g_9,&g_9,&g_727,(void*)0,(void*)0},{&g_69,&g_225,&g_727,&g_69,&g_9},{&g_69,&g_9,&g_225,&g_69,&g_9},{(void*)0,&g_69,&g_69,&g_225,(void*)0},{&g_9,&g_69,&g_9,&g_225,&g_727}},{{&g_727,(void*)0,&g_225,&g_9,&g_69},{&g_69,&g_727,(void*)0,&g_9,&g_69},{&g_9,&g_69,&g_69,&g_9,&g_727},{&g_69,&g_9,&g_9,&g_69,&g_9},{&g_9,&g_69,(void*)0,(void*)0,(void*)0},{&g_727,&g_69,&g_727,&g_69,&g_225},{&g_225,&g_69,(void*)0,(void*)0,&g_69}}};
    uint64_t l_997[7][4][5] = {{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}},{{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL},{18446744073709551613UL,18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,18446744073709551608UL},{0x04F014A4191DABF6LL,0x6A49705E85D69A41LL,0x7FA616788461E873LL,0UL,6UL}}};
    int i, j, k;
    l_997[4][2][1] = l_995;
    return p_48;
}



static int32_t * func_49(int16_t  p_50, union U1  p_51, uint64_t  p_52)
{ 
    int8_t l_633[5][7][4] = {{{0x5EL,0x9EL,0x30L,0x44L},{(-5L),0xC9L,0L,0xB5L},{0x27L,(-8L),0x9FL,(-2L)},{0xBCL,1L,(-7L),0xB7L},{0xB4L,0x88L,(-1L),1L},{0L,0x45L,(-1L),(-1L)},{0xB4L,0L,(-7L),0xE3L}},{{0xBCL,0L,0x9FL,(-5L)},{0x9FL,(-5L),(-2L),(-2L)},{0x74L,0x27L,0x9EL,1L},{0x27L,0L,(-1L),0x88L},{(-1L),0xB4L,0L,(-1L)},{0xBCL,0xC9L,0xB5L,0x27L},{(-2L),0x88L,0x88L,(-2L)}},{{(-1L),0x27L,(-1L),(-2L)},{1L,(-8L),0x9EL,0xE3L},{0L,1L,0L,0xE3L},{0x9FL,(-8L),(-2L),(-2L)},{0xB7L,0x27L,(-7L),(-2L)},{0x74L,0x88L,(-1L),0x27L},{0L,0xC9L,0xAAL,(-1L)}},{{0L,0xB4L,(-7L),0x88L},{(-2L),0L,0x30L,1L},{0x9FL,0x27L,0x88L,(-2L)},{0xB4L,(-5L),0x9EL,(-5L)},{(-5L),0L,0xAAL,0xE3L},{(-1L),0L,(-2L),(-1L)},{0xB7L,0x45L,0xB5L,1L}},{{0xB7L,0x88L,(-2L),0xB7L},{(-1L),1L,0xAAL,(-2L)},{(-5L),0xC9L,0x9EL,0x88L},{0xB4L,1L,0x88L,7L},{0x9FL,0x45L,0x30L,(-2L)},{(-2L),(-5L),(-7L),0xBCL},{0L,0x88L,0xAAL,(-5L)}}};
    int32_t l_660 = 0xED0B100EL;
    int64_t l_662 = 1L;
    int32_t l_665 = (-1L);
    int32_t l_666[5];
    uint64_t l_723 = 0xE959D9EA43F176FBLL;
    uint32_t **l_726 = &g_640[0][4];
    int32_t *l_774 = &g_727;
    uint8_t *** const l_857 = &g_354;
    int32_t l_890 = 0x06079546L;
    union U2 l_938 = {0xAB0348023CD50399LL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_666[i] = 0xBBE455EFL;
    if (func_54(func_56(g_59, &p_52)))
    { 
        uint64_t l_634 = 18446744073709551609UL;
        uint32_t *l_636 = &g_121[0][0];
        int32_t l_658 = 0L;
        int8_t *l_670 = &l_633[0][3][3];
        uint16_t l_722 = 65534UL;
        const uint16_t l_724[6] = {0xB033L,0x1DF5L,0xB033L,0xB033L,0x1DF5L,0xB033L};
        int32_t l_758[2];
        struct S0 **l_769 = &g_302;
        int64_t *l_784 = &g_222;
        uint64_t l_796 = 18446744073709551609UL;
        int64_t l_894 = 0L;
        uint32_t l_930[7][1][7] = {{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}},{{0x36EAC8A4L,0x665F01B2L,0xFF49CD18L,4294967287UL,4294967287UL,0xFF49CD18L,0x665F01B2L}}};
        struct S0 l_931[4] = {{1UL,0xB976835E9C398005LL,0xA3A2EFB0L},{1UL,0xB976835E9C398005LL,0xA3A2EFB0L},{1UL,0xB976835E9C398005LL,0xA3A2EFB0L},{1UL,0xB976835E9C398005LL,0xA3A2EFB0L}};
        int32_t **l_965 = &l_774;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_758[i] = 0xD301EED6L;
        for (p_51.f1 = 0; (p_51.f1 != 10); ++p_51.f1)
        { 
            uint32_t *l_635 = &g_121[0][0];
            int32_t l_648 = 4L;
            int32_t l_657[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
            const int64_t *l_674 = &g_4[0][1];
            uint16_t ***l_721[6] = {&g_423,&g_423,&g_423,&g_423,&g_423,&g_423};
            uint8_t *l_744 = &g_149[3][0][0];
            uint8_t *l_745 = &g_667;
            int32_t l_746 = 0L;
            int i;
            for (g_25 = 0; (g_25 <= 4); g_25 = safe_add_func_int16_t_s_s(g_25, 7))
            { 
                (*g_589) = (safe_lshift_func_uint16_t_u_u((l_633[1][3][0] |= 0UL), (l_634 && (l_635 == l_636))));
            }
            for (g_69 = 0; (g_69 != (-4)); g_69 = safe_sub_func_int64_t_s_s(g_69, 4))
            { 
                uint32_t ***l_641 = &g_639[0][0];
                int32_t l_656 = 9L;
                int32_t l_659 = 0x0F9DC941L;
                int32_t l_664[4][5] = {{0xF61E40AEL,0x4C2A207EL,0xF61E40AEL,0x4C2A207EL,0xF61E40AEL},{6L,6L,6L,6L,6L},{0xF61E40AEL,0x4C2A207EL,0xF61E40AEL,0x4C2A207EL,0xF61E40AEL},{6L,6L,6L,6L,6L}};
                int i, j;
                (*l_641) = g_639[0][0];
                for (p_50 = 0; (p_50 >= 10); p_50 = safe_add_func_int16_t_s_s(p_50, 3))
                { 
                    int32_t *l_644 = &g_225;
                    int32_t *l_645 = &g_225;
                    int32_t *l_646 = &g_225;
                    int32_t *l_647 = &g_225;
                    int32_t *l_649 = (void*)0;
                    int32_t *l_650 = (void*)0;
                    int32_t *l_651 = &l_648;
                    int32_t *l_652 = (void*)0;
                    int32_t *l_653 = &l_648;
                    int32_t *l_654[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_654[i] = &g_225;
                    ++g_667;
                    (*l_653) &= (((l_670 == (void*)0) <= ((!(-1L)) ^ 18446744073709551606UL)) , (((safe_mul_func_uint8_t_u_u((((l_674 == (void*)0) && ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((p_51 , p_51.f2) , p_51.f1), l_657[1])) < l_656), l_659)) ^ p_51.f3)) ^ 0xFE3CL), 248UL)) && l_658) ^ p_50));
                    ++g_680[3];
                    (*l_645) &= l_634;
                    if ((*g_589))
                        continue;
                }
                if (l_659)
                    break;
                for (l_656 = 29; (l_656 == (-1)); --l_656)
                { 
                    uint16_t l_696 = 0x8277L;
                    int32_t *l_697 = &l_657[2];
                    l_664[2][3] |= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(p_51.f2, (((p_51.f2 >= (((p_50 < (safe_mul_func_int8_t_s_s(g_695, 0xE1L))) >= ((((g_661 , ((((0x9AL || (*g_59)) || l_634) && p_52) >= 1L)) , p_51.f3) == l_666[0]) > 1UL)) <= 0x99L)) > l_696) , l_658))) < l_659), l_696)), 2)), (-4L))) || g_514);
                    return &g_69;
                }
                for (g_238 = 18; (g_238 > 42); ++g_238)
                { 
                    int32_t *l_700 = &l_664[2][3];
                    uint16_t ***l_705[5];
                    int64_t *l_706[5] = {&l_662,&l_662,&l_662,&l_662,&l_662};
                    int32_t *l_725 = &l_648;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_705[i] = &g_423;
                    (*l_700) ^= (p_52 > 5UL);
                    (*l_725) |= (safe_div_func_uint64_t_u_u(((p_51.f3 >= (g_4[0][3] = (1L < (l_705[0] != (void*)0)))) >= (l_658 = ((safe_add_func_uint64_t_u_u(l_658, ((((((safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*l_700) = (0UL <= (safe_rshift_func_uint8_t_u_u(((((l_721[0] == (void*)0) != l_666[0]) || l_657[5]) , p_51.f3), l_722)))), 0x1A74263DL)), p_50)) , 0x80525FD8L) > l_657[5]) , (-1L)), p_52)) || p_51.f3), p_51.f1)) >= 0L), l_723)) | p_50) != p_51.f3) != (*g_59)) <= p_50) , l_724[0]))) < (*g_59)))), l_666[4]));
                    (*l_725) = (((*l_635) = ((*g_59) || ((*g_59) |= ((*l_670) |= l_657[1])))) >= (&g_640[0][4] != l_726));
                    ++g_728;
                }
            }
            if (l_724[1])
                break;
            if ((p_51.f1 ^ (safe_lshift_func_uint8_t_u_s(((l_658 <= (!(safe_mod_func_int8_t_s_s((!(safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(l_657[5], 0x36A9L))))), (safe_rshift_func_uint16_t_u_s(((safe_div_func_uint8_t_u_u(((*l_745) = (((2UL < ((*l_744) = ((((g_80 , ((g_655 ^ 6UL) , (**g_518))) & 18446744073709551608UL) , l_722) > 0x1FL))) & p_51.f1) , p_52)), l_724[4])) && p_50), l_746)))))) | p_51.f3), l_722))))
            { 
                (*g_589) = (*g_589);
                return &g_727;
            }
            else
            { 
                int32_t *l_754 = &g_225;
                int32_t *l_755 = &g_69;
                int32_t *l_756 = (void*)0;
                int32_t *l_757[4] = {&l_660,&l_660,&l_660,&l_660};
                int8_t l_760 = 0x18L;
                int i;
                for (g_238 = (-25); (g_238 != 39); g_238 = safe_add_func_uint32_t_u_u(g_238, 8))
                { 
                    uint64_t *l_753[5] = {&g_303.f1,&g_303.f1,&g_303.f1,&g_303.f1,&g_303.f1};
                    int i;
                    (*g_589) |= (((*l_744) |= p_51.f2) ^ (safe_add_func_uint64_t_u_u(((*g_242) = 0UL), (g_303.f1 ^= (g_21[2] = (safe_div_func_uint32_t_u_u(p_50, 0x61F08041L)))))));
                }
                --g_761[2];
                if (l_657[4])
                    break;
            }
        }
        (*g_589) = 0xA2C68EF3L;
        for (g_225 = 26; (g_225 != 6); g_225 = safe_sub_func_int8_t_s_s(g_225, 2))
        { 
            struct S0 **l_766 = &g_302;
            struct S0 ***l_767 = (void*)0;
            struct S0 ***l_768[1][1];
            int32_t l_771 = 6L;
            int32_t *l_772 = &l_758[0];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_768[i][j] = &l_766;
            }
            (*l_772) = (l_771 = ((*g_589) = (p_52 , (p_51.f1 <= ((l_769 = l_766) != (g_770 = &g_302))))));
            for (g_364.f1 = 5; (g_364.f1 >= 0); g_364.f1 -= 1)
            { 
                int i;
                if (g_761[g_364.f1])
                    break;
                for (g_236 = 0; (g_236 <= 0); g_236 += 1)
                { 
                    int32_t **l_773[4] = {&g_589,&g_589,&g_589,&g_589};
                    int i;
                    l_774 = &g_69;
                }
            }
        }
        if (p_51.f1)
        { 
            uint32_t **l_777 = &g_640[0][4];
            struct S0 *l_780 = (void*)0;
            int32_t *l_785[5];
            uint16_t *l_800 = &g_195;
            int64_t *l_811[1][6][6] = {{{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223},{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223},{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223},{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223},{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223},{(void*)0,&g_222,&l_662,&g_222,(void*)0,&g_223}}};
            uint32_t ***l_812 = &l_726;
            uint8_t ***l_856 = &g_354;
            int32_t l_858 = 1L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_785[i] = (void*)0;
            if ((safe_rshift_func_int8_t_s_s((((void*)0 != g_423) == (&l_636 != l_777)), (*g_59))))
            { 
                uint64_t l_786 = 0x50BE171CDCE64F38LL;
                struct S0 ***l_789 = &l_769;
                (*g_589) = (*g_589);
                for (g_364.f1 = (-4); (g_364.f1 <= (-25)); g_364.f1 = safe_sub_func_uint64_t_u_u(g_364.f1, 7))
                { 
                    int64_t **l_781 = (void*)0;
                    int64_t *l_783 = &g_222;
                    int64_t **l_782[7] = {&l_783,&l_783,&l_783,&l_783,&l_783,&l_783,&l_783};
                    int i;
                    (*g_770) = l_780;
                    (*l_774) &= p_52;
                    (*l_774) = ((l_784 = (void*)0) != &l_662);
                }
                l_774 = l_785[2];
                l_786++;
                (*l_789) = &g_302;
            }
            else
            { 
                int8_t l_797 = 0x1FL;
                int16_t *l_803 = &g_759[4];
                int16_t *l_804[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_805[3];
                uint8_t *l_821 = &g_667;
                const uint32_t l_826[3] = {0x82CC6E3BL,0x82CC6E3BL,0x82CC6E3BL};
                int16_t ** const *l_827 = (void*)0;
                int32_t l_843 = 0xB312B0FAL;
                int32_t l_848 = 0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_805[i] = 1UL;
                l_665 ^= ((*l_774) = (safe_div_func_int16_t_s_s((l_805[2] = ((*l_803) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_796, (l_797 & ((((safe_lshift_func_int16_t_s_u((l_758[0] = (-1L)), 8)) == (((void*)0 == l_800) >= p_51.f2)) || (((safe_lshift_func_uint16_t_u_u(g_70.f0, 10)) && 0x357C6F33L) != 1L)) ^ 0UL)))), l_658)))), l_797)));
                if ((safe_div_func_uint16_t_u_u((+(p_52 , (safe_mul_func_int8_t_s_s(((*g_59) = (l_811[0][2][5] == (void*)0)), ((l_812 != &l_726) == (((((((safe_lshift_func_uint16_t_u_s((g_815 == (((*g_242) = (safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((++(*l_821)), (safe_rshift_func_uint16_t_u_s((*l_774), p_50)))), l_826[0]))) , &g_816)), 14)) && p_51.f2) || p_50) ^ p_52) < l_826[0]) == 9L) == 0x06F540F50F7904A7LL)))))), p_51.f2)))
                { 
                    g_589 = (void*)0;
                }
                else
                { 
                    int16_t ** const *l_828 = (void*)0;
                    int32_t *l_829 = &l_665;
                    l_828 = l_827;
                    return l_785[2];
                }
                (*l_774) = (safe_sub_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s((~(safe_unary_minus_func_int16_t_s((((+(((((*l_774) && 65535UL) == ((((g_364 , ((((safe_rshift_func_int8_t_s_u(0xF4L, ((safe_lshift_func_uint16_t_u_s(((((g_149[3][0][0] , (safe_lshift_func_int8_t_s_u(((l_843 |= p_52) || (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*g_242) < l_634), 3)), l_826[1]))), 0))) || p_50) != l_848) , 0x8740L), p_51.f1)) != l_797))) | p_51.f2) , &g_639[0][0]) != &g_639[0][0])) || l_758[1]) ^ l_658) && 0x74L)) , 253UL) == (-3L))) == l_805[2]) , p_50)))), 0xDA058415E8B60D4FLL)) == g_849) >= (*g_242)), p_51.f3));
            }
            g_727 = ((l_658 > (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((l_722 || (l_856 == (l_758[1] , l_857))), p_51.f1)), ((p_52 | 0xBCFA833DL) >= 6UL))), p_51.f2))) && l_858);
        }
        else
        { 
            uint32_t ***l_859 = &l_726;
            int32_t l_860 = 0x4DFDE9B9L;
            int32_t *l_868 = &l_758[0];
            int32_t *l_869[7] = {&g_727,&g_727,&g_727,&g_727,&g_727,&g_727,&g_727};
            uint32_t *l_884 = &g_382;
            struct S0 l_889 = {4294967293UL,0x1EBDBD82110AB602LL,9UL};
            uint8_t *l_893 = &g_667;
            uint8_t l_956[1];
            uint32_t **l_957 = &g_946;
            uint16_t l_960 = 0xB464L;
            int i;
            for (i = 0; i < 1; i++)
                l_956[i] = 0xD7L;
            l_860 = (&g_640[1][1] != ((*l_859) = l_726));
            for (p_51.f1 = 0; (p_51.f1 == 5); p_51.f1 = safe_add_func_uint32_t_u_u(p_51.f1, 1))
            { 
                struct S0 **l_867 = (void*)0;
                for (g_382 = 20; (g_382 != 8); g_382 = safe_sub_func_int32_t_s_s(g_382, 1))
                { 
                    struct S0 ***l_865 = (void*)0;
                    struct S0 ***l_866 = &l_769;
                    l_867 = ((*l_866) = &g_302);
                    if (p_52)
                        continue;
                }
            }
            ++g_870;
            if (((l_658 = ((safe_div_func_uint32_t_u_u(((*l_636)++), (safe_lshift_func_uint8_t_u_s(((*l_893) = (safe_mul_func_int8_t_s_s(((((void*)0 == &g_70) < ((p_51.f2 ^ (safe_add_func_uint64_t_u_u(18446744073709551607UL, (!(++(*l_884)))))) | (safe_mod_func_int64_t_s_s((((*l_868) ^= (l_889 , (l_890 >= (((safe_rshift_func_uint8_t_u_u(p_51.f2, p_50)) == (*l_774)) ^ (*l_774))))) == p_50), (*l_774))))) | (*l_774)), p_51.f2))), (*g_59))))) > 1UL)) <= l_894))
            { 
                int32_t *l_895[6][2] = {{&g_225,&g_225},{&g_225,&g_225},{&g_225,&g_225},{&g_225,&g_225},{&g_225,&g_225},{&g_225,&g_225}};
                int i, j;
                return l_895[0][0];
            }
            else
            { 
                union U2 l_907[1] = {{-1L}};
                int32_t *l_909 = &g_727;
                int64_t *l_914 = (void*)0;
                int32_t l_942 = (-5L);
                int i;
                (*l_774) &= (safe_rshift_func_int8_t_s_s((*g_59), 5));
                for (g_870 = 0; (g_870 == 60); g_870 = safe_add_func_int32_t_s_s(g_870, 9))
                { 
                    int32_t **l_908[3];
                    uint32_t *l_917[7] = {&g_680[3],&g_680[3],&g_80.f2,&g_680[3],&g_680[3],&g_80.f2,&g_680[3]};
                    uint32_t **l_916[7] = {&l_917[5],&l_917[5],&l_917[5],&l_917[5],&l_917[5],&l_917[5],&l_917[5]};
                    uint32_t ***l_915 = &l_916[3];
                    uint16_t *l_918 = (void*)0;
                    uint16_t *l_919 = &g_112;
                    uint16_t *l_920 = &g_625[2];
                    uint32_t l_921 = 0xA5A37D50L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_908[i] = &l_869[3];
                    l_921 |= (((((safe_rshift_func_uint16_t_u_u(((~((safe_div_func_int16_t_s_s(0x076CL, l_724[0])) ^ (safe_mod_func_int16_t_s_s((((*l_868) = ((*l_774) = ((g_80 , (((*l_920) = ((*l_919) = ((l_907[0] , (l_909 = (g_589 = &l_660))) != (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((-1L), (((*l_915) = (((void*)0 != l_914) , (void*)0)) != (void*)0))) ^ 255UL), 3UL)) , p_51) , &g_69)))) , (*g_242))) < 0x5435FACE81BDB505LL))) ^ 0x81A690E5L), 7L)))) & p_51.f1), 9)) < 8L) | p_52) ^ p_51.f1) | (*g_816));
                }
                for (g_60 = 0; (g_60 < 18); ++g_60)
                { 
                    int16_t l_932 = 0xA527L;
                    int64_t l_933[2];
                    struct S0 **l_941 = &g_302;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_933[i] = 0xE8FBFCEC4D8CD10BLL;
                    l_933[1] = ((safe_mul_func_int8_t_s_s(((void*)0 == &g_589), 247UL)) & (((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s(((l_930[0][0][1] && ((((((p_51.f2 , ((((l_931[1] , l_724[5]) >= p_51.f2) , (*l_909)) & p_52)) && (*g_242)) > p_50) && 1L) , (-7L)) <= (*l_774))) , (**g_815)), p_51.f2)) || 255UL), l_932)) , 0xE7A32E93DCEBAE68LL) & (*l_909)));
                    (*g_589) = p_52;
                    l_942 &= ((safe_mul_func_int8_t_s_s((*l_868), (safe_lshift_func_int8_t_s_u((l_938 , 0x9EL), (((((*l_636)++) >= 0xF5F7C92FL) > (l_769 == l_941)) > (((*l_774) , (*l_909)) , (*l_909))))))) != p_51.f3);
                    l_658 = 0x2665BF9AL;
                    (*l_909) = (safe_add_func_int32_t_s_s((g_945[2][4] != (((safe_mod_func_uint32_t_u_u(p_50, (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s((0xA0L | (~((((p_51.f2 == (-4L)) >= 0x575A2302L) < (*l_909)) == (*l_774)))), p_51.f3)) & l_956[0]), 1L)) >= (-1L)), (*l_774))))) || (**g_815)) , l_957)), p_51.f2));
                }
                for (p_51.f3 = 0; (p_51.f3 <= 6); p_51.f3 += 1)
                { 
                    (*l_859) = (*l_859);
                    return &g_727;
                }
                (*l_868) = ((safe_rshift_func_uint8_t_u_u((l_960 ^= ((void*)0 == &l_758[0])), 7)) >= ((*l_774) | (((*g_589) || (((*l_893) = (l_909 == (void*)0)) < ((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u((g_199 , p_51.f3), (*l_774))) , (*g_589)) == (*l_868)), 0)) , 0x67L))) & (*l_774))));
            }
        }
        (*l_965) = &l_758[0];
    }
    else
    { 
        const union U2 l_983 = {1L};
        int64_t l_987 = (-6L);
        int32_t *l_994 = (void*)0;
        for (l_665 = 0; (l_665 <= 0); l_665 += 1)
        { 
            uint8_t l_970 = 0UL;
            uint8_t l_993 = 0xD5L;
            (*g_589) = 0x384B1E1FL;
            for (g_728 = 0; (g_728 <= 0); g_728 += 1)
            { 
                uint16_t *l_990 = &g_129;
                int i, j;
                (*g_589) = (l_660 = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_970 = g_4[g_728][(l_665 + 5)]), (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(p_50, p_51.f0.f0)) , (l_983 , (safe_div_func_uint64_t_u_u((((!l_987) || (safe_add_func_int16_t_s_s((((*l_990)--) && ((((*l_774) &= p_52) <= p_52) == p_51.f3)), 0xAA56L))) || p_50), 0xB89CF5DAA8E0F82DLL)))) | l_993), (**g_518))), p_51.f2)), p_51.f0.f0)) & 0x10BAL) > (-1L)), (**g_518))), p_52)))), p_50)) , l_970));
            }
        }
        return l_994;
    }
    return &g_9;
}



static int32_t  func_54(int8_t  p_55)
{ 
    (*g_589) = (*g_589);
    return (*g_589);
}



static int8_t  func_56(int8_t * p_57, uint64_t * p_58)
{ 
    int32_t l_65 = 8L;
    struct S0 l_66 = {4294967295UL,0xFEA361F882D77871LL,18446744073709551615UL};
    int32_t *l_67[7] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
    uint64_t *l_77[7][6][3] = {{{(void*)0,&g_70.f1,&g_21[0]},{(void*)0,(void*)0,&g_21[3]},{&g_21[2],&g_21[2],&g_21[3]},{&g_21[2],&g_21[2],&g_21[0]},{&g_21[2],&g_21[2],&l_66.f1},{&g_21[2],(void*)0,&g_21[4]}},{{&g_21[2],(void*)0,&g_21[2]},{(void*)0,&g_21[2],&g_21[4]},{(void*)0,&g_21[2],&g_21[2]},{&l_66.f1,&g_21[2],&g_21[4]},{&l_66.f1,(void*)0,&l_66.f1},{(void*)0,&g_70.f1,&g_21[0]}},{{(void*)0,(void*)0,&g_21[3]},{&g_21[2],&g_21[2],&g_21[3]},{&g_21[2],&g_21[2],&g_21[0]},{&g_21[2],&g_21[2],&l_66.f1},{&g_21[2],(void*)0,&g_70.f1},{&l_66.f1,&g_70.f1,&l_66.f1}},{{&g_70.f1,&l_66.f1,&g_21[2]},{(void*)0,&l_66.f1,&l_66.f1},{(void*)0,&l_66.f1,&g_70.f1},{(void*)0,&g_25,&g_21[2]},{(void*)0,&g_21[2],(void*)0},{&g_70.f1,&g_25,(void*)0}},{{&l_66.f1,&l_66.f1,(void*)0},{&g_21[0],&l_66.f1,(void*)0},{&l_66.f1,&l_66.f1,&g_21[2]},{&g_21[0],&g_70.f1,&g_70.f1},{&l_66.f1,&g_70.f1,&l_66.f1},{&g_70.f1,&l_66.f1,&g_21[2]}},{{(void*)0,&l_66.f1,&l_66.f1},{(void*)0,&l_66.f1,&g_70.f1},{(void*)0,&g_25,&g_21[2]},{(void*)0,&g_21[2],(void*)0},{&g_70.f1,&g_25,(void*)0},{&l_66.f1,&l_66.f1,(void*)0}},{{&g_21[0],&l_66.f1,(void*)0},{&l_66.f1,&l_66.f1,&g_21[2]},{&g_21[0],&g_70.f1,&g_70.f1},{&l_66.f1,&g_70.f1,&l_66.f1},{&g_70.f1,&l_66.f1,&g_21[2]},{(void*)0,&l_66.f1,&l_66.f1}}};
    int8_t l_82 = 0xC7L;
    int32_t l_113 = 0xD168D339L;
    int8_t l_114 = 1L;
    struct S0 *l_208[4][3] = {{&g_70,&g_70,&g_70},{&g_70,&g_70,(void*)0},{&g_70,&g_70,&g_70},{&g_70,&g_70,(void*)0}};
    struct S0 * const *l_207 = &l_208[3][2];
    uint16_t *l_219 = &g_195;
    uint64_t ***l_369 = &g_241;
    int32_t l_375 = (-8L);
    uint64_t l_467 = 18446744073709551615UL;
    struct S0 l_482 = {0x600E5B1AL,9UL,18446744073709551607UL};
    const uint64_t l_483 = 0x5A1CEB47212AF11BLL;
    const uint64_t **l_515 = (void*)0;
    const uint8_t *l_535 = &g_149[3][0][0];
    uint32_t l_558 = 18446744073709551612UL;
    int16_t l_626 = (-1L);
    int i, j, k;
    g_69 = (g_68 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((l_65 <= (((&l_65 != &l_65) != ((l_66 , 0xC1L) <= (*g_59))) & l_65)) <= l_66.f0) != 0x9CL), l_66.f0)), 10)));
    g_69 &= (((g_70 , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(1L, ((*g_59) <= g_25))), 0)), ((void*)0 != l_77[5][3][0])))) ^ g_4[0][1]) && (*g_59));
    g_83 = (g_69 = ((safe_mod_func_int32_t_s_s((g_80 , 0x2708467EL), (0x23L && (safe_unary_minus_func_int64_t_s((l_82 , (&l_65 == (g_69 , (void*)0)))))))) != g_70.f2));
    if (g_4[0][4])
    { 
        int32_t l_88 = 0xD2767F92L;
        union U2 l_102 = {-5L};
        int32_t l_115 = 4L;
        const struct S0 *l_160 = (void*)0;
        uint8_t l_202 = 0x6EL;
        struct S0 *l_204 = &l_66;
        struct S0 **l_203 = &l_204;
        int64_t l_232 = 0L;
        uint8_t l_254 = 0xFBL;
        struct S0 *l_255 = &l_66;
        uint16_t * const l_281 = &g_195;
        uint64_t *l_311[7];
        uint8_t *l_323 = &l_254;
        uint32_t *l_328 = &l_102.f2;
        int32_t ** const l_342 = &l_67[1];
        uint64_t l_358[5][4] = {{0xBD035DC35DF54E5BLL,0xEE368F018AFD80EDLL,0xEE368F018AFD80EDLL,0xBD035DC35DF54E5BLL},{0xBD035DC35DF54E5BLL,0xEE368F018AFD80EDLL,0xEE368F018AFD80EDLL,0xBD035DC35DF54E5BLL},{0xBD035DC35DF54E5BLL,0xEE368F018AFD80EDLL,0xEE368F018AFD80EDLL,0xBD035DC35DF54E5BLL},{0xBD035DC35DF54E5BLL,0xEE368F018AFD80EDLL,0xEE368F018AFD80EDLL,0xBD035DC35DF54E5BLL},{0xBD035DC35DF54E5BLL,0xEE368F018AFD80EDLL,0xEE368F018AFD80EDLL,0xBD035DC35DF54E5BLL}};
        int i, j;
        for (i = 0; i < 7; i++)
            l_311[i] = (void*)0;
        if (((((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((((l_88 <= 4294967295UL) && (&l_82 != &l_82)) > (((g_70.f1 | ((l_88 , (void*)0) == &g_25)) > g_60) == 0xE1196B4A016C9CC5LL)), g_70.f2)), l_88)) <= g_80.f0) && g_21[1]) , l_88) , 0x37L) == g_80.f0))
        { 
            uint8_t l_90 = 0x16L;
            --l_90;
        }
        else
        { 
            uint16_t l_98[1][6][1];
            uint16_t *l_109 = (void*)0;
            uint16_t *l_110 = (void*)0;
            uint16_t *l_111[2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_98[i][j][k] = 65535UL;
                }
            }
            for (i = 0; i < 2; i++)
                l_111[i] = &g_112;
            for (g_69 = 0; (g_69 <= 0); g_69 += 1)
            { 
                struct S0 *l_94 = &g_70;
                struct S0 **l_93 = &l_94;
                int32_t *l_95 = (void*)0;
                int32_t **l_96 = &l_95;
                int32_t *l_97 = &l_88;
                (*l_93) = &g_70;
                (*l_97) ^= (((l_67[5] = &g_9) == ((*l_96) = l_95)) || (*g_59));
                for (l_66.f1 = 0; (l_66.f1 <= 0); l_66.f1 += 1)
                { 
                    int i, j;
                    return g_4[l_66.f1][(l_66.f1 + 3)];
                }
            }
            l_115 ^= (g_69 |= (l_98[0][5][0] | (safe_rshift_func_int8_t_s_s((~l_88), (((l_98[0][5][0] > ((((l_102 , (safe_sub_func_uint64_t_u_u(((((safe_mod_func_int16_t_s_s(0L, (safe_lshift_func_uint16_t_u_s((l_113 = (g_70.f2 , g_70.f2)), 4)))) & l_114) && g_4[0][1]) & g_60), 1UL))) & 0UL) , (void*)0) != (void*)0)) >= l_102.f4) | (-5L))))));
        }
        if (l_102.f4)
        { 
            union U1 l_118 = {{0x28D9C3D7L,1UL,0xBDB4F01BL}};
            int32_t l_130 = 0x4E4CF6FCL;
            struct S0 *l_162 = &l_66;
            int32_t l_191 = 8L;
            const union U2 l_194 = {-7L};
            int32_t **l_198 = &l_67[1];
            for (g_112 = 0; (g_112 <= 2); g_112 += 1)
            { 
                uint32_t *l_120 = &g_121[0][0];
                int32_t l_128 = (-1L);
                l_130 = ((0x86L || ((safe_lshift_func_int8_t_s_s((l_118 , (*p_57)), 5)) < (~(((void*)0 == &l_88) <= ((*l_120) ^= g_4[0][3]))))) == ((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((g_129 = ((l_128 = (g_69 = g_4[0][1])) && l_102.f3)) && g_112), (*g_59))), 0UL)) != l_88), (*p_58))) <= 0x3705L));
                g_149[3][0][0] |= (l_128 = ((g_21[5] = (safe_mod_func_uint64_t_u_u((l_115 |= (safe_div_func_int8_t_s_s(0x8DL, (safe_rshift_func_uint16_t_u_u(l_128, (safe_rshift_func_int16_t_s_s((((*l_120) = ((*p_58) < ((l_128 , ((l_118.f0.f2 || ((((l_128 != (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((l_130 = (*p_58)) <= g_89), (-8L))), l_128)) , l_118.f0.f2) , 4UL), l_88)) , g_80.f2), g_70.f1)), 1L))) >= l_118.f3) <= l_102.f0) < g_4[0][4])) , l_102)) , g_80.f3))) == g_89), g_21[4]))))))), g_69))) > l_128));
                return (*g_59);
            }
            for (l_118.f3 = 0; (l_118.f3 <= 6); l_118.f3 += 1)
            { 
                return (*p_57);
            }
            for (l_113 = (-16); (l_113 == (-18)); --l_113)
            { 
                int32_t **l_152 = &l_67[1];
                struct S0 *l_161 = &l_66;
                int32_t l_182 = 2L;
                int64_t *l_190 = &g_4[0][3];
                (*l_152) = (void*)0;
                if ((safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_int32_t_s(3L)) , ((((((((safe_sub_func_uint64_t_u_u(g_70.f0, g_80.f4)) , g_69) == (safe_sub_func_uint16_t_u_u(g_80.f4, ((((-1L) != ((void*)0 != l_160)) & l_115) & l_130)))) & 1L) , l_161) == l_162) || 4294967295UL) != 0xF838L)) , g_80.f4) < 0x897AE044L), 0x97L)))
                { 
                    uint16_t *l_171 = &g_129;
                    uint32_t *l_174[4][4] = {{&g_80.f2,&g_80.f2,&g_80.f2,&g_80.f2},{&g_80.f2,&g_80.f2,&g_80.f2,&g_80.f2},{&g_80.f2,&g_80.f2,&g_80.f2,&g_80.f2},{&g_80.f2,&g_80.f2,&g_80.f2,&g_80.f2}};
                    int32_t l_181 = 1L;
                    int i, j;
                    l_182 = ((((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((*l_171) |= (safe_lshift_func_int8_t_s_u((*p_57), g_70.f2))), ((safe_rshift_func_int8_t_s_u(0x53L, ((g_80.f2++) , (safe_add_func_uint8_t_u_u(l_115, (safe_mul_func_uint16_t_u_u((0x2F1CL & (-1L)), l_181))))))) || g_9))) , (*g_59)) | 0xA6L), l_88)), 0x722E02E4CAB560D9LL)) , l_102.f0) >= 1L) , 0x29AB7E0CL);
                    return l_118.f3;
                }
                else
                { 
                    if (g_70.f1)
                        break;
                }
                (*l_152) = ((l_115 = (safe_sub_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_u(l_130, 1))), (((((safe_div_func_uint64_t_u_u(1UL, (l_191 = ((*l_190) &= g_70.f2)))) , (g_149[3][0][2] == (safe_add_func_uint64_t_u_u(((((252UL >= 9UL) >= (l_194 , 3L)) , l_182) >= g_129), l_118.f2)))) | 65535UL) != g_83) , l_115)))) , &l_115);
                ++g_195;
            }
            (*l_198) = &g_69;
            --g_199;
        }
        else
        { 
            struct S0 ***l_205 = (void*)0;
            struct S0 **l_206 = &l_204;
            struct S0 * const **l_209 = &l_207;
            int32_t l_221 = (-10L);
            union U1 l_265 = {{0x3E55E6CBL,0x52BEC56E48052E4BLL,18446744073709551609UL}};
            const uint64_t **l_292 = (void*)0;
            uint8_t **l_320 = (void*)0;
            uint8_t *l_322 = &g_149[2][0][0];
            uint8_t **l_321[6][5] = {{(void*)0,&l_322,&l_322,&l_322,(void*)0},{(void*)0,&l_322,&l_322,&l_322,(void*)0},{(void*)0,&l_322,&l_322,&l_322,(void*)0},{(void*)0,&l_322,&l_322,&l_322,(void*)0},{(void*)0,&l_322,&l_322,&l_322,(void*)0},{(void*)0,&l_322,&l_322,&l_322,(void*)0}};
            int32_t l_324 = 0x01AFE7F2L;
            int i, j;
            g_69 &= ((l_206 = (l_203 = (l_202 , l_203))) != ((*l_209) = l_207));
            if ((g_69 = (safe_rshift_func_uint8_t_u_u(l_102.f3, 4))))
            { 
                int64_t l_214 = 4L;
                int32_t l_226 = 4L;
                int32_t l_233 = 0xA08477F4L;
                int32_t l_235 = (-6L);
                int32_t l_237 = 0x8AFDB3C9L;
                for (g_83 = (-10); (g_83 <= (-30)); g_83 = safe_sub_func_int16_t_s_s(g_83, 9))
                { 
                    uint16_t *l_216 = (void*)0;
                    uint16_t **l_215 = &l_216;
                    uint16_t *l_218 = &g_129;
                    uint16_t **l_217 = &l_218;
                    int32_t l_220 = 0x850D4A36L;
                    int32_t l_227 = 0xA5EDEFCCL;
                    g_69 |= (l_102.f4 ^ l_214);
                    if (g_60)
                        continue;
                    l_220 |= (((*l_217) = ((*l_215) = &g_129)) == (l_219 = l_219));
                    if (l_102.f2)
                        break;
                    --g_228;
                }
                l_232 = ((+18446744073709551611UL) && (g_223 , (l_221 ^ (*p_58))));
                l_88 |= (&g_228 == &g_228);
                if (g_80.f0)
                { 
                    int32_t l_234[3];
                    uint64_t ***l_243 = &g_241;
                    int32_t l_246 = 0x7608B0E2L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_234[i] = 0x3A1E7A8CL;
                    --g_238;
                    (*l_243) = g_241;
                    l_221 |= g_69;
                    l_226 = 0L;
                    l_246 ^= (safe_lshift_func_int8_t_s_u((*p_57), 1));
                }
                else
                { 
                    l_221 = (safe_div_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((g_70 , &g_70) == (void*)0), (safe_unary_minus_func_uint64_t_u((safe_mod_func_uint64_t_u_u(((g_80 , (l_102.f2 & 0xA8L)) || ((l_102.f3 & l_233) >= l_254)), (*g_242))))))) , l_255) == (*l_207)), l_235));
                    l_221 = g_224;
                }
            }
            else
            { 
                const int64_t l_263[1] = {0x237C08B2C5ECF491LL};
                int32_t l_264 = 0x2F5C2C12L;
                int32_t l_305 = 0x4B573957L;
                int i;
                l_264 = (g_80 , (0x4B92L >= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(0x39L, 4)) & (!(safe_rshift_func_uint8_t_u_u(8UL, ((l_263[0] <= 8UL) | (0xBCB7L ^ g_80.f3)))))), (*g_59)))));
                if ((l_221 = (l_265 , l_202)))
                { 
                    uint64_t ***l_269 = (void*)0;
                    uint64_t ***l_270 = &g_241;
                    int32_t l_271 = (-1L);
                    l_271 = (safe_add_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(0x33F5L)), ((((*l_270) = (void*)0) == &g_242) & l_271)));
                }
                else
                { 
                    int64_t *l_278 = &g_222;
                    int32_t l_284 = 0x72D1E092L;
                    int32_t l_285 = 0x4F4323D4L;
                    uint8_t *l_299[1][3][1];
                    struct S0 *l_300 = &l_66;
                    struct S0 **l_301 = (void*)0;
                    uint32_t *l_304[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_299[i][j][k] = (void*)0;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_304[i] = &g_121[1][1];
                    l_285 &= (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_265.f0.f2 , ((safe_add_func_int64_t_s_s(((*l_278) = l_263[0]), (safe_div_func_int16_t_s_s((&g_129 == l_281), 1UL)))) || (((safe_add_func_uint16_t_u_u(l_284, l_284)) | 0UL) && 7L))) , 0xF19AL), 0xFFD9L)), 0x0E2FL));
                    l_264 = ((safe_mod_func_int8_t_s_s(((*g_59) |= (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((g_89 , ((*l_278) ^= ((*p_58) <= (((l_265.f2 , g_195) , l_292) == (void*)0)))) >= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((l_221 = ((((**g_241) && g_129) & l_264) > (*p_58))), g_4[0][1])) , 0xA4L), l_264)), l_102.f3))) , 0x25L), 8L)), l_284))), l_265.f0.f2)) ^ 0xD3L);
                    g_302 = ((*l_206) = l_300);
                    l_305 ^= ((((l_284 == ((g_80 , (*l_300)) , (l_264 |= (g_4[0][1] , (g_21[2] , ((3UL >= ((((l_221 = l_265.f0.f0) ^ 0xCEEA620BL) | g_112) & (*p_58))) < (-8L))))))) & l_284) >= 0x93E27F5BL) < g_69);
                }
            }
            if (((g_149[3][0][0] , 0UL) , ((safe_lshift_func_int8_t_s_s((+((((*l_281) = (safe_mod_func_int16_t_s_s((l_311[4] != (void*)0), 0xCC3EL))) != ((*p_58) > (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((l_323 = &g_149[1][0][2]) != (void*)0), l_232)) != l_324), 0x3BL)) != 0x732A64952B119D4DLL) && l_102.f4), 10)), 7UL)) <= 18446744073709551608UL) & (*p_57)))) < l_221)), 5)) > (*p_58))))
            { 
                int32_t l_337 = 0xFC81A480L;
                if (((void*)0 != &l_65))
                { 
                    uint16_t l_325 = 0x5E73L;
                    ++l_325;
                }
                else
                { 
                    uint32_t **l_333 = (void*)0;
                    uint32_t *l_335[5];
                    uint32_t **l_334 = &l_335[3];
                    int32_t l_336 = (-4L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_335[i] = &g_80.f2;
                    l_88 = ((4294967293UL == (((void*)0 == l_328) != ((l_102.f0 & (((safe_sub_func_uint32_t_u_u((g_121[1][0]++), (((((*l_334) = l_67[1]) != ((l_336 >= (l_102 , 0xDBL)) , l_328)) > 9L) || 0x317E7085L))) && l_337) && l_202)) <= 1UL))) , l_337);
                }
            }
            else
            { 
                int32_t **l_340 = &l_67[1];
                int32_t ***l_341 = &l_340;
                uint16_t **l_348[6] = {&l_219,&l_219,&l_219,&l_219,&l_219,&l_219};
                uint16_t ***l_349 = &l_348[3];
                uint8_t ***l_355 = &l_320;
                int16_t *l_356 = (void*)0;
                int16_t *l_357 = &g_224;
                int i;
                g_225 &= (safe_rshift_func_uint8_t_u_s((((*l_341) = l_340) != l_342), (l_265.f2 , (l_324 = (*p_57)))));
                g_69 = ((***l_341) < ((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((~(((*l_349) = l_348[5]) == (void*)0)), 3)), 18446744073709551610UL)) <= ((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((((*l_355) = g_354) != (void*)0), ((((*l_357) = g_70.f2) & l_358[3][2]) ^ g_80.f0))), 2)) >= 0x77F9D6CCL) <= g_238) == (**l_340))));
            }
        }
    }
    else
    { 
        int32_t l_361[4] = {(-2L),(-2L),(-2L),(-2L)};
        uint8_t l_376 = 0x50L;
        int32_t l_437[6] = {0x37361870L,(-10L),0x37361870L,0x37361870L,(-10L),0x37361870L};
        const int16_t * const *l_452 = (void*)0;
        uint32_t *l_458 = &g_121[0][0];
        uint8_t *l_501[7];
        uint8_t * const *l_500 = &l_501[5];
        uint8_t * const **l_499 = &l_500;
        int8_t l_527 = 0xBEL;
        union U2 l_587 = {-2L};
        int32_t l_596 = 0L;
        int i;
        for (i = 0; i < 7; i++)
            l_501[i] = (void*)0;
        l_361[0] &= ((safe_lshift_func_uint8_t_u_u(0xEAL, g_223)) | 0xC7L);
    }
    return l_626;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_121[i][j], "g_121[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_149[i][j][k], "g_149[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_303.f0, "g_303.f0", print_hash_value);
    transparent_crc(g_303.f1, "g_303.f1", print_hash_value);
    transparent_crc(g_303.f2, "g_303.f2", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_380[i], "g_380[i]", print_hash_value);

    }
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_625[i], "g_625[i]", print_hash_value);

    }
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_680[i], "g_680[i]", print_hash_value);

    }
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_759[i], "g_759[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_761[i], "g_761[i]", print_hash_value);

    }
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1016[i][j], "g_1016[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1081, "g_1081", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1114[i], "g_1114[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1131[i][j], "g_1131[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
