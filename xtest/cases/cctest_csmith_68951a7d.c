// SPDX-License-Identifier: MIT
// cctest_csmith_68951a7d.c --- cctest case csmith_68951a7d (csmith seed 1754602109)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7b3eec74 */

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

// Options:   -s 1754602109 -o /tmp/csmith_gen_vgxg5_e6/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint16_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const uint8_t  f1;
   uint32_t  f2;
};

union U2 {
   int8_t  f0;
};


static const uint64_t g_3 = 0UL;
static struct S0 g_24 = {0x9968CB667F5AEE0CLL,65529UL};
static uint32_t g_29 = 9UL;
static int16_t g_33 = (-1L);
static int64_t g_34 = 0xF1BB1300CA3C47AALL;
static int64_t g_48 = 0L;
static uint16_t g_74 = 65534UL;
static int64_t g_76 = 0xC85E2D206F84C1F2LL;
static uint64_t g_77 = 0UL;
static int16_t g_104[4][2] = {{0x566FL,0x566FL},{0x566FL,0x566FL},{0x566FL,0x566FL},{0x566FL,0x566FL}};
static uint16_t g_127 = 0x59FCL;
static uint64_t g_135 = 18446744073709551615UL;
static uint8_t g_152 = 0UL;
static uint64_t g_153 = 0x4283DBFA8D9A8E3BLL;
static int16_t g_183 = 9L;
static uint32_t g_184 = 0xB797A8B7L;



static uint16_t  func_1(void);
static struct S0  func_7(uint32_t  p_8, uint16_t  p_9, union U2  p_10, int8_t  p_11);
static uint32_t  func_12(int16_t  p_13, int32_t  p_14, uint32_t  p_15);
static union U1  func_16(int32_t  p_17, int32_t  p_18, uint8_t  p_19, int32_t  p_20, union U1  p_21);




static uint16_t  func_1(void)
{ 
    uint32_t l_2 = 0x2961C0F8L;
    int32_t l_4 = (-2L);
    union U1 l_23 = {{0UL,0xAB5CL}};
    int32_t l_35 = 0xBF0A6441L;
    union U2 l_36 = {0x9EL};
    int32_t l_88 = (-7L);
    const uint8_t l_102 = 0xD6L;
    union U2 l_134 = {0xAAL};
    if (((l_2 ^ g_3) & (l_4 , (safe_lshift_func_int16_t_s_u(l_2, g_3)))))
    { 
        int32_t l_22 = 0x8B922806L;
        int32_t l_89 = 0x600A8D5EL;
        int32_t l_115 = 0x483D774FL;
        g_24 = func_7((l_35 = func_12(l_4, l_4, (func_16(l_22, g_3, l_2, g_3, l_23) , l_22))), g_24.f0, l_36, g_24.f0);
        for (g_24.f1 = (-2); (g_24.f1 <= 17); g_24.f1 = safe_add_func_uint8_t_u_u(g_24.f1, 5))
        { 
            int16_t l_68 = (-1L);
            int32_t l_75 = 3L;
            union U2 l_87 = {-1L};
            for (l_4 = 24; (l_4 >= 9); --l_4)
            { 
                int16_t l_73 = 0L;
                l_75 = ((((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((g_33 = ((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((((g_74 ^= (!(safe_sub_func_uint8_t_u_u(((0xDDL < (l_68 <= (safe_lshift_func_int8_t_s_u(g_34, 7)))) , (safe_sub_func_uint64_t_u_u((g_24.f0 ^= 0UL), l_73))), l_22)))) && 0x891DL) < l_22), l_22)) <= 0xE8BBL) && g_34), 7)) , l_73)) <= g_3) <= g_24.f1), 65526UL)), l_73)) , g_3) == l_73) && l_73);
                l_22 |= ((l_35 ^= (g_76 = l_73)) | g_29);
                if (g_33)
                    continue;
            }
            --g_77;
            if ((l_75 |= ((safe_rshift_func_int16_t_s_s(g_24.f1, (safe_unary_minus_func_uint16_t_u(((l_88 |= (((safe_mul_func_uint8_t_u_u((l_87 , (((l_22 = ((l_35 = ((g_48 >= (0xEBE8L < g_77)) <= l_35)) & l_23.f1)) , g_29) > 0xF1AAC2B2L)), l_23.f0.f1)) < 0x29F4L) | 0UL)) > l_89))))) <= l_89)))
            { 
                uint32_t l_99 = 0xD53B9309L;
                int32_t l_103 = 0xC1214802L;
                g_104[0][0] = ((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_48, 1)), (!((g_3 > ((l_99 & (g_34 = (l_103 = (((safe_rshift_func_uint8_t_u_s(l_22, 0)) || l_75) == l_102)))) <= g_48)) != l_35)))), 15)) , l_35);
            }
            else
            { 
                int32_t l_114 = (-7L);
                int32_t l_116 = 0L;
                l_116 |= (l_89 ^= (((safe_mul_func_uint8_t_u_u((((0x4832L ^ (g_104[1][0] = (((safe_add_func_uint16_t_u_u((((g_3 , (!(safe_mod_func_int8_t_s_s(g_76, l_22)))) , 0x77908E2AL) > l_75), l_68)) > l_114) , 0xFB6DL))) > 0UL) & g_48), l_87.f0)) | l_115) > 0xB375AFA8L));
            }
        }
    }
    else
    { 
        int8_t l_121 = 0L;
        int32_t l_162 = 1L;
        int32_t l_182[1];
        int i;
        for (i = 0; i < 1; i++)
            l_182[i] = 0xBCAFD48EL;
        for (g_48 = 7; (g_48 != (-20)); g_48--)
        { 
            uint16_t l_124 = 65531UL;
            int32_t l_151 = 0L;
            if ((safe_mod_func_int16_t_s_s((8UL | (l_121 > (l_124 = (safe_rshift_func_uint8_t_u_s(g_104[0][0], ((4294967295UL & g_3) || l_88)))))), g_48)))
            { 
                g_127 = (safe_mod_func_uint32_t_u_u(g_24.f0, l_124));
            }
            else
            { 
                uint32_t l_130 = 0xBEB14036L;
                int16_t l_133 = 0xD716L;
                g_135 = (safe_mul_func_int16_t_s_s(((((((func_7((l_130--), l_133, l_134, l_133) , l_2) | g_34) < g_104[0][0]) & g_34) <= 0xEE2B1DE1L) >= g_48), g_34));
            }
            if (((safe_unary_minus_func_int64_t_s(((+((((safe_rshift_func_uint8_t_u_u((g_153 = ((7UL ^ (safe_unary_minus_func_int8_t_s(((safe_div_func_uint32_t_u_u((g_152 |= (0x090DF5CE33710A17LL != (((l_151 ^= (((++g_127) & (safe_mul_func_int8_t_s_s((((safe_sub_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s(g_74, l_121)) >= 5L) > g_3), g_34)) < g_135) && l_121), 1UL))) == l_121)) , l_151) & g_104[3][1]))), g_48)) && 0xD7C28814L)))) , g_77)), 0)) <= l_124) , g_24.f1) > l_23.f0.f0)) ^ 0x4B66L))) || 3UL))
            { 
                int32_t l_154 = 0x0126A6CCL;
                const union U2 l_155[5][4][4] = {{{{0x08L},{0xB1L},{0xA0L},{-1L}},{{-1L},{0xAEL},{0xB9L},{0xB1L}},{{7L},{0xB9L},{0xB9L},{7L}},{{-1L},{1L},{0xA0L},{0xC4L}}},{{{0x08L},{0x2AL},{0xC4L},{0x2BL}},{{0xC4L},{0x2BL},{0x21L},{0x2BL}},{{0xB9L},{0x2AL},{0xAEL},{0xC4L}},{{-7L},{1L},{0x2BL},{7L}}},{{{0xAEL},{0xB9L},{0xB1L},{0xB1L}},{{0xAEL},{0xAEL},{0x08L},{1L}},{{0xC4L},{0xB9L},{0x2BL},{0x2AL}},{{7L},{-1L},{-7L},{0x2BL}}},{{{0xB1L},{-1L},{0xB1L},{0x2AL}},{{-1L},{0xB9L},{0x21L},{1L}},{{1L},{0x2BL},{7L},{0xB9L}},{{0xAEL},{7L},{7L},{0xAEL}}},{{{1L},{0x2AL},{0x21L},{0xB1L}},{{-1L},{0xA0L},{0xB1L},{0x08L}},{{0xB1L},{0x08L},{-7L},{0x08L}},{{7L},{0xA0L},{0x2BL},{0xB1L}}}};
                int i, j, k;
                l_154 = g_76;
                l_162 |= (l_155[2][3][2] , (safe_add_func_uint32_t_u_u(4294967290UL, (safe_unary_minus_func_int64_t_s((safe_unary_minus_func_uint32_t_u((8L == (safe_sub_func_uint64_t_u_u(g_153, g_76))))))))));
            }
            else
            { 
                g_184 = (g_183 = (+(safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((g_3 & ((0x2D939DEFL <= (safe_div_func_uint64_t_u_u((g_77 &= (safe_div_func_int8_t_s_s((l_182[0] &= ((safe_sub_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((l_134.f0 >= ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u(g_104[3][1], 0x34FEL)), 0L)) | g_74)) <= 0x8499L) == g_24.f1), 0x1B690FF0A8A3E14BLL)) < l_162), g_24.f0)) == g_3), 2UL)) || l_151)), g_48))), 0x2C582E535A6E075ELL))) < 0x61L)), g_33)) <= 0UL), l_162))));
                return g_48;
            }
        }
    }
    return g_183;
}



static struct S0  func_7(uint32_t  p_8, uint16_t  p_9, union U2  p_10, int8_t  p_11)
{ 
    int16_t l_42 = 0xFDB8L;
    struct S0 l_52 = {0xB015869B92B2C22BLL,0x0D90L};
    for (p_10.f0 = 0; (p_10.f0 != 2); p_10.f0 = safe_add_func_uint32_t_u_u(p_10.f0, 2))
    { 
        int32_t l_39[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
        struct S0 l_43 = {0x4F89C894628AEA38LL,7UL};
        int i;
        l_39[2] |= p_10.f0;
        for (g_33 = 0; (g_33 <= 4); g_33 += 1)
        { 
            struct S0 l_44 = {18446744073709551614UL,0xE831L};
            if ((g_29 | (safe_mod_func_uint8_t_u_u((p_10 , (0xA9550690L < (p_8 == p_8))), l_42))))
            { 
                const struct S0 l_45 = {0xD05B3B6AC8918CB0LL,0x9D62L};
                l_44 = l_43;
                l_44 = l_45;
            }
            else
            { 
                uint32_t l_46 = 1UL;
                int32_t l_47 = 0x37F0D306L;
                l_47 |= l_46;
            }
            for (l_43.f0 = 0; (l_43.f0 <= 4); l_43.f0 += 1)
            { 
                uint32_t l_49 = 0x7BEBA6E3L;
                l_49++;
            }
        }
    }
    return l_52;
}



static uint32_t  func_12(int16_t  p_13, int32_t  p_14, uint32_t  p_15)
{ 
    g_33 = (safe_unary_minus_func_int32_t_s(p_13));
    return g_34;
}



static union U1  func_16(int32_t  p_17, int32_t  p_18, uint8_t  p_19, int32_t  p_20, union U1  p_21)
{ 
lbl_27:
    p_21.f0 = g_24;
    for (p_18 = (-22); (p_18 == (-10)); p_18 = safe_add_func_int8_t_s_s(p_18, 7))
    { 
        uint64_t l_28 = 3UL;
        if (p_18)
            goto lbl_27;
        l_28 |= g_24.f0;
        if (p_18)
            goto lbl_27;
    }
    --g_29;
    return p_21;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
